                  Welcome to our project! 👋

---------------------------PBL1------------------------

* Giáo Viên hướng dẫn: TS Nguyễn Duy Nhật Viễn

✨ Demo 

1. Giới thiệu về dự án:

   1.1. Ý tưởng:
   
     Để hệ thống nhà xe của Trường Đại Học Bách Khoa hiện đại hơn, mỗi lúc đi học, sinh viên sẽ đỡ mất thời gian trong việc gửi xe, vị trí để xe được bố trí hợp lí, tránh lãng phí diện tích nhà xe, tụi em đề xuất dự án kiểm soát nhà xe bách khoa bằng công nghệ.
     
   1.2.	Mục tiêu:
   
- Quản lí danh sách nhân viên nhà xe, ca trực, tổng thu mỗi ca.
- Tạo thẻ thông minh, thẻ xe cho sinh viên, lưu thông tin cá nhân, thông tin xe của mỗi sinh viên.
- Thanh toán phí gửi xe tự động.
- Vị trí để xe được hiển thị cụ thể.
- Lưu lại lịch sử vào ra của mỗi lượt xe.
- Kiểm tra thẻ, xe chặt chẽ.

   1.3. Ngôn ngữ sử dụng:
   
     C++
     
   1.4.  Cách cài đặt.
   
Bạn có thể dowload source code về và khởi chạy trên các IDE có hỗ trợ ngôn ngữ lập trình C++.

Gợi ý: 

Bạn có thể tải một số IDE sau:

Visual Studio Code tại đây: https://code.visualstudio.com/download

DevC tại đây: https://sourceforge.net/projects/orwelldevcpp/

Visual Studio: https://visualstudio.microsoft.com/downloads/

🚀 Cách sử dụng:

B1: Nhấn phím bất kì để bắt đầu project

![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/2dc07b49-8507-48e9-9592-05f9aa4ca991)


B2: Nhập lựa chọn


![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/810a57fd-1fec-4413-83c0-3f6cd2f3e89b)


     - Nhấn phím [1] để đăng nhập màn hình
     
     - Nhấn phím [2] để thoát khỏi chương trình
     
B3: 

    * Nếu nhấn phím [1], hiển thị màn hình đăng nhập:
    

    -   Nhập số điện thoại và mật khẩu
     
     
     - Nếu nhập sai số điện thoại, màn hình hiển thị nhân viên không tồn tại và tắt màn hình.
  ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/82e79592-5672-494c-9e87-d3ebbe60544d)

     
     
     - Nếu nhập sai mật khẩu, chương trình sẽ yêu cầu nhập lại.
![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/51c5791d-ba07-4f71-be13-c767b21a398e)

     
     
     - Nếu nhập đúng số điện thoại và mật khẩu, hiện thông báo đăng nhập thành công, thông tin nhân viên được hiển thị.
![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/51eef605-62a3-4c6f-9ad4-4105e6fcf848)
     ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/46c49c48-f2ab-4a52-b3da-00650395eb78)


         

   * Nếu nhấn phím [2], hiển thị giao diện bắt đầu project

B4: Nhân viên nhập số lượng chỗ để xe còn trống.


![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/376bb191-cc1a-4786-a247-843fae5b20a0)



B5: Hiển thị giao diện chọn chức năng.


![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/128672642/ad2a7c2f-38e4-45c9-9ab4-a91965c493ef)

     
     +  Nhấn phím [1] để đi vào
     
     +  Nhấn phím [2] để đi ra
     
     +  Nhấn phím [3] để đăng xuất
     
B6: 
  * Nếu nhấn phím [1]: 

     - Tiếp tục nhập số thẻ xe (1 - 10)
        
     - Nhập loại xe 
     
        + Chú ý: Nhập đúng theo mẫu (xemay/xedap/oto), nếu nhập sai sẽ phải nhập lại đến khi đúng
    
     - Nhập biển số xe (với xe đạp thì bước này được tự động bỏ qua)
     
    ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/b16ea8e9-0179-4b01-84b1-4e20b73a60bd)

     
     => Hiển thị và ghi lại thông tin lượt xe, thời điểm vào, thông tin sinh viên.
     
    ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/310801ed-f732-4e23-a85e-5a2f1c1c92cb)

    ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/6d9821ce-9cfc-45b0-a169-3d189ff2bd7d)


     - Nhấn phím [1] (chọn hành động đỗ xe)
     
    ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/4dd7b38f-f5ae-453d-863a-5c7f19cbba32)


     
     - Nhấn phím [3] để thoát.
     
* Nếu nhấn phím [2]:

     - Nhập lại số thẻ xe để đi ra
     
    ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/333dc92b-1d8c-41e5-987e-51ed8e79b4c4)

     
     - Nhấn phím [2] (chọn hành động lấy xe)
     
     - Nhập chỗ để xe cần lấy, biển số xe (với xe đạp thì không cần nhập biển số)
     
     -> Nếu đúng biển số, màn hình hiển thị, ghi lại thông tin thời điểm xe khỏi bãi.
     
     ![image](https://github.com/uyenphuong01/PBL1-Nha-Xe-Thong-Minh-Bach-Khoaa/assets/130825778/c26f42b3-2fee-4c2c-afd6-383b2a192ef2)

     
     -> Nếu nhập biển số không giống với lúc đi vào, màn hình hiển thị xe bị giữ lại, khiển trách.
   
     
B7: Nếu nhấn phím [3] (đăng xuất):

Hiển thị giao diện bắt đầu project, đồng thời file sẽ ghi lại tổng doanh thu của ca trực.

🤝 Contributors:

     - Nguyễn Thị Uyên Phương 22KTMT1
     - Nguyễn Văn Quý 22KTMT1
     
 *Liên lạc với chúng tôi:
 
   #Facebook:
   
     https://www.facebook.com/SHITA123.gg
     
     https://www.facebook.com/luvyouso.chocung/
     
   #Gmail:
   
     + nquy1357@gmail.com 
     + uyenphuong112000@gmail.com
       
2. Nguồn tham khảo:

   [1]. Thao tác vào ra file cơ bản từ CodeLearn:
https://codelearn.io/sharing/su-dung-file-sieu-co-ban-voi-cpp

   [2]. Hàm thời gian:
https://codelearn.io/sharing/5-phut-tim-hieu-date-va-time-trong-cpp

   [3]. Hàm gotoxy:
https://cachhoc.net/2013/08/22/cc-gotoxy-trong-dev-c-gotoxy-in-dev-c/?fbclid=IwAR0TpaIlIZNlpRNvFOai2fxydGyHd0YTk-W7PgoKXzQbZilIN-eZsC3yd1g
   
   [4]. Mảng, vòng lặp for:
https://codelearn.io/learning/cpp-advanced?fbclid=IwAR1RK17C9YYunMZ7ZKwKVR4oToPU52NTPQ9LmgePETOxPUpWLJT2onAHYjs

   [5]. Kiến thức về lập trình hướng đối tượng:
 https://nhatvien.com/courses/lap-trinh-huong-doi-tuong/
  
  3.  Lời cảm ơn.
 
Xin gửi lời cảm ơn đến:

+ Thầy Nguyễn Duy Nhật Viễn: Giáo viên hướng dẫn.

+ Tất cả những người đã trải nghiệm thử dự án và đưa ra đánh giá.

