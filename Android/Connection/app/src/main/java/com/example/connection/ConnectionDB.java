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

    private static String url,query;
    private static Connection connection;
    private static TextView _status;
    private static Statement stmt;
    private static ResultSet rs;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        var binding = ActivityConnectionDbBinding.inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        ConnectionDB();
        setContentView(viewRoot);
    }
    @SuppressLint("NotConstructor")
    public void ConnectionDB(){
        var binding = ActivityConnectionDbBinding.inflate(getLayoutInflater());

        try {
            Class.forName("com.mysql.jdbc.Driver").newInstance();
            connection =(Connection) DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/AndroidDB","root","123456");
            stmt=(Statement) connection.createStatement();
            rs=stmt.executeQuery("select * from users");
            while (rs.next()){
                binding.status.setText(rs.getString("UserId")+rs.getString("TC")+rs.getString("Password"));
            }
            binding.status.setText(rs.getInt(0));

        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        } catch (InstantiationException e) {
            e.printStackTrace();
        }


    }
}