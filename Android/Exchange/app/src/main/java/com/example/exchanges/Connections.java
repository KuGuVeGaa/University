package com.example.exchanges;

import android.app.Activity;
import android.content.Intent;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ComponentActivity;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import com.example.exchanges.HomePage;
import com.example.exchanges.databinding.ActivityHomePageBinding;
import com.example.exchanges.databinding.ActivityLoginBinding;

public class Connections extends HomePage {
    private static OkHttpClient client;
    private static String url,name,price,myresponse;
    private static Request request;
    private static Document document;

   /* public void ConnectionDB() {
        var binding = ActivityHomePageBinding.inflate(getLayoutInflater());
        try {
            // JDBC sürücüsünü yükle
            Class.forName("com.mysql.jdbc.Driver");

            // Bağlantı dizesini oluştur
            String url = "jdbc:mysql://127.0.0.1:3306/androiddb";

            // Veritabanına bağlanmak için Connection sınıfını kullan
            Connection conn = DriverManager.getConnection(url, "root", "123456");

            // SQL sorgusunu oluşturun ve veritabanında çalıştır
            String sql = "SELECT * FROM users";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(sql);

            // Sonuçları yazdır
            while (rs.next()) {
                binding.textName.setText(rs.getInt("UserId") + "\t" +
                        rs.getString("TC") + "\t" +
                        rs.getString("Password"));
            }
        }
        catch (SQLException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }*/
    }