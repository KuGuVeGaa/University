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

    private static TextView text;
    private static OkHttpClient client;
    private static String url,myresponse,title;
    private static Request request;
    private static RequestBody requestBody;
    private static Document document;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home_page);

        Connection();
    }
    public void Connection() {
        client = new OkHttpClient();
        url = "https://bigpara.hurriyet.com.tr/borsa/canli-borsa/";
        request = new Request.Builder().url(url).addHeader("accept","application/json").build();
        text = (TextView) findViewById(R.id.textView);

        client.newCall(request).enqueue(new Callback() {
            @Override
            public void onFailure(@NonNull Call call, @NonNull IOException e) {
                e.printStackTrace();
            }

            @Override
            public void onResponse(@NonNull Call call, @NonNull Response response) throws IOException {
                if (response.isSuccessful()){
                    myresponse = response.body().string();
                    document = Jsoup.connect("https://bigpara.hurriyet.com.tr/borsa/canli-borsa/").get();
                    title = String.valueOf(document.getElementById("h_td_alis_id_AEFES").text());

                    HomePage.this.runOnUiThread(new Runnable() {
                        @Override
                        public void run() {
                            text.setText(title);
                        }
                    });
                }
            }
        });
    }
}