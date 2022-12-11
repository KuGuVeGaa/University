package com.example.connection;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.widget.TextView;

import com.example.connection.databinding.ActivityConnectionDbBinding;

import com.mysql.jdbc.Driver;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class ConnectionDB extends AppCompatActivity {



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        var binding = ActivityConnectionDbBinding.inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        ConnectionD();
        setContentView(viewRoot);
    }

    public void ConnectionD(){
        var binding = ActivityConnectionDbBinding.inflate(getLayoutInflater());
        try {
        // JDBC sürücüsünü yükle
        Class.forName("com.mysql.jdbc.Driver");

        // Bağlantı dizesini oluştur
        String url = "jdbc:mysql://127.0.0.1:3306/AndroidDB";

        // Veritabanına bağlanmak için Connection sınıfını kullan
        Connection conn = DriverManager.getConnection(url, "root", "123456");

        // SQL sorgusunu oluşturun ve veritabanında çalıştır
        String sql = "SELECT * FROM users";
        Statement stmt = conn.createStatement();
        ResultSet rs = stmt.executeQuery(sql);

        // Sonuçları yazdır
        while (rs.next()) {
            binding.status.setText(rs.getInt("id") +  "\t" +
                    rs.getString("isim") + "\t" +
                    rs.getString("soyisim"));
        }
    } catch (Exception e) {
        e.printStackTrace();
    }






}
}