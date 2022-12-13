package com.example.exchanges;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.TextUtils;
import android.widget.TextView;

import com.example.exchanges.databinding.ActivityHomePageBinding;
import com.example.exchanges.databinding.ActivityLoginBinding;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

public class HomePage extends AppCompatActivity{

    private static TextView scroll;
    private static OkHttpClient client;
    private static String url,myresponse,name,price;
    private static Request request;
    private static RequestBody requestBody;
    private static Document document;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        var binding = ActivityHomePageBinding .inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        webScrap(binding.textName,binding.textPrice,"h_b_ad_id_AEFES","h_td_fiyat_id_AEFES");
        webScrap(binding.textName1,binding.textPrice1,"h_b_ad_id_AGHOL","h_td_fiyat_id_AGHOL");
        scrollText();

        setContentView(viewRoot);
    }
    public void scrollText(){
        var binding = ActivityHomePageBinding .inflate(getLayoutInflater());

        scroll =(TextView) findViewById(R.id.scrollingText);
        scroll.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        scroll.setSelected(true);

    }
    public void webScrap(TextView _findName, TextView _findPrice, String idName, String idPrice) {
        client = new OkHttpClient();
        url = "https://uzmanpara.milliyet.com.tr/canli-borsa/";
        request = new Request.Builder().url(url).addHeader("accept","application/json").build();

        client.newCall(request).enqueue(new Callback() {
            @Override
            public void onFailure(@NonNull Call call, @NonNull IOException e) {
                e.printStackTrace();
            }

            @Override
            public void onResponse(@NonNull Call call, @NonNull Response response) throws IOException {
                if (response.isSuccessful()){
                    myresponse = response.body().string();
                    document = Jsoup.connect("https://uzmanpara.milliyet.com.tr/canli-borsa/").get();
                    name = document.getElementById(idName).text();
                    price = document.getElementById(idPrice).text();


                    HomePage.this.runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            _findName.setText(name);
                            _findPrice.setText(price);
                        }
                    });
                    response.close();
                }
            }
        });

    }

}