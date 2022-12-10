package com.example.connection;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.connection.databinding.ActivityMainBinding;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

import java.io.IOException;
import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

public class MainActivity extends AppCompatActivity {

        private static TextView status;
        private static OkHttpClient client;
        private static String url,myresponse,name,price;
        private static Request request;
        private static Document document;

        @Override
        protected void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);

            var binding = ActivityMainBinding.inflate(getLayoutInflater());
            var viewRoot = binding.getRoot();

            Connection(binding.textName,binding.textPrice,"h_b_ad_id_AEFES","h_td_fiyat_id_AEFES");
            Connection(binding.textName1,binding.textPrice1,"h_b_ad_id_AGHOL","h_td_fiyat_id_AGHOL");

            setContentView(viewRoot);
        }
        public void Connection(TextView _findName, TextView _findPrice, String idName, String idPrice) {
            client = new OkHttpClient();
            url = "https://uzmanpara.milliyet.com.tr/canli-borsa/";
            request = new Request.Builder().url(url).addHeader("accept","application/json").build();

            client.newCall(request).enqueue(new Callback() {
                @Override
                public void onFailure(@NonNull Call call, @NonNull IOException e) {
                    e.printStackTrace();
                }

                @Override
                public void onResponse(@NonNull Call call, @NonNull Response response){
                    if (response.isSuccessful()){
                        try {
                            myresponse = response.body().string();
                            document = Jsoup.connect("https://uzmanpara.milliyet.com.tr/canli-borsa/").get();
                            name = document.getElementById(idName).text();
                            price = document.getElementById(idPrice).text();
                            status = (TextView) findViewById(R.id.status);
                        }
                        catch (IOException e){
                            e.printStackTrace();
                        }

                        MainActivity.this.runOnUiThread(new Runnable() {
                            @Override
                            public void run() {
                                 status.setText(myresponse);
                                _findName.setText(name);
                                _findPrice.setText(price);
                            }
                        });

                    }
                }
            });

        }
    }