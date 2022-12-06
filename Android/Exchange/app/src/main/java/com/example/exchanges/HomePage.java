package com.example.exchanges;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

public class HomePage extends AppCompatActivity {

    private static TextView textName,textPrice,textBuy;
    private static OkHttpClient client;
    private static String url,myresponse,name,price;
    private static Request request;
    private static RequestBody requestBody;
    private static Document document;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home_page);

        Connection("h_b_ad_id_AEFES","h_td_fiyat_id_AEFES");
    }
    public void Connection(String idName,String idPrice) {
        client = new OkHttpClient();
        url = "https://uzmanpara.milliyet.com.tr/canli-borsa/";
        request = new Request.Builder().url(url).addHeader("accept","application/json").build();
        textName =  findViewById(R.id.textName);
        textPrice =  findViewById(R.id.textPrice);

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
                    name = String.valueOf(document.getElementById(idName).text());
                    price = String.valueOf(document.getElementById(idPrice).text());

                    HomePage.this.runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            textName.setText(name);
                            textPrice.setText(price);
                        }
                    });
                }
            }
        });
    }
}