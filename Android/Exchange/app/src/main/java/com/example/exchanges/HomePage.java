package com.example.exchanges;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.TextUtils;
import android.widget.Spinner;
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
    private Spinner spinner;
    customadapter adapter;

    String [] names = {"Afghanistan (AF)","Aland Island (AX)","Albania(AL)","Algeria (DZ)","American Samoa (AS)","Andorra(AD)","Angola (AO)","Anguilla (Al)","Antartica(AQ)","Antigua and Barbuda (AG)","Aregentina(AG)","Armenia (AM)","Aruba (AW)","Australia (AU)","Austria (AT)","Azerbaijan (AZ)","Bahamas (BS)","Bahrain (BH)","Bangladesh (BD)","Barbados (BB)","Belarus (BY)","belgium (BE)","Belize (BZ)","Benin (BJ)","Bermuda (BM)","Bhutan (BT)",

            "Bolivia, Pleurinational State of (BO)","Bosnia and Herzegovina (BA)","Botswana (BW)","Brazil (BR)","British Indian Ocean Territory (IO)","British Virgin Islands (VG)","Brunei Darussalam (BN)","Bulgaria ( BG)","Burkina Faso (BF)","Burundi (BI)","Cambodia (KH)","Cameroon (CM)","Canada (CA)","Cape Verde (CV)","Cayman Islands (KY)","Central African Republic (CF)","Chad (TD)","Chile (CL)","China (CN)","Christmas Island (CX)","Cocos(kelling) Islands (CC)","Colombia (CO)","Comoros (KM)","Congo (CG)","Congo, The Democratic Republic Of The (CD)","Cook Islands (CK)","Costa Rica (CR)","Cote divoire (CL)","Croatia (HR)","Cuba (CU)","Curacao(CW)","Cyprus (CY)","Czech Republic (CZ)","Denmark (DK)","Dijibouti (DJ)","Dominica (DM)","Dominican Republic (DO)","Ecuador (EC)","Egypt (EG)","El Salvador (SV)","Equatorial Guiena(GQ)","Eritrea (ER)","Estonia (EE)","Ethioia (ET)","Falkland Islands (malvinas) (FK)","Faroe Islands (FO)","Fiji (FJ)","Finland (FL)","France (FR)","French Guyana (GF)","French Polynesia (PF)","Gabon (GA)","Gambia (GM)","Georgia (GE)","Germany (DE)","Ghana (GH)","Gibralter (Gl)","Greece (GR)","Greenland (GL)","Grenada (GD)","Guadeloupe (GP)","Guam (GU)","Guatemala (GT)","Guemsey (GG)","Guinea (GN)","Guinea-bissau (GW)","Guyana (GY)","Haiti (HT)","Holy See (Vatican City State) (VA)","Honduras (HN)","Hong Kong (HK)","Hungary (HU)","Iceland (IS)","India (IN)","Indonesia (ID)","Iran, Islamic Republic Of (IR)","Iraq (IQ)","Ireland (IE)","Isle Of Man (IM)","Israel (IL)","Italy (IT)","Jamaica (JM)","Japan (JP)","Jersey (JE)","Jordan (JO)","Kazakhstan (KZ)","Kenya (KE)","Kiribati (Kl)","Kosovo (XK)","Kuwait (KW)","Kyrgyzstan (KG)","Lao People's Democratic Republic (LA)","Latvia (LV)","Lebanon (LB)","Lesotho (LS)","Liberia (LR)","Libya (LY)","Liechtenstein (LI)","Lithuania (LT)","Luxembourg (LU)","Macau (MO)","Macedonia (FYROM) (MK)","Madagascar (MG)","Malawi (MW)","Malaysia (MY)","Maldives (MV)","Mali (ML)","Malta (ML)","Marshall Islands (MH)","Martinique (MQ)","Mauritania (MR)","Mauritius (MU)","Mayotte (YT)","Maxico (MX)","Micronesia, Federated States Of  (FM)","Moldova, Republic Of (MD)","Monaco (MC)","Mangolia (MN)","Montenegro (ME)","Montserrat (MS)","Morocco (MA)","Mozambique (MZ)","Myanmar (MM)","Namibia (NA)","Nauru (NR)","Nepal (Np)","Netherlands (NL)","New Caledonia (NC)","New Zealand (NZ)","Nicaragua (NI)","Niger (NE)","Nigeria (NG)","Niue (NU)","Norfolk islands (NF)","North Korea (KP)","Northern Mariana islands (MP)","Norway (NO)","Oman (OM)","Pakistan (PK)","Palau (PW)","Palestine (PS)","Panama (PA)","Papua New Guinea (PG)","Paraguay (PY)","Peru (PE)","Philipines (PH)","Pitcaim Islands (PN)","Poland (PL)","Portugal (PT)","Puerto Rico (PR)","Qatar (QA)","Reunion (RE)","Romania (RO)","Russian Federation (RU)","Rawanda (RW)","Saint Barthelelemy (BL)","Saint Helena,Ascension And Tristan Da Cunha(SH)","Saint Kitts and Nevis (KN)","Saint Lucia (LC)","Saint Martin (MF)","Saint Pierre And Miquelon (PM)","Saint Vincent & The Grenadines (VC)","Samoa (WS)","San Marino (SM)","Sao Tome And Principe (ST)","Saudi Arabia (SA)","Senegal (SN)","Serbia (RS)","Seychelles (SC)","Sierra Leone (SL)","Singapore (SG)","Sint Marten (SX)","Slovakia (SK)","Slovenia (SL)","Solomon Islands (SB)","Somalia (SO)","South Africa (ZA)","South Korea (KR)","South Sudan (SS)","Spain (ES)","Sri Lanka (LK)","Sudan (SD)","Suriname (SR)","Swaziland (SZ)","Sweden (SE)","Switzerland (CH)","Syrian Arab Republic (SY)","Taiwan (TW)","Tajikistan (TJ)","Tanzania, United Republic Of (TZ)","Thailand (TH)","Timor-leste (TL)","Togo (TG)"," Tokelau(TK)","Tonga (TO)","Trinidad & Tabago (TT)","Tunisisa (TN)","Turkey (TR)","Turkmenistan (TM)","Turks and Caicos Islands (TC)","Tuvalu (TV)","Uganda (UG)","Ukraine (UA)","United Arab Emirates (UAE) (AE)","United Kingdom (GB)","United States (US)","Urguay (UY)","US Virgin Islands (VI)","Uzbekistan (UZ)","Vanuatu (VU)","Venezuela, Bolivarian Republic Of (VE)","Vietnam (VN)","Wallis And Futuna (WF)","Yemen (YE)","Zambia (ZM)","Zimbabwe (ZW)"};

    int [] images = {R.drawable.a,R.drawable.b,R.drawable.c,R.drawable.d,R.drawable.e,R.drawable.f,R.drawable.g,R.drawable.h,R.drawable.i,R.drawable.j,R.drawable.k,R.drawable.l,R.drawable.m,R.drawable.n,R.drawable.o,R.drawable.p,R.drawable.q,R.drawable.r,R.drawable.s,R.drawable.t,R.drawable.u,R.drawable.v,R.drawable.w,R.drawable.x,R.drawable.y,R.drawable.z,

            R.drawable.za,R.drawable.zb,R.drawable.zc,R.drawable.zd,R.drawable.bra,R.drawable.ze,R.drawable.zf,};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        var binding = ActivityHomePageBinding .inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        //webScrap(binding.textName,binding.textPrice,"h_b_ad_id_AEFES","h_td_fiyat_id_AEFES");
        //webScrap(binding.textName1,binding.textPrice1,"h_b_ad_id_AGHOL","h_td_fiyat_id_AGHOL");

        adapter = new customadapter(this,names,images);
        binding.spinnerid.setAdapter(adapter);
        setContentView(viewRoot);

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