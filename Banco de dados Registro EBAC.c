From: <Saved by Blink>
Snapshot-Content-Location: https://sqlfiddle.com/oracle/online-compiler?id=d484f324-2e61-49b7-afa7-00b08279fb59
Subject: Banco de dados Registro EBAC
Date: Sun, 30 Jun 2024 19:42:51 -0300
MIME-Version: 1.0
Content-Type: multipart/related;
	type="text/html";
	boundary="----MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----"


------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/html
Content-ID: <frame-5B1B3A5CA34A885DD18C8EEF9E192AA5@mhtml.blink>
Content-Transfer-Encoding: quoted-printable
Content-Location: https://sqlfiddle.com/oracle/online-compiler?id=d484f324-2e61-49b7-afa7-00b08279fb59

<!DOCTYPE html><html lang=3D"en"><head><meta http-equiv=3D"Content-Type" co=
ntent=3D"text/html; charset=3DUTF-8"><link rel=3D"stylesheet" type=3D"text/=
css" href=3D"cid:css-77caeaa6-a304-43af-b4f6-ae131151a0fd@mhtml.blink" />

   =20
    <meta name=3D"viewport" content=3D"width=3Ddevice-width, initial-scale=
=3D1">

    <title>Banco de dados Registro EBAC</title>
    <meta name=3D"description" content=3D"Banco de dados de registro de fun=
cion=C3=A1rios e alunos da EBAC">
    <meta name=3D"keywords">
    <link rel=3D"icon" type=3D"image/png" href=3D"https://sqlfiddle.com/ass=
ets/images/icon.png">
        <link rel=3D"canonical" href=3D"https://sqlfiddle.com/oracle/online=
-compiler?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59">=20
    <link rel=3D"stylesheet" href=3D"https://cdn.jsdelivr.net/npm/bootstrap=
@5.3.2/dist/css/bootstrap.min.css" crossorigin=3D"anonymous">
    <link rel=3D"stylesheet" type=3D"text/css" href=3D"https://sqlfiddle.co=
m/assets/css/sqlfiddle.min.css?v=3D1.0.0.33255">
   =20
    <link rel=3D"stylesheet" href=3D"https://cdnjs.cloudflare.com/ajax/libs=
/codemirror/6.65.7/codemirror.min.css" crossorigin=3D"anonymous" referrerpo=
licy=3D"no-referrer">
    <link rel=3D"stylesheet" href=3D"https://cdnjs.cloudflare.com/ajax/libs=
/codemirror/6.65.7/addon/hint/show-hint.min.css" crossorigin=3D"anonymous" =
referrerpolicy=3D"no-referrer">


   =20

   =20
   =20

</head>
<body>
    <div b-4b5m7q5k1x=3D"" class=3D"body-inner d-flex">
        <div b-4b5m7q5k1x=3D"" id=3D"sidebar" class=3D"sidebar" style=3D"wi=
dth: 645px;">

            <div b-4b5m7q5k1x=3D"" class=3D"d-flex align-items-start flex-c=
olumn" style=3D"height: 100%; width: 100%">
                <div b-4b5m7q5k1x=3D"" class=3D"mb-auto sticky-top" style=
=3D"width: 100%;">

                    <header b-4b5m7q5k1x=3D"" class=3D"">

                        <div b-4b5m7q5k1x=3D"" class=3D"brand">
                            <a b-4b5m7q5k1x=3D"" href=3D"https://sqlfiddle.=
com/">
                                <svg b-4b5m7q5k1x=3D"" xmlns=3D"http://www.=
w3.org/2000/svg" width=3D"24" height=3D"24" fill=3D"currentColor" class=3D"=
bi bi-database-check" viewBox=3D"0 0 16 16">
                                    <path b-4b5m7q5k1x=3D"" d=3D"M12.5 16a3=
.5 3.5 0 1 0 0-7 3.5 3.5 0 0 0 0 7m1.679-4.493-1.335 2.226a.75.75 0 0 1-1.1=
74.144l-.774-.773a.5.5 0 0 1 .708-.708l.547.548 1.17-1.951a.5.5 0 1 1 .858.=
514"></path>
                                    <path b-4b5m7q5k1x=3D"" d=3D"M12.096 6.=
223A5 5 0 0 0 13 5.698V7c0 .289-.213.654-.753 1.007a4.5 4.5 0 0 1 1.753.25V=
4c0-1.007-.875-1.755-1.904-2.223C11.022 1.289 9.573 1 8 1s-3.022.289-4.096.=
777C2.875 2.245 2 2.993 2 4v9c0 1.007.875 1.755 1.904 2.223C4.978 15.71 6.4=
27 16 8 16c.536 0 1.058-.034 1.555-.097a4.5 4.5 0 0 1-.813-.927Q8.378 15 8 =
15c-1.464 0-2.766-.27-3.682-.687C3.356 13.875 3 13.373 3 13v-1.302c.271.202=
.58.378.904.525C4.978 12.71 6.427 13 8 13h.027a4.6 4.6 0 0 1 0-1H8c-1.464 0=
-2.766-.27-3.682-.687C3.356 10.875 3 10.373 3 10V8.698c.271.202.58.378.904.=
525C4.978 9.71 6.427 10 8 10q.393 0 .774-.024a4.5 4.5 0 0 1 1.102-1.132C9.2=
98 8.944 8.666 9 8 9c-1.464 0-2.766-.27-3.682-.687C3.356 7.875 3 7.373 3 7V=
5.698c.271.202.58.378.904.525C4.978 6.711 6.427 7 8 7s3.022-.289 4.096-.777=
M3 4c0-.374.356-.875 1.318-1.313C5.234 2.271 6.536 2 8 2s2.766.27 3.682.687=
C12.644 3.125 13 3.627 13 4c0 .374-.356.875-1.318 1.313C10.766 5.729 9.464 =
6 8 6s-2.766-.27-3.682-.687C3.356 4.875 3 4.373 3 4"></path>
                                </svg><span b-4b5m7q5k1x=3D"" class=3D"bran=
d-name">SQL Fiddle</span>
                            </a>
                        </div>

                        <div b-c2g4s10ly3=3D"" class=3D"account">
        <div b-c2g4s10ly3=3D"" class=3D"my-2">
            <svg b-c2g4s10ly3=3D"" xmlns=3D"http://www.w3.org/2000/svg" wid=
th=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-person-circle"=
 viewBox=3D"0 0 16 16">
                <path b-c2g4s10ly3=3D"" d=3D"M11 6a3 3 0 1 1-6 0 3 3 0 0 1 =
6 0"></path>
                <path b-c2g4s10ly3=3D"" fill-rule=3D"evenodd" d=3D"M0 8a8 8=
 0 1 1 16 0A8 8 0 0 1 0 8m8-7a7 7 0 0 0-5.468 11.37C3.242 11.226 4.805 10 8=
 10s4.757 1.225 5.468 2.37A7 7 0 0 0 8 1"></path>
            </svg>
            <a b-c2g4s10ly3=3D"" href=3D"https://sqlfiddle.com/oracle/onlin=
e-compiler?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Mauricio Plateiro</a=
>
        </div>
        <div b-c2g4s10ly3=3D"" class=3D"my-2">
            <svg b-c2g4s10ly3=3D"" xmlns=3D"http://www.w3.org/2000/svg" wid=
th=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-box-arrow-righ=
t" viewBox=3D"0 0 16 16">
                <path b-c2g4s10ly3=3D"" fill-rule=3D"evenodd" d=3D"M10 12.5=
a.5.5 0 0 1-.5.5h-8a.5.5 0 0 1-.5-.5v-9a.5.5 0 0 1 .5-.5h8a.5.5 0 0 1 .5.5v=
2a.5.5 0 0 0 1 0v-2A1.5 1.5 0 0 0 9.5 2h-8A1.5 1.5 0 0 0 0 3.5v9A1.5 1.5 0 =
0 0 1.5 14h8a1.5 1.5 0 0 0 1.5-1.5v-2a.5.5 0 0 0-1 0z"></path>
                <path b-c2g4s10ly3=3D"" fill-rule=3D"evenodd" d=3D"M15.854 =
8.354a.5.5 0 0 0 0-.708l-3-3a.5.5 0 0 0-.708.708L14.293 7.5H5.5a.5.5 0 0 0 =
0 1h8.793l-2.147 2.146a.5.5 0 0 0 .708.708z"></path>
            </svg>
            <form method=3D"post" action=3D"https://sqlfiddle.com/account/l=
ogout" class=3D"form-logout">
                <button b-c2g4s10ly3=3D"" type=3D"submit" class=3D"btn btn-=
link">Logout</button>
            </form>
        </div>
        <div b-c2g4s10ly3=3D"" class=3D"account-token my-2">
            <svg b-c2g4s10ly3=3D"" xmlns=3D"http://www.w3.org/2000/svg" wid=
th=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-hurricane" vie=
wBox=3D"0 0 16 16">
                <path b-c2g4s10ly3=3D"" d=3D"M6.999 2.6A5.5 5.5 0 0 1 15 7.=
5a.5.5 0 0 0 1 0 6.5 6.5 0 1 0-13 0 5 5 0 0 0 6.001 4.9A5.5 5.5 0 0 1 1 7.5=
a.5.5 0 0 0-1 0 6.5 6.5 0 1 0 13 0 5 5 0 0 0-6.001-4.9M10 7.5a2 2 0 1 1-4 0=
 2 2 0 0 1 4 0"></path>
            </svg>
            Daily Tokens Left: <span b-c2g4s10ly3=3D"" id=3D"uiDailyTokenLe=
ft">16,170</span>
        </div>
</div>

                        <ul b-4b5m7q5k1x=3D"" class=3D"nav nav-tabs nav-tab=
s-sidebar" id=3D"nav-tabs-sidebar" role=3D"tablist">
                            <li b-4b5m7q5k1x=3D"" class=3D"nav-item" role=
=3D"presentation">
                                <button b-4b5m7q5k1x=3D"" id=3D"tab-tabs-si=
debar-chat" class=3D"nav-link" data-bs-toggle=3D"tab" data-bs-target=3D"#ta=
b-pane-chat" type=3D"button" role=3D"tab" aria-controls=3D"tab-pane-chat" a=
ria-selected=3D"false" tabindex=3D"-1">
                                    <svg b-4b5m7q5k1x=3D"" xmlns=3D"http://=
www.w3.org/2000/svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=
=3D"bi bi-chat-dots" viewBox=3D"0 0 16 16">
                                        <path b-4b5m7q5k1x=3D"" d=3D"M5 8a1=
 1 0 1 1-2 0 1 1 0 0 1 2 0m4 0a1 1 0 1 1-2 0 1 1 0 0 1 2 0m3 1a1 1 0 1 0 0-=
2 1 1 0 0 0 0 2"></path>
                                        <path b-4b5m7q5k1x=3D"" d=3D"m2.165=
 15.803.02-.004c1.83-.363 2.948-.842 3.468-1.105A9 9 0 0 0 8 15c4.418 0 8-3=
.134 8-7s-3.582-7-8-7-8 3.134-8 7c0 1.76.743 3.37 1.97 4.6a10.4 10.4 0 0 1-=
.524 2.318l-.003.011a11 11 0 0 1-.244.637c-.079.186.074.394.273.362a22 22 0=
 0 0 .693-.125m.8-3.108a1 1 0 0 0-.287-.801C1.618 10.83 1 9.468 1 8c0-3.192=
 3.004-6 7-6s7 2.808 7 6-3.004 6-7 6a8 8 0 0 1-2.088-.272 1 1 0 0 0-.711.07=
4c-.387.196-1.24.57-2.634.893a11 11 0 0 0 .398-2"></path>
                                    </svg>
                                    <div b-4b5m7q5k1x=3D"">Chat</div>
                                </button>
                            </li>
                            <li b-4b5m7q5k1x=3D"" class=3D"nav-item" role=
=3D"presentation">
                                <button b-4b5m7q5k1x=3D"" id=3D"tab-tabs-si=
debar-editor" class=3D"nav-link active" data-bs-toggle=3D"tab" data-bs-targ=
et=3D"#tab-pane-editor" type=3D"button" role=3D"tab" aria-controls=3D"tab-p=
ane-history" aria-selected=3D"true">
                                    <svg b-4b5m7q5k1x=3D"" xmlns=3D"http://=
www.w3.org/2000/svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=
=3D"bi bi-code-slash" viewBox=3D"0 0 16 16">
                                        <path b-4b5m7q5k1x=3D"" d=3D"M10.47=
8 1.647a.5.5 0 1 0-.956-.294l-4 13a.5.5 0 0 0 .956.294zM4.854 4.146a.5.5 0 =
0 1 0 .708L1.707 8l3.147 3.146a.5.5 0 0 1-.708.708l-3.5-3.5a.5.5 0 0 1 0-.7=
08l3.5-3.5a.5.5 0 0 1 .708 0m6.292 0a.5.5 0 0 0 0 .708L14.293 8l-3.147 3.14=
6a.5.5 0 0 0 .708.708l3.5-3.5a.5.5 0 0 0 0-.708l-3.5-3.5a.5.5 0 0 0-.708 0"=
></path>
                                    </svg>
                                    <div b-4b5m7q5k1x=3D"">Editor</div>
                                </button>
                            </li>
                            <li b-4b5m7q5k1x=3D"" class=3D"nav-item" role=
=3D"presentation">
                                <button b-4b5m7q5k1x=3D"" class=3D"nav-link=
" id=3D"tab-history" data-bs-toggle=3D"tab" data-bs-target=3D"#tab-pane-his=
tory" type=3D"button" role=3D"tab" aria-controls=3D"tab-pane-history" aria-=
selected=3D"false" tabindex=3D"-1">
                                    <svg b-4b5m7q5k1x=3D"" xmlns=3D"http://=
www.w3.org/2000/svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=
=3D"bi bi-clock-history" viewBox=3D"0 0 16 16">
                                        <path b-4b5m7q5k1x=3D"" d=3D"M8.515=
 1.019A7 7 0 0 0 8 1V0a8 8 0 0 1 .589.022zm2.004.45a7 7 0 0 0-.985-.299l.21=
9-.976q.576.129 1.126.342zm1.37.71a7 7 0 0 0-.439-.27l.493-.87a8 8 0 0 1 .9=
79.654l-.615.789a7 7 0 0 0-.418-.302zm1.834 1.79a7 7 0 0 0-.653-.796l.724-.=
69q.406.429.747.91zm.744 1.352a7 7 0 0 0-.214-.468l.893-.45a8 8 0 0 1 .45 1=
.088l-.95.313a7 7 0 0 0-.179-.483m.53 2.507a7 7 0 0 0-.1-1.025l.985-.17q.1.=
58.116 1.17zm-.131 1.538q.05-.254.081-.51l.993.123a8 8 0 0 1-.23 1.155l-.96=
4-.267q.069-.247.12-.501m-.952 2.379q.276-.436.486-.908l.914.405q-.24.54-.5=
55 1.038zm-.964 1.205q.183-.183.35-.378l.758.653a8 8 0 0 1-.401.432z"></pat=
h>
                                        <path b-4b5m7q5k1x=3D"" d=3D"M8 1a7=
 7 0 1 0 4.95 11.95l.707.707A8.001 8.001 0 1 1 8 0z"></path>
                                        <path b-4b5m7q5k1x=3D"" d=3D"M7.5 3=
a.5.5 0 0 1 .5.5v5.21l3.248 1.856a.5.5 0 0 1-.496.868l-3.5-2A.5.5 0 0 1 7 9=
V3.5a.5.5 0 0 1 .5-.5"></path>
                                    </svg>
                                    <div b-4b5m7q5k1x=3D"">History</div>
                                </button>
                            </li>
                        </ul>
                    </header>
                </div>

                <div b-4b5m7q5k1x=3D"" class=3D"flex-grow-1" style=3D"width=
: 100%">
                    <div b-4b5m7q5k1x=3D"" class=3D"tab-content" id=3D"tab-=
pane-sidebar" style=3D"height:100%">
                        <div b-4b5m7q5k1x=3D"" class=3D"tab-pane tab-pane-c=
hat fade" id=3D"tab-pane-chat" role=3D"tabpanel" aria-labelledby=3D"tab-cha=
t" tabindex=3D"0" style=3D"height:100%">
                           =20


<div b-gr9mj43gnf=3D"" class=3D"sidebar-chat d-flex align-items-start flex-=
column">

            <div b-gr9mj43gnf=3D"" id=3D"sidebar-chat-message" class=3D"sid=
ebar-chat-message mb-auto flex-grow-1 chat-answer">
                <div b-gr9mj43gnf=3D"" id=3D"sidebar-chat-message-inner" cl=
ass=3D"sidebar-chat-message-inner" style=3D"height: 243px;">
                </div>
            </div>
            <div b-gr9mj43gnf=3D"" class=3D"sidebar-chat-prompt">
                <div b-gr9mj43gnf=3D"">
                    <div b-gr9mj43gnf=3D"" id=3D"uiExecuteServerDown" class=
=3D"error-message">
                        <div b-gr9mj43gnf=3D"">Unfortunately, the API is cu=
rrently unresponsive. This issue often occurs when the server resets once a=
 day. Please try again in 5 minutes.</div>
                    </div>
                    <div b-gr9mj43gnf=3D"" class=3D"mb-3">
                        <textarea b-gr9mj43gnf=3D"" id=3D"sidebar_chat_inpu=
t" class=3D"form-control" rows=3D"3" required=3D""></textarea>
                        <div b-gr9mj43gnf=3D"" id=3D"sidebar_chat_input_req=
uired" class=3D"error-message">This field is required</div>
                        <div b-gr9mj43gnf=3D"" id=3D"sidebar_chat_input_min=
length" class=3D"error-message">A text with a minimum 5 characters is requi=
red</div>
                        <div b-gr9mj43gnf=3D"" id=3D"sidebar_chat_input_max=
length" class=3D"error-message">A text with less than 2000 characters is re=
quired</div>
                    </div>
                    <div b-gr9mj43gnf=3D"" class=3D"d-flex justify-content-=
between section-buttons">
                        <div b-gr9mj43gnf=3D"">
                            <button b-gr9mj43gnf=3D"" id=3D"sidebar_chat_co=
ntinue" type=3D"button" class=3D"btn btn-dark">Send</button>
                            <button b-gr9mj43gnf=3D"" id=3D"sidebar-chat-qu=
ick-actions" class=3D"btn btn-dark dropdown-toggle" type=3D"button" data-bs=
-toggle=3D"dropdown" aria-expanded=3D"false" disabled=3D"true">
                                <svg b-gr9mj43gnf=3D"" xmlns=3D"http://www.=
w3.org/2000/svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=3D"=
bi bi-star" viewBox=3D"0 0 16 16">
                                    <path b-gr9mj43gnf=3D"" d=3D"M2.866 14.=
85c-.078.444.36.791.746.593l4.39-2.256 4.389 2.256c.386.198.824-.149.746-.5=
92l-.83-4.73 3.522-3.356c.33-.314.16-.888-.282-.95l-4.898-.696L8.465.792a.5=
13.513 0 0 0-.927 0L5.354 5.12l-4.898.696c-.441.062-.612.636-.283.95l3.523 =
3.356-.83 4.73zm4.905-2.767-3.686 1.894.694-3.957a.56.56 0 0 0-.163-.505L1.=
71 6.745l4.052-.576a.53.53 0 0 0 .393-.288L8 2.223l1.847 3.658a.53.53 0 0 0=
 .393.288l4.052.575-2.906 2.77a.56.56 0 0 0-.163.506l.694 3.957-3.686-1.894=
a.5.5 0 0 0-.461 0z"></path>
                                </svg>
                            </button>
                            <ul b-gr9mj43gnf=3D"" class=3D"dropdown-menu" a=
ria-labelledby=3D"sidebar-chat-prompt-quick-actions-menu">
                                <li b-gr9mj43gnf=3D""><a b-gr9mj43gnf=3D"" =
class=3D"dropdown-item" href=3D"https://sqlfiddle.com/oracle/online-compile=
r?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Continue</a></li>
                                <li b-gr9mj43gnf=3D""><a b-gr9mj43gnf=3D"" =
class=3D"dropdown-item" href=3D"https://sqlfiddle.com/oracle/online-compile=
r?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Clarify</a></li>
                                <li b-gr9mj43gnf=3D""><a b-gr9mj43gnf=3D"" =
class=3D"dropdown-item" href=3D"https://sqlfiddle.com/oracle/online-compile=
r?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Exemplify</a></li>
                                <li b-gr9mj43gnf=3D""><a b-gr9mj43gnf=3D"" =
class=3D"dropdown-item" href=3D"https://sqlfiddle.com/oracle/online-compile=
r?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Expand</a></li>
                                <li b-gr9mj43gnf=3D""><a b-gr9mj43gnf=3D"" =
class=3D"dropdown-item" href=3D"https://sqlfiddle.com/oracle/online-compile=
r?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#">Explain ELI5</a></li>
                            </ul>
                        </div>                       =20
                        <button b-gr9mj43gnf=3D"" type=3D"button" class=3D"=
btn btn-dark">New Chat</button>
                    </div>
                </div>
            </div>
</div>

<!-- custom right click menu -->
<div b-gr9mj43gnf=3D"" id=3D"sidebar_chat_contextmenu" class=3D"dropdown-me=
nu" style=3D"display: none; position: absolute; background-color: white; bo=
rder: 1px solid black; padding: 10px;">
    <a b-gr9mj43gnf=3D"" href=3D"https://sqlfiddle.com/oracle/online-compil=
er?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Cont=
inue</a>
    <a b-gr9mj43gnf=3D"" href=3D"https://sqlfiddle.com/oracle/online-compil=
er?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Clar=
ify</a>
    <a b-gr9mj43gnf=3D"" href=3D"https://sqlfiddle.com/oracle/online-compil=
er?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Exem=
plify</a>
    <a b-gr9mj43gnf=3D"" href=3D"https://sqlfiddle.com/oracle/online-compil=
er?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Expa=
nd</a>
    <a b-gr9mj43gnf=3D"" href=3D"https://sqlfiddle.com/oracle/online-compil=
er?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Expl=
ain ELI5</a>
</div>





                        </div>
                        <div b-4b5m7q5k1x=3D"" class=3D"tab-pane tab-pane-e=
ditor fade active show" id=3D"tab-pane-editor" role=3D"tabpanel" aria-label=
ledby=3D"tab-tools" tabindex=3D"0">
                            <div b-f3npo6fq5u=3D"">

            <div b-f3npo6fq5u=3D"">What to generate or to modify the select=
ed SQL?</div>
            <div b-f3npo6fq5u=3D"">
                <div b-f3npo6fq5u=3D"" id=3D"uiCodeEditor_ExecuteServerDown=
" class=3D"error-message">
                    <div b-f3npo6fq5u=3D"">Unfortunately, the API is curren=
tly unresponsive. This issue often occurs when the server resets once a day=
. Please try again in 5 minutes.</div>
                </div>
                <textarea b-f3npo6fq5u=3D"" id=3D"uiCodeEditor_Input" class=
=3D"form-control" rows=3D"3" placeholder=3D"Enter instruction of what shoul=
d be generated/modified..."></textarea>
                <div b-f3npo6fq5u=3D"" id=3D"sidebar_CodeEditor_input_requi=
red" class=3D"error-message">This field is required</div>
                <div b-f3npo6fq5u=3D"" id=3D"sidebar_CodeEditor_input_minle=
ngth" class=3D"error-message">A text with a minimum 5 characters is require=
d</div>
                <div b-f3npo6fq5u=3D"" id=3D"sidebar_CodeEditor_input_maxle=
ngth" class=3D"error-message">A text with less than 2000 characters is requ=
ired</div>
            </div>
            <div b-f3npo6fq5u=3D"" class=3D"my-3">
                <button b-f3npo6fq5u=3D"" id=3D"uiCodeEditor_Generate" clas=
s=3D"btn btn-dark">
                    <svg b-f3npo6fq5u=3D"" xmlns=3D"http://www.w3.org/2000/=
svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-lightn=
ing" viewBox=3D"0 0 16 16">
                        <path b-f3npo6fq5u=3D"" d=3D"M5.52.359A.5.5 0 0 1 6=
 0h4a.5.5 0 0 1 .474.658L8.694 6H12.5a.5.5 0 0 1 .395.807l-7 9a.5.5 0 0 1-.=
873-.454L6.823 9.5H3.5a.5.5 0 0 1-.48-.641zM6.374 1 4.168 8.5H7.5a.5.5 0 0 =
1 .478.647L6.78 13.04 11.478 7H8a.5.5 0 0 1-.474-.658L9.306 1z"></path>
                    </svg>
                    Generate / Modify
                </button>
            </div>
            <hr b-f3npo6fq5u=3D"">
            <div b-f3npo6fq5u=3D"">Generated/Edited SQL:</div>
            <div b-f3npo6fq5u=3D""><textarea b-f3npo6fq5u=3D"" id=3D"uiCode=
Editor_Output" class=3D"form-control" rows=3D"10" style=3D"display: none;">=
</textarea><div class=3D"CodeMirror cm-s-default" translate=3D"no"><div sty=
le=3D"overflow: hidden; position: relative; width: 3px; height: 0px; top: 4=
px; left: 34px;"><textarea autocorrect=3D"off" autocapitalize=3D"off" spell=
check=3D"false" tabindex=3D"0" style=3D"position: absolute; bottom: -1em; p=
adding: 0px; width: 1000px; height: 1em; min-height: 1em; outline: none;"><=
/textarea></div><div class=3D"CodeMirror-vscrollbar" tabindex=3D"-1" cm-not=
-content=3D"true"><div style=3D"min-width: 1px; height: 0px;"></div></div><=
div class=3D"CodeMirror-hscrollbar" tabindex=3D"-1" cm-not-content=3D"true"=
><div style=3D"height: 100%; min-height: 1px; width: 0px;"></div></div><div=
 class=3D"CodeMirror-scrollbar-filler" cm-not-content=3D"true"></div><div c=
lass=3D"CodeMirror-gutter-filler" cm-not-content=3D"true"></div><div class=
=3D"CodeMirror-scroll" tabindex=3D"-1"><div class=3D"CodeMirror-sizer" styl=
e=3D"margin-left: 30px; min-width: 7px; margin-bottom: -17px; border-right-=
width: 33px; min-height: 32px; padding-right: 0px; padding-bottom: 0px;"><d=
iv style=3D"position: relative; top: 0px;"><div class=3D"CodeMirror-lines" =
role=3D"presentation"><div role=3D"presentation" style=3D"position: relativ=
e; outline: none;"><div class=3D"CodeMirror-measure"><pre class=3D"CodeMirr=
or-line-like"><span>xxxxxxxxxx</span></pre></div><div class=3D"CodeMirror-m=
easure"></div><div style=3D"position: relative; z-index: 1;"></div><div cla=
ss=3D"CodeMirror-cursors"><div class=3D"CodeMirror-cursor" style=3D"left: 4=
px; top: 0px; height: 24px;">&nbsp;</div></div><div class=3D"CodeMirror-cod=
e" role=3D"presentation"><div style=3D"position: relative;"><div class=3D"C=
odeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div =
class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; w=
idth: 21px;">1</div></div><pre class=3D" CodeMirror-line " role=3D"presenta=
tion"><span role=3D"presentation" style=3D"padding-right: 0.1px;"><span cm-=
text=3D"">=E2=80=8B</span></span></pre></div></div></div></div></div></div>=
<div style=3D"position: absolute; height: 33px; width: 1px; border-bottom: =
0px solid transparent; top: 32px;"></div><div class=3D"CodeMirror-gutters" =
style=3D"height: 65px; left: 0px;"><div class=3D"CodeMirror-gutter CodeMirr=
or-linenumbers" style=3D"width: 29px;"></div></div></div></div></div>
            <div b-f3npo6fq5u=3D"" class=3D"my-3">
                <div b-f3npo6fq5u=3D"" class=3D"sql-editor-toolbar d-flex j=
ustify-content-between">
                    <div b-f3npo6fq5u=3D"">
                        <button b-f3npo6fq5u=3D"" class=3D"btn btn-dark">
                            <svg b-f3npo6fq5u=3D"" xmlns=3D"http://www.w3.o=
rg/2000/svg" width=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi b=
i-arrow-return-right" viewBox=3D"0 0 16 16">
                                <path b-f3npo6fq5u=3D"" fill-rule=3D"evenod=
d" d=3D"M1.5 1.5A.5.5 0 0 0 1 2v4.8a2.5 2.5 0 0 0 2.5 2.5h9.793l-3.347 3.34=
6a.5.5 0 0 0 .708.708l4.2-4.2a.5.5 0 0 0 0-.708l-4-4a.5.5 0 0 0-.708.708L13=
.293 8.3H3.5A1.5 1.5 0 0 1 2 6.8V2a.5.5 0 0 0-.5-.5"></path>
                            </svg>
                            Insert/Replace in SQL Editor
                        </button>
                    </div>
                    <div b-f3npo6fq5u=3D"">
                    </div>
                </div>
            </div>
</div>


                        </div>
                        <div b-4b5m7q5k1x=3D"" class=3D"tab-pane tab-pane-h=
istory fade" id=3D"tab-pane-history" role=3D"tabpanel" aria-labelledby=3D"t=
ab-history" tabindex=3D"1">
                            <p b-c7cvmx6mrt=3D"">Under Development!</p>
<p b-c7cvmx6mrt=3D"">Fiddle History is not yet available.</p>
<p b-c7cvmx6mrt=3D"">We hope to make this feature available in May 2024.</p=
>
                        </div>
                    </div>
                </div>
            </div>

        </div>

        <div b-4b5m7q5k1x=3D"" id=3D"sidebar-resizer" class=3D"sidebar-resi=
zer">

        </div>

        <div b-4b5m7q5k1x=3D"" id=3D"sidebar-toggler" class=3D"sidebar-togg=
ler d-flex align-items-center justify-content-center">
            <div b-4b5m7q5k1x=3D"" class=3D"sidebar-toggler-chevron">
                <div b-4b5m7q5k1x=3D"" class=3D"chevron-part-top"></div>
                <div b-4b5m7q5k1x=3D"" class=3D"chevron-part-bottom"></div>
            </div>
        </div>

        <div b-4b5m7q5k1x=3D"" class=3D"central">

            <main b-4b5m7q5k1x=3D"" class=3D"main" style=3D"height: 100%;">
               =20

<div class=3D"sql-editor d-flex flex-column">
    <div class=3D"sql-editor-header d-flex justify-content-center">
        <div class=3D"sql-editor-header-inner">
            <div id=3D"sql-editor-header-readonly" class=3D"sql-editor-head=
er-readonly">
                <div class=3D"d-flex align-items-center">
                    <div class=3D"h1 mb-0 flex-grow-1">
                            <div id=3D"uiSqlFiddleH1_Untitled" style=3D"dis=
play: none;">Untitled*</div>
                            <h1 id=3D"uiSqlFiddleH1">Banco de dados Registr=
o EBAC</h1>
                    </div>
                    <button class=3D"btn" type=3D"submit">
                        <svg xmlns=3D"http://www.w3.org/2000/svg" width=3D"=
16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-pencil-fill" viewBox=
=3D"0 0 16 16">
                            <path d=3D"M12.854.146a.5.5 0 0 0-.707 0L10.5 1=
.793 14.207 5.5l1.647-1.646a.5.5 0 0 0 0-.708zm.646 6.061L9.793 2.5 3.293 9=
H3.5a.5.5 0 0 1 .5.5v.5h.5a.5.5 0 0 1 .5.5v.5h.5a.5.5 0 0 1 .5.5v.5h.5a.5.5=
 0 0 1 .5.5v.207zm-7.468 7.468A.5.5 0 0 1 6 13.5V13h-.5a.5.5 0 0 1-.5-.5V12=
h-.5a.5.5 0 0 1-.5-.5V11h-.5a.5.5 0 0 1-.5-.5V10h-.5a.5.5 0 0 1-.175-.032l-=
.179.178a.5.5 0 0 0-.11.168l-2 5a.5.5 0 0 0 .65.65l5-2a.5.5 0 0 0 .168-.11z=
"></path>
                        </svg>
                    </button>
                </div>
                    <h2>Banco de dados de registro de funcion=C3=A1rios e a=
lunos da EBAC</h2>
            </div>
            <div id=3D"sql-editor-header-edit" class=3D"sql-editor-header-e=
dit">
                <div class=3D"mb-3">
                    <input id=3D"uiSqlFiddleH1_Edit" type=3D"text" class=3D=
"form-control" placeholder=3D"Fiddle Title..." value=3D"Banco de dados Regi=
stro EBAC">
                </div>
                <div class=3D"mb-3">
                    <textarea id=3D"uiSqlFiddleH2_Edit" class=3D"form-contr=
ol" rows=3D"3" placeholder=3D"Fiddle Description...">Banco de dados de regi=
stro de funcion=C3=A1rios e alunos da EBAC</textarea>
                </div>
                <i>You must execute the code again to save those values in =
the database.</i>
                <div class=3D"col-12">
                    <button class=3D"btn btn-dark" type=3D"submit">Save</bu=
tton>
                    <button class=3D"btn btn-dark" type=3D"submit">Cancel</=
button>
                </div>
            </div>
        </div>
    </div>

    <div class=3D"sql-editor-body d-flex justify-content-center">

        <div id=3D"sql-editor-body-inner" class=3D"sql-editor-body-inner">

            <div class=3D"sql-editor-input">
               =20
                <textarea id=3D"uiP2" type=3D"text" class=3D"form-control" =
placeholder=3D"> Write your Oracle query here..." required=3D"" style=3D"di=
splay: none;">CREATE TABLE usuarios
(
  cpf INTEGER,
  Nome VARCHAR(50),
  Sobrenome VARCHAR(50),
  Cargo VARCHAR(50),
  Curso_id INTEGER
);

 CREATE TABLE cursos
(
  id INTEGER,
  nome_curso VARCHAR(50),
  professor VARCHAR(50),
  categoria VARCHAR(50)
);

INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('123','mauric=
io','plateiro','aluno','1');=20
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('234','sandra=
','rodriguez','aluno','2');
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('321','marcio=
','souza','aluno','1');
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('345','jose',=
'silva','professor','1');
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('567','paulo'=
,'santos','professor','2');
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('468','sidnei=
','silva','aluno','2');
INSERT INTO usuarios(cpf,nome,sobrenome,cargo,curso_id)VALUES('125','claudi=
o','lopes','aluno','1');
INSERT INTO cursos (id,nome_curso,professor,categoria)VALUES('1','ti do zer=
o','jose silva','programacao');
INSERT INTO cursos (id,nome_curso,professor,categoria)VALUES('2','design de=
 moda','paulo santos','design');

delete from usuarios
where cpf =3D=20

update usuarios
set curso_id =3D '2'
where cpf=3D123;

SELECT* from usuarios
where cpf =3D '123';</textarea><div class=3D"CodeMirror cm-s-default" trans=
late=3D"no"><div style=3D"overflow: hidden; position: relative; width: 3px;=
 height: 0px; top: 4px; left: 34px;"><textarea autocorrect=3D"off" autocapi=
talize=3D"off" spellcheck=3D"false" tabindex=3D"0" style=3D"position: absol=
ute; bottom: -1em; padding: 0px; width: 1000px; height: 1em; min-height: 1e=
m; outline: none;"></textarea></div><div class=3D"CodeMirror-vscrollbar" ta=
bindex=3D"-1" cm-not-content=3D"true" style=3D"display: block; bottom: 17px=
;"><div style=3D"min-width: 1px; height: 872px;"></div></div><div class=3D"=
CodeMirror-hscrollbar" tabindex=3D"-1" cm-not-content=3D"true" style=3D"dis=
play: block; right: 17px; left: 30px;"><div style=3D"height: 100%; min-heig=
ht: 1px; width: 1034px;"></div></div><div class=3D"CodeMirror-scrollbar-fil=
ler" cm-not-content=3D"true" style=3D"display: block; height: 17px; width: =
17px;"></div><div class=3D"CodeMirror-gutter-filler" cm-not-content=3D"true=
"></div><div class=3D"CodeMirror-scroll" tabindex=3D"-1"><div class=3D"Code=
Mirror-sizer" style=3D"margin-left: 30px; margin-bottom: -17px; border-righ=
t-width: 33px; min-height: 872px; min-width: 1034.48px; padding-right: 17px=
; padding-bottom: 17px;"><div style=3D"position: relative; top: 0px;"><div =
class=3D"CodeMirror-lines" role=3D"presentation"><div role=3D"presentation"=
 style=3D"position: relative; outline: none;"><div class=3D"CodeMirror-meas=
ure"><pre class=3D"CodeMirror-line-like"><span>xxxxxxxxxx</span></pre></div=
><div class=3D"CodeMirror-measure"><pre class=3D"CodeMirror-line" role=3D"p=
resentation"><span role=3D"presentation" style=3D"padding-right: 0.1px;"><s=
pan class=3D"cm-keyword">INSERT</span> <span class=3D"cm-keyword">INTO</spa=
n> cursos <span class=3D"cm-bracket">(</span>id<span class=3D"cm-punctuatio=
n">,</span>nome_curso<span class=3D"cm-punctuation">,</span>professor<span =
class=3D"cm-punctuation">,</span>categoria<span class=3D"cm-bracket">)</spa=
n><span class=3D"cm-keyword">VALUES</span><span class=3D"cm-bracket">(</spa=
n><span class=3D"cm-string">'2'</span><span class=3D"cm-punctuation">,</spa=
n><span class=3D"cm-string">'design de moda'</span><span class=3D"cm-punctu=
ation">,</span><span class=3D"cm-string">'paulo santos'</span><span class=
=3D"cm-punctuation">,</span><span class=3D"cm-string">'design'</span><span =
class=3D"cm-bracket">)</span><span class=3D"cm-punctuation">;</span></span>=
</pre></div><div style=3D"position: relative; z-index: 1;"></div><div class=
=3D"CodeMirror-cursors"><div class=3D"CodeMirror-cursor" style=3D"left: 4px=
; top: 0px; height: 24px;">&nbsp;</div></div><div class=3D"CodeMirror-code"=
 role=3D"presentation" style=3D""><div style=3D"position: relative;"><div c=
lass=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30p=
x;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"lef=
t: 0px; width: 21px;">1</div></div><pre class=3D" CodeMirror-line " role=3D=
"presentation"><span role=3D"presentation" style=3D"padding-right: 0.1px;">=
<span class=3D"cm-keyword">CREATE</span> <span class=3D"cm-keyword">TABLE</=
span> usuarios</span></pre></div><div style=3D"position: relative;"><div cl=
ass=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px=
;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left=
: 0px; width: 21px;">2</div></div><pre class=3D" CodeMirror-line " role=3D"=
presentation"><span role=3D"presentation" style=3D"padding-right: 0.1px;"><=
span class=3D"cm-bracket">(</span></span></pre></div><div style=3D"position=
: relative;"><div class=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" =
style=3D"left: -30px;"><div class=3D"CodeMirror-linenumber CodeMirror-gutte=
r-elt" style=3D"left: 0px; width: 21px;">3</div></div><pre class=3D" CodeMi=
rror-line " role=3D"presentation"><span role=3D"presentation" style=3D"padd=
ing-right: 0.1px;">  cpf <span class=3D"cm-type">INTEGER</span><span class=
=3D"cm-punctuation">,</span></span></pre></div><div style=3D"position: rela=
tive;"><div class=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=
=3D"left: -30px;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt=
" style=3D"left: 0px; width: 21px;">4</div></div><pre class=3D" CodeMirror-=
line " role=3D"presentation"><span role=3D"presentation" style=3D"padding-r=
ight: 0.1px;">  Nome <span class=3D"cm-type">VARCHAR</span><span class=3D"c=
m-bracket">(</span><span class=3D"cm-number">50</span><span class=3D"cm-bra=
cket">)</span><span class=3D"cm-punctuation">,</span></span></pre></div><di=
v style=3D"position: relative;"><div class=3D"CodeMirror-gutter-wrapper" ar=
ia-hidden=3D"true" style=3D"left: -30px;"><div class=3D"CodeMirror-linenumb=
er CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;">5</div></div><p=
re class=3D" CodeMirror-line " role=3D"presentation"><span role=3D"presenta=
tion" style=3D"padding-right: 0.1px;">  Sobrenome <span class=3D"cm-type">V=
ARCHAR</span><span class=3D"cm-bracket">(</span><span class=3D"cm-number">5=
0</span><span class=3D"cm-bracket">)</span><span class=3D"cm-punctuation">,=
</span></span></pre></div><div style=3D"position: relative;"><div class=3D"=
CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div=
 class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; =
width: 21px;">6</div></div><pre class=3D" CodeMirror-line " role=3D"present=
ation"><span role=3D"presentation" style=3D"padding-right: 0.1px;">  Cargo =
<span class=3D"cm-type">VARCHAR</span><span class=3D"cm-bracket">(</span><s=
pan class=3D"cm-number">50</span><span class=3D"cm-bracket">)</span><span c=
lass=3D"cm-punctuation">,</span></span></pre></div><div style=3D"position: =
relative;"><div class=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" st=
yle=3D"left: -30px;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-=
elt" style=3D"left: 0px; width: 21px;">7</div></div><pre class=3D" CodeMirr=
or-line " role=3D"presentation"><span role=3D"presentation" style=3D"paddin=
g-right: 0.1px;">  Curso_id <span class=3D"cm-type">INTEGER</span></span></=
pre></div><div style=3D"position: relative;"><div class=3D"CodeMirror-gutte=
r-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=3D"CodeMi=
rror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;">8<=
/div></div><pre class=3D" CodeMirror-line " role=3D"presentation"><span rol=
e=3D"presentation" style=3D"padding-right: 0.1px;"><span class=3D"cm-bracke=
t">)</span><span class=3D"cm-punctuation">;</span></span></pre></div><div s=
tyle=3D"position: relative;"><div class=3D"CodeMirror-gutter-wrapper" aria-=
hidden=3D"true" style=3D"left: -30px;"><div class=3D"CodeMirror-linenumber =
CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;">9</div></div><pre =
class=3D" CodeMirror-line " role=3D"presentation"><span role=3D"presentatio=
n" style=3D"padding-right: 0.1px;"><span cm-text=3D"">=E2=80=8B</span></spa=
n></pre></div><div style=3D"position: relative;"><div class=3D"CodeMirror-g=
utter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=3D"Co=
deMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;=
">10</div></div><pre class=3D" CodeMirror-line " role=3D"presentation"><spa=
n role=3D"presentation" style=3D"padding-right: 0.1px;"> <span class=3D"cm-=
keyword">CREATE</span> <span class=3D"cm-keyword">TABLE</span> cursos</span=
></pre></div><div style=3D"position: relative;"><div class=3D"CodeMirror-gu=
tter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=3D"Cod=
eMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;"=
>11</div></div><pre class=3D" CodeMirror-line " role=3D"presentation"><span=
 role=3D"presentation" style=3D"padding-right: 0.1px;"><span class=3D"cm-br=
acket">(</span></span></pre></div><div style=3D"position: relative;"><div c=
lass=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30p=
x;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"lef=
t: 0px; width: 21px;">12</div></div><pre class=3D" CodeMirror-line " role=
=3D"presentation"><span role=3D"presentation" style=3D"padding-right: 0.1px=
;">  id <span class=3D"cm-type">INTEGER</span><span class=3D"cm-punctuation=
">,</span></span></pre></div><div style=3D"position: relative;"><div class=
=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;">=
<div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0=
px; width: 21px;">13</div></div><pre class=3D" CodeMirror-line " role=3D"pr=
esentation"><span role=3D"presentation" style=3D"padding-right: 0.1px;">  n=
ome_curso <span class=3D"cm-type">VARCHAR</span><span class=3D"cm-bracket">=
(</span><span class=3D"cm-number">50</span><span class=3D"cm-bracket">)</sp=
an><span class=3D"cm-punctuation">,</span></span></pre></div><div style=3D"=
position: relative;"><div class=3D"CodeMirror-gutter-wrapper" aria-hidden=
=3D"true" style=3D"left: -30px;"><div class=3D"CodeMirror-linenumber CodeMi=
rror-gutter-elt" style=3D"left: 0px; width: 21px;">14</div></div><pre class=
=3D" CodeMirror-line " role=3D"presentation"><span role=3D"presentation" st=
yle=3D"padding-right: 0.1px;">  professor <span class=3D"cm-type">VARCHAR</=
span><span class=3D"cm-bracket">(</span><span class=3D"cm-number">50</span>=
<span class=3D"cm-bracket">)</span><span class=3D"cm-punctuation">,</span><=
/span></pre></div><div style=3D"position: relative;"><div class=3D"CodeMirr=
or-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=
=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width:=
 21px;">15</div></div><pre class=3D" CodeMirror-line " role=3D"presentation=
"><span role=3D"presentation" style=3D"padding-right: 0.1px;">  categoria <=
span class=3D"cm-type">VARCHAR</span><span class=3D"cm-bracket">(</span><sp=
an class=3D"cm-number">50</span><span class=3D"cm-bracket">)</span></span><=
/pre></div><div style=3D"position: relative;"><div class=3D"CodeMirror-gutt=
er-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=3D"CodeM=
irror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;">1=
6</div></div><pre class=3D" CodeMirror-line " role=3D"presentation"><span r=
ole=3D"presentation" style=3D"padding-right: 0.1px;"><span class=3D"cm-brac=
ket">)</span><span class=3D"cm-punctuation">;</span></span></pre></div><div=
 style=3D"position: relative;"><div class=3D"CodeMirror-gutter-wrapper" ari=
a-hidden=3D"true" style=3D"left: -30px;"><div class=3D"CodeMirror-linenumbe=
r CodeMirror-gutter-elt" style=3D"left: 0px; width: 21px;">17</div></div><p=
re class=3D" CodeMirror-line " role=3D"presentation"><span role=3D"presenta=
tion" style=3D"padding-right: 0.1px;"><span cm-text=3D"">=E2=80=8B</span></=
span></pre></div><div style=3D"position: relative;"><div class=3D"CodeMirro=
r-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><div class=3D=
"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px; width: 21=
px;">18</div></div><pre class=3D" CodeMirror-line " role=3D"presentation"><=
span role=3D"presentation" style=3D"padding-right: 0.1px;"><span class=3D"c=
m-keyword">INSERT</span> <span class=3D"cm-keyword">INTO</span> usuarios<sp=
an class=3D"cm-bracket">(</span>cpf<span class=3D"cm-punctuation">,</span>n=
ome<span class=3D"cm-punctuation">,</span>sobrenome<span class=3D"cm-punctu=
ation">,</span>cargo<span class=3D"cm-punctuation">,</span>curso_id<span cl=
ass=3D"cm-bracket">)</span><span class=3D"cm-keyword">VALUES</span><span cl=
ass=3D"cm-bracket">(</span><span class=3D"cm-string">'123'</span><span clas=
s=3D"cm-punctuation">,</span><span class=3D"cm-string">'mauricio'</span><sp=
an class=3D"cm-punctuation">,</span><span class=3D"cm-string">'plateiro'</s=
pan><span class=3D"cm-punctuation">,</span><span class=3D"cm-string">'aluno=
'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-string">'1=
'</span><span class=3D"cm-bracket">)</span><span class=3D"cm-punctuation">;=
</span> </span></pre></div><div style=3D"position: relative;"><div class=3D=
"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30px;"><di=
v class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"left: 0px;=
 width: 21px;">19</div></div><pre class=3D" CodeMirror-line " role=3D"prese=
ntation"><span role=3D"presentation" style=3D"padding-right: 0.1px;"><span =
class=3D"cm-keyword">INSERT</span> <span class=3D"cm-keyword">INTO</span> u=
suarios<span class=3D"cm-bracket">(</span>cpf<span class=3D"cm-punctuation"=
>,</span>nome<span class=3D"cm-punctuation">,</span>sobrenome<span class=3D=
"cm-punctuation">,</span>cargo<span class=3D"cm-punctuation">,</span>curso_=
id<span class=3D"cm-bracket">)</span><span class=3D"cm-keyword">VALUES</spa=
n><span class=3D"cm-bracket">(</span><span class=3D"cm-string">'234'</span>=
<span class=3D"cm-punctuation">,</span><span class=3D"cm-string">'sandra'</=
span><span class=3D"cm-punctuation">,</span><span class=3D"cm-string">'rodr=
iguez'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-strin=
g">'aluno'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-s=
tring">'2'</span><span class=3D"cm-bracket">)</span><span class=3D"cm-punct=
uation">;</span></span></pre></div><div style=3D"position: relative;"><div =
class=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left: -30=
px;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=3D"le=
ft: 0px; width: 21px;">20</div></div><pre class=3D" CodeMirror-line " role=
=3D"presentation"><span role=3D"presentation" style=3D"padding-right: 0.1px=
;"><span class=3D"cm-keyword">INSERT</span> <span class=3D"cm-keyword">INTO=
</span> usuarios<span class=3D"cm-bracket">(</span>cpf<span class=3D"cm-pun=
ctuation">,</span>nome<span class=3D"cm-punctuation">,</span>sobrenome<span=
 class=3D"cm-punctuation">,</span>cargo<span class=3D"cm-punctuation">,</sp=
an>curso_id<span class=3D"cm-bracket">)</span><span class=3D"cm-keyword">VA=
LUES</span><span class=3D"cm-bracket">(</span><span class=3D"cm-string">'32=
1'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-string">'=
marcio'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-stri=
ng">'souza'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-=
string">'aluno'</span><span class=3D"cm-punctuation">,</span><span class=3D=
"cm-string">'1'</span><span class=3D"cm-bracket">)</span><span class=3D"cm-=
punctuation">;</span></span></pre></div><div style=3D"position: relative;">=
<div class=3D"CodeMirror-gutter-wrapper" aria-hidden=3D"true" style=3D"left=
: -30px;"><div class=3D"CodeMirror-linenumber CodeMirror-gutter-elt" style=
=3D"left: 0px; width: 21px;">21</div></div><pre class=3D" CodeMirror-line "=
 role=3D"presentation"><span role=3D"presentation" style=3D"padding-right: =
0.1px;"><span class=3D"cm-keyword">INSERT</span> <span class=3D"cm-keyword"=
>INTO</span> usuarios<span class=3D"cm-bracket">(</span>cpf<span class=3D"c=
m-punctuation">,</span>nome<span class=3D"cm-punctuation">,</span>sobrenome=
<span class=3D"cm-punctuation">,</span>cargo<span class=3D"cm-punctuation">=
,</span>curso_id<span class=3D"cm-bracket">)</span><span class=3D"cm-keywor=
d">VALUES</span><span class=3D"cm-bracket">(</span><span class=3D"cm-string=
">'345'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-stri=
ng">'jose'</span><span class=3D"cm-punctuation">,</span><span class=3D"cm-s=
tring">'silva'</span><span class=3D"cm-punctuation">,</span><span class=3D"=
cm-string">'professor'</span><span class=3D"cm-punctuation">,</span><span c=
lass=3D"cm-string">'1'</span><span class=3D"cm-bracket">)</span><span class=
=3D"cm-punctuation">;</span></span></pre></div></div></div></div></div></di=
v><div style=3D"position: absolute; height: 33px; width: 1px; border-bottom=
: 17px solid transparent; top: 872px;"></div><div class=3D"CodeMirror-gutte=
rs" style=3D"height: 922px;"><div class=3D"CodeMirror-gutter CodeMirror-lin=
enumbers" style=3D"width: 29px;"></div></div></div></div>
            </div>
            <div class=3D"sql-editor-toolbar d-flex justify-content-between=
">
                <div>
                    <button id=3D"uiExecute" type=3D"button" class=3D"btn b=
tn-dark btn-run">
                        <svg xmlns=3D"http://www.w3.org/2000/svg" width=3D"=
16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-caret-right" viewBox=
=3D"0 0 16 16">
                            <path d=3D"M6 12.796V3.204L11.481 8zm.659.753 5=
.48-4.796a1 1 0 0 0 0-1.506L6.66 2.451C6.011 1.885 5 2.345 5 3.204v9.592a1 =
1 0 0 0 1.659.753"></path>
                        </svg>
                        Execute
                    </button>
                    <a href=3D"https://sqlfiddle.com/oracle/online-compiler=
?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59#" class=3D"btn btn-dark btn-run"=
 data-bs-toggle=3D"modal" data-bs-target=3D"#modal-code-editor-share">
                        <svg xmlns=3D"http://www.w3.org/2000/svg" width=3D"=
16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-share" viewBox=3D"0 =
0 16 16">
                            <path d=3D"M13.5 1a1.5 1.5 0 1 0 0 3 1.5 1.5 0 =
0 0 0-3M11 2.5a2.5 2.5 0 1 1 .603 1.628l-6.718 3.12a2.5 2.5 0 0 1 0 1.504l6=
.718 3.12a2.5 2.5 0 1 1-.488.876l-6.718-3.12a2.5 2.5 0 1 1 0-3.256l6.718-3.=
12A2.5 2.5 0 0 1 11 2.5m-8.5 4a1.5 1.5 0 1 0 0 3 1.5 1.5 0 0 0 0-3m11 5.5a1=
.5 1.5 0 1 0 0 3 1.5 1.5 0 0 0 0-3"></path>
                        </svg>
                        Share
                    </a>
                </div>       =20
                <div class=3D"dropdown">
                    <button class=3D"btn btn-secondary dropdown-toggle" typ=
e=3D"button" data-bs-toggle=3D"dropdown" aria-expanded=3D"false">
                        <svg xmlns=3D"http://www.w3.org/2000/svg" width=3D"=
16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-database" viewBox=3D=
"0 0 16 16">
                            <path d=3D"M4.318 2.687C5.234 2.271 6.536 2 8 2=
s2.766.27 3.682.687C12.644 3.125 13 3.627 13 4c0 .374-.356.875-1.318 1.313C=
10.766 5.729 9.464 6 8 6s-2.766-.27-3.682-.687C3.356 4.875 3 4.373 3 4c0-.3=
74.356-.875 1.318-1.313M13 5.698V7c0 .374-.356.875-1.318 1.313C10.766 8.729=
 9.464 9 8 9s-2.766-.27-3.682-.687C3.356 7.875 3 7.373 3 7V5.698c.271.202.5=
8.378.904.525C4.978 6.711 6.427 7 8 7s3.022-.289 4.096-.777A5 5 0 0 0 13 5.=
698M14 4c0-1.007-.875-1.755-1.904-2.223C11.022 1.289 9.573 1 8 1s-3.022.289=
-4.096.777C2.875 2.245 2 2.993 2 4v9c0 1.007.875 1.755 1.904 2.223C4.978 15=
.71 6.427 16 8 16s3.022-.289 4.096-.777C13.125 14.755 14 14.007 14 13zm-1 4=
.698V10c0 .374-.356.875-1.318 1.313C10.766 11.729 9.464 12 8 12s-2.766-.27-=
3.682-.687C3.356 10.875 3 10.373 3 10V8.698c.271.202.58.378.904.525C4.978 9=
.71 6.427 10 8 10s3.022-.289 4.096-.777A5 5 0 0 0 13 8.698m0 3V13c0 .374-.3=
56.875-1.318 1.313C10.766 14.729 9.464 15 8 15s-2.766-.27-3.682-.687C3.356 =
13.875 3 13.373 3 13v-1.302c.271.202.58.378.904.525C4.978 12.71 6.427 13 8 =
13s3.022-.289 4.096-.777c.324-.147.633-.323.904-.525"></path>
                        </svg>
                        Oracle
                    </button>
                    <ul class=3D"dropdown-menu">
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/sql-server/online-compiler">SQL Server</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/sqlite/online-compiler">SQLite</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/postgresql/online-compiler">PostgreSQL</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/mysql/online-compiler">MySQL</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/mariadb/online-compiler">MariaDB</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/oracle/online-compiler">Oracle</a></li>
                        <li><a class=3D"dropdown-item" href=3D"https://sqlf=
iddle.com/oracle-plsql/online-compiler">Oracle PLSQL</a></li>
                    </ul>
                </div>
            </div>
            <div class=3D"sql-editor-output">
                    <div class=3D"container-content section-output">
                        <div id=3D"uiOutputHtml">
<p>
</p><table class=3D"table table-dark table-striped" border=3D"1" width=3D"9=
0%" align=3D"center" summary=3D"Script output">
<tbody><tr>
<th scope=3D"col">
CPF
</th>
<th scope=3D"col">
NOME
</th>
<th scope=3D"col">
SOBRENOME
</th>
<th scope=3D"col">
CARGO
</th>
<th scope=3D"col">
CURSO_ID
</th>
</tr>
<tr>
<td align=3D"right">
       123
</td>
<td>
mauricio
</td>
<td>
plateiro
</td>
<td>
aluno
</td>
<td align=3D"right">
	 2
</td>
</tr>
</tbody></table>
<p>
                        </p></div>
                </div>
            </div>

        </div>
    </div>
</div>

<div id=3D"modal-code-editor-share" class=3D"modal fade modal-code-editor-s=
hare" aria-labelledby=3D"model login" aria-hidden=3D"true">
    <div class=3D"modal-dialog modal-lg modal-dialog-centered">
        <div class=3D"modal-content">
            <div class=3D"modal-header bg-dark text-white">
                <h5 class=3D"modal-title">Thank You for Sharing</h5>
                <button type=3D"button" class=3D"btn-close bg-light" data-b=
s-dismiss=3D"modal" aria-label=3D"Close"></button>
            </div>
            <div class=3D"modal-body">
                <div class=3D"d-flex justify-content-center">
                    <div>
                        <p class=3D"share-free">This website is offered ad-=
free
                            <svg xmlns=3D"http://www.w3.org/2000/svg" width=
=3D"16" height=3D"16" fill=3D"currentColor" class=3D"bi bi-arrow-through-he=
art" viewBox=3D"0 0 16 16">
                                <path fill-rule=3D"evenodd" d=3D"M2.854 15.=
854A.5.5 0 0 1 2 15.5V14H.5a.5.5 0 0 1-.354-.854l1.5-1.5A.5.5 0 0 1 2 11.5h=
1.793l.53-.53c-.771-.802-1.328-1.58-1.704-2.32-.798-1.575-.775-2.996-.213-4=
.092C3.426 2.565 6.18 1.809 8 3.233c1.25-.98 2.944-.928 4.212-.152L13.292 2=
 12.147.854A.5.5 0 0 1 12.5 0h3a.5.5 0 0 1 .5.5v3a.5.5 0 0 1-.854.354L14 2.=
707l-1.006 1.006c.236.248.44.531.6.845.562 1.096.585 2.517-.213 4.092-.793 =
1.563-2.395 3.288-5.105 5.08L8 13.912l-.276-.182a22 22 0 0 1-2.685-2.062l-.=
539.54V14a.5.5 0 0 1-.146.354zm2.893-4.894A20.4 20.4 0 0 0 8 12.71c2.456-1.=
666 3.827-3.207 4.489-4.512.679-1.34.607-2.42.215-3.185-.817-1.595-3.087-2.=
054-4.346-.761L8 4.62l-.358-.368c-1.259-1.293-3.53-.834-4.346.761-.392.766-=
.464 1.845.215 3.185.323.636.815 1.33 1.519 2.065l1.866-1.867a.5.5 0 1 1 .7=
08.708z"></path>
                            </svg>
                        </p>
                        <p>Thanks to support from <a href=3D"https://zzzpro=
jects.com/" target=3D"_blank">ZZZ Projects</a> and <a href=3D"https://entit=
yframework-extensions.net/bulk-extensions" target=3D"_blank">Entity Framewo=
rk Bulk Extensions</a>.</p>
                        <p>Keep in mind, every time you click on "Execute,"=
 a new unique URL is created.</p>
                        <div class=3D"modal-code-editor-share-copy-box">
                            <div class=3D"box-header d-flex justify-content=
-between">
                                <div class=3D"color: #fff">Unique URL</div>
                                <div>
                                    <button class=3D"copy-button">
                                        <svg stroke=3D"currentColor" fill=
=3D"none" stroke-width=3D"2" viewBox=3D"0 0 24 24" stroke-linecap=3D"round"=
 stroke-linejoin=3D"round" class=3D"h-4 w-4" height=3D"1em" width=3D"1em" x=
mlns=3D"http://www.w3.org/2000/svg"><path d=3D"M16 4h2a2 2 0 0 1 2 2v14a2 2=
 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x=3D"8" y=3D"2" =
width=3D"8" height=3D"4" rx=3D"1" ry=3D"1"></rect></svg> Copy url
                                    </button>
                                    <button class=3D"copied-button" style=
=3D"display: none;">
                                        <svg stroke=3D"currentColor" fill=
=3D"none" stroke-width=3D"2" viewBox=3D"0 0 24 24" stroke-linecap=3D"round"=
 stroke-linejoin=3D"round" class=3D"h-4 w-4" height=3D"1em" width=3D"1em" x=
mlns=3D"http://www.w3.org/2000/svg"><polyline points=3D"20 6 9 17 4 12"></p=
olyline></svg> Copied!
                                    </button>
                                </div>
                            </div>
                            <div class=3D"box-body">
                                <div id=3D"uiShareLink">
                                    https://sqlfiddle.com/oracle/online-com=
piler?id=3Dd484f324-2e61-49b7-afa7-00b08279fb59
                                </div>
                            </div>
                        </div>
                        <p>Copy and share your unique URL.</p>
                    </div>

                </div>
            </div>
        </div>
    </div>
</div>

<div id=3D"modal_ai_login_is_required" class=3D"modal fade modal-ai-login-w=
arning" aria-labelledby=3D"model login" aria-hidden=3D"true">
    <div class=3D"modal-dialog modal-lg modal-dialog-centered">
        <div class=3D"modal-content">
            <div class=3D"modal-header bg-dark text-white">
                <h5 class=3D"modal-title">Login is required</h5>
                <button type=3D"button" class=3D"btn-close bg-light" data-b=
s-dismiss=3D"modal" aria-label=3D"Close"></button>
            </div>
            <div class=3D"modal-body">
                <i>During Phase 1, only users who are logged in can access =
the chat and other AI features.</i>
            </div>
        </div>
    </div>
</div>

<!-- custom right click menu -->
<div id=3D"sql_editor_emptyselection_contextmenu" class=3D"dropdown-menu" s=
tyle=3D"display: none; position: absolute; background-color: white; border:=
 1px solid black; padding: 10px;">
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Generate Code with AI<=
/a>
    <hr>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Chat / Help</a>
</div>
<div id=3D"sql_editor_withselection_contextmenu" class=3D"dropdown-menu" st=
yle=3D"display: none; position: absolute; background-color: white; border: =
1px solid black; padding: 10px;">
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Edit Code with AI</a>
    <hr>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Detect Bug</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Explain</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Explain ELI5</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Format / Beautify</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Fix</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Minimize</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Optimize</a>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Review</a>
    <hr>
    <a href=3D"https://sqlfiddle.com/oracle/online-compiler?id=3Dd484f324-2=
e61-49b7-afa7-00b08279fb59#" class=3D"dropdown-item">Chat / Help</a>
</div>





            </main>         =20
        </div>
    </div>

    <div b-4uahog4ibo=3D"" id=3D"modal-login" class=3D"modal fade" aria-lab=
elledby=3D"model login" aria-hidden=3D"true">
    <div b-4uahog4ibo=3D"" class=3D"modal-dialog modal-dialog-centered">
        <div b-4uahog4ibo=3D"" class=3D"modal-content">
            <div b-4uahog4ibo=3D"" class=3D"modal-header bg-dark text-white=
">
                <h5 b-4uahog4ibo=3D"" class=3D"modal-title">Login</h5>
                <button b-4uahog4ibo=3D"" type=3D"button" class=3D"btn-clos=
e bg-light" data-bs-dismiss=3D"modal" aria-label=3D"Close"></button>
            </div>
            <div b-4uahog4ibo=3D"" class=3D"modal-body">
                <div b-4uahog4ibo=3D"" class=3D"d-flex justify-content-cent=
er">
                    <div b-4uahog4ibo=3D"">
                        <div b-4uahog4ibo=3D"" class=3D"mb-3">
                            <a b-4uahog4ibo=3D"" href=3D"https://sqlfiddle.=
com/account/google-login" class=3D"btn btn-dark">Continue with Google Login=
</a>
                        </div>
                        <div b-4uahog4ibo=3D"">
                            <a b-4uahog4ibo=3D"" href=3D"https://github.com=
/login/oauth/authorize?client_id=3Dab4b1b1430965867390a&amp;redirect_uri=3D=
&amp;scope=3Duser:email" class=3D"btn btn-dark">Continue with GitHub Login<=
/a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

   =20

   =20
   =20
   =20
   =20
       =20
       =20
       =20
       =20
       =20
       =20
       =20
       =20
       =20
   =20
   =20
   =20
   =20
   =20
   =20




<div id=3D"st-2" class=3D" st-sticky-share-buttons st-right st-toggleable s=
t-has-labels st-show-total "><div class=3D"st-total st-hidden">
  <span class=3D"st-label"></span>
  <span class=3D"st-shares">
    Shares
  </span>
</div><div class=3D"st-btn st-first st-hide-label" data-network=3D"facebook=
" style=3D"display: inline-block;">
  <img alt=3D"facebook sharing button" src=3D"https://platform-cdn.sharethi=
s.com/img/facebook.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-btn st-hide-label" data-network=3D"twitter" style=3D=
"display: inline-block;">
  <img alt=3D"twitter sharing button" src=3D"https://platform-cdn.sharethis=
.com/img/twitter.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-btn st-hide-label" data-network=3D"linkedin" style=
=3D"display: inline-block;">
  <img alt=3D"linkedin sharing button" src=3D"https://platform-cdn.sharethi=
s.com/img/linkedin.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-btn st-hide-label" data-network=3D"reddit" style=3D"=
display: inline-block;">
  <img alt=3D"reddit sharing button" src=3D"https://platform-cdn.sharethis.=
com/img/reddit.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-btn st-hide-label" data-network=3D"email" style=3D"d=
isplay: inline-block;">
  <img alt=3D"email sharing button" src=3D"https://platform-cdn.sharethis.c=
om/img/email.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-btn st-last st-hide-label" data-network=3D"sharethis=
" style=3D"display: inline-block;">
  <img alt=3D"sharethis sharing button" src=3D"https://platform-cdn.shareth=
is.com/img/sharethis.svg">
  <span class=3D"st-label"></span>
</div><div class=3D"st-toggle">
  <div class=3D"st-left">
    <img alt=3D"arrow_left sharing button" src=3D"https://platform-cdn.shar=
ethis.com/img/arrow_left.svg">
  </div>
  <div class=3D"st-right">
    <img alt=3D"arrow_right sharing button" src=3D"https://platform-cdn.sha=
rethis.com/img/arrow_right.svg">
  </div>
</div></div></body></html>
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/css
Content-Transfer-Encoding: quoted-printable
Content-Location: cid:css-77caeaa6-a304-43af-b4f6-ae131151a0fd@mhtml.blink

@charset "utf-8";

#st-2 { font-family: "Helvetica Neue", Verdana, Helvetica, Arial, sans-seri=
f; transition: all 0.2s ease-in 0s; backface-visibility: hidden; display: b=
lock; position: fixed; opacity: 1; text-align: left; top: 160px; z-index: 9=
4034; }

#st-2.st-right { right: 0px; }

#st-2.st-hidden.st-right { right: -48px; }

#st-2.st-hidden { width: 96px; }

#st-2.st-preview { display: none !important; opacity: 0 !important; }

#st-2 > div { clear: right; float: right; }

#st-2 .st-btn { box-sizing: border-box; transition: all 0.2s ease-in 0s; bo=
rder: none; cursor: pointer; display: inline-block; height: 48px; line-heig=
ht: 24px; margin-bottom: 8px; opacity: 1; overflow: hidden; padding: 12px; =
position: relative; text-align: left; top: 0px; vertical-align: top; white-=
space: nowrap; width: 48px; }

#st-2 .st-btn.st-first { border-top: none; border-top-left-radius: 4px; }

#st-2 .st-btn.st-last { border-bottom: none; border-bottom-left-radius: 4px=
; }

#st-2 .st-btn > svg { transition: all 0.2s ease-in 0s; height: 24px; margin=
-left: 0px; vertical-align: top; width: 24px; }

#st-2 .st-btn > img { transition: all 0.2s ease-in 0s; height: 24px; margin=
-left: 0px; vertical-align: top; width: 24px; }

#st-2 .st-btn > span { transition: all 0.2s ease-in 0s; color: rgb(255, 255=
, 255); display: inline-block; font-weight: 500; left: -35px; letter-spacin=
g: 0.5px; opacity: 0; padding: 0px 6px; position: relative; vertical-align:=
 top; }

#st-2 .st-btn.st-hide-label > span { display: none !important; }

#st-2 .st-total { transition: all 0.2s ease-in 0s; background: rgb(255, 255=
, 255); color: rgb(85, 85, 85); display: inline-block; font-weight: 500; li=
ne-height: 18px; margin-right: 0px; min-height: 34px; max-width: 80px; opac=
ity: 1; padding: 4px 0px; text-align: center; width: 48px; }

#st-2 .st-total.st-hidden { display: none; }

#st-2 .st-total > span { display: block; font-size: 18px; line-height: 21px=
; padding: 0px; }

#st-2 .st-total > span.st-shares { font-size: 11px; line-height: 11px; }

#st-2 .st-toggle { right: -48px; transition: all 0.2s ease-in 0s; backgroun=
d: rgb(204, 204, 204); border-bottom-left-radius: 4px; color: white; cursor=
: pointer; font-size: 24px; line-height: 24px; position: relative; text-ali=
gn: center; width: 48px; }

#st-2.st-hidden .st-toggle { border-top-left-radius: 4px; }

#st-2.st-right .st-toggle .st-right { display: inline-block; }

#st-2.st-right.st-hidden .st-toggle .st-right { display: none; }

#st-2.st-right .st-toggle .st-left { display: none; }

#st-2.st-right.st-hidden .st-toggle .st-left { display: inline-block; }

#st-2:hover .st-toggle { right: 0px; }

#st-2.st-hidden:hover .st-toggle { right: 48px; }

#st-2.st-toggleable:hover .st-btn.st-last { border-bottom-left-radius: 0px;=
 }

#st-2.st-toggleable:hover .st-btn.st-last:hover { border-bottom-left-radius=
: 4px; }

#st-2 .st-btn:hover { border-bottom-left-radius: 4px; border-top-left-radiu=
s: 4px; }

#st-2.st-has-labels .st-btn:hover { width: 120px; }

#st-2:not(.st-has-labels) .st-btn:hover { width: 62px; }

#st-2 .st-btn.st-hide-label:hover { width: 62px; }

#st-2 .st-btn:hover > svg { margin-left: 5px; }

#st-2 .st-btn:hover > img { margin-left: 5px; }

#st-2 .st-btn:hover > span { opacity: 1; display: inline-block; left: 0px; =
}

@media (max-width: 1024px) {
  #st-2 .st-btn:hover > svg { margin-left: 0px; }
  #st-2 .st-btn:hover > span { display: none; }
}

@media (max-width: 1024px) {
  #st-2 { inset: auto 0px 0px; display: none; width: 100%; }
  #st-2.st-hidden { bottom: -48px; width: 100%; }
  #st-2.st-hidden.st-left { left: 0px; }
  #st-2.st-hidden.st-right { right: 0px; }
  #st-2 > div { clear: none; flex: 1 1 0%; float: none; }
  #st-2 .st-total { background: rgb(255, 255, 255); padding: 6px 8px; }
  #st-2 .st-btn { text-align: center; width: auto; border-radius: 0px !impo=
rtant; }
  #st-2 .st-btn > span { display: none; }
  #st-2 .st-toggle { display: none; }
}

#st-2 .st-btn[data-network=3D"facebook"] { background-color: rgb(66, 103, 1=
78); }

#st-2 .st-btn[data-network=3D"facebook"] img { }

#st-2 .st-btn[data-network=3D"facebook"] > span { color: rgb(255, 255, 255)=
; }

#st-2 .st-btn[data-network=3D"twitter"] { background-color: rgb(0, 0, 0); }

#st-2 .st-btn[data-network=3D"twitter"] img { }

#st-2 .st-btn[data-network=3D"twitter"] > span { color: rgb(255, 255, 255);=
 }

#st-2 .st-btn[data-network=3D"linkedin"] { background-color: rgb(0, 119, 18=
1); }

#st-2 .st-btn[data-network=3D"linkedin"] img { }

#st-2 .st-btn[data-network=3D"linkedin"] > span { color: rgb(255, 255, 255)=
; }

#st-2 .st-btn[data-network=3D"reddit"] { background-color: rgb(255, 69, 0);=
 }

#st-2 .st-btn[data-network=3D"reddit"] img { }

#st-2 .st-btn[data-network=3D"reddit"] > span { color: rgb(255, 255, 255); =
}

#st-2 .st-btn[data-network=3D"email"] { background-color: rgb(125, 125, 125=
); }

#st-2 .st-btn[data-network=3D"email"] img { }

#st-2 .st-btn[data-network=3D"email"] > span { color: rgb(255, 255, 255); }

#st-2 .st-btn[data-network=3D"sharethis"] { background-color: rgb(149, 208,=
 58); }

#st-2 .st-btn[data-network=3D"sharethis"] img { }

#st-2 .st-btn[data-network=3D"sharethis"] > span { color: rgb(255, 255, 255=
); }

#st-2 .st-btn[data-network=3D"snapchat"] > span { color: rgb(51, 51, 51); }
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/css
Content-Transfer-Encoding: quoted-printable
Content-Location: https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css

@charset "utf-8";

:root, [data-bs-theme=3D"light"] { --bs-blue: #0d6efd; --bs-indigo: #6610f2=
; --bs-purple: #6f42c1; --bs-pink: #d63384; --bs-red: #dc3545; --bs-orange:=
 #fd7e14; --bs-yellow: #ffc107; --bs-green: #198754; --bs-teal: #20c997; --=
bs-cyan: #0dcaf0; --bs-black: #000; --bs-white: #fff; --bs-gray: #6c757d; -=
-bs-gray-dark: #343a40; --bs-gray-100: #f8f9fa; --bs-gray-200: #e9ecef; --b=
s-gray-300: #dee2e6; --bs-gray-400: #ced4da; --bs-gray-500: #adb5bd; --bs-g=
ray-600: #6c757d; --bs-gray-700: #495057; --bs-gray-800: #343a40; --bs-gray=
-900: #212529; --bs-primary: #0d6efd; --bs-secondary: #6c757d; --bs-success=
: #198754; --bs-info: #0dcaf0; --bs-warning: #ffc107; --bs-danger: #dc3545;=
 --bs-light: #f8f9fa; --bs-dark: #212529; --bs-primary-rgb: 13,110,253; --b=
s-secondary-rgb: 108,117,125; --bs-success-rgb: 25,135,84; --bs-info-rgb: 1=
3,202,240; --bs-warning-rgb: 255,193,7; --bs-danger-rgb: 220,53,69; --bs-li=
ght-rgb: 248,249,250; --bs-dark-rgb: 33,37,41; --bs-primary-text-emphasis: =
#052c65; --bs-secondary-text-emphasis: #2b2f32; --bs-success-text-emphasis:=
 #0a3622; --bs-info-text-emphasis: #055160; --bs-warning-text-emphasis: #66=
4d03; --bs-danger-text-emphasis: #58151c; --bs-light-text-emphasis: #495057=
; --bs-dark-text-emphasis: #495057; --bs-primary-bg-subtle: #cfe2ff; --bs-s=
econdary-bg-subtle: #e2e3e5; --bs-success-bg-subtle: #d1e7dd; --bs-info-bg-=
subtle: #cff4fc; --bs-warning-bg-subtle: #fff3cd; --bs-danger-bg-subtle: #f=
8d7da; --bs-light-bg-subtle: #fcfcfd; --bs-dark-bg-subtle: #ced4da; --bs-pr=
imary-border-subtle: #9ec5fe; --bs-secondary-border-subtle: #c4c8cb; --bs-s=
uccess-border-subtle: #a3cfbb; --bs-info-border-subtle: #9eeaf9; --bs-warni=
ng-border-subtle: #ffe69c; --bs-danger-border-subtle: #f1aeb5; --bs-light-b=
order-subtle: #e9ecef; --bs-dark-border-subtle: #adb5bd; --bs-white-rgb: 25=
5,255,255; --bs-black-rgb: 0,0,0; --bs-font-sans-serif: system-ui,-apple-sy=
stem,"Segoe UI",Roboto,"Helvetica Neue","Noto Sans","Liberation Sans",Arial=
,sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Co=
lor Emoji"; --bs-font-monospace: SFMono-Regular,Menlo,Monaco,Consolas,"Libe=
ration Mono","Courier New",monospace; --bs-gradient: linear-gradient(180deg=
, rgba(255, 255, 255, 0.15), rgba(255, 255, 255, 0)); --bs-body-font-family=
: var(--bs-font-sans-serif); --bs-body-font-size: 1rem; --bs-body-font-weig=
ht: 400; --bs-body-line-height: 1.5; --bs-body-color: #212529; --bs-body-co=
lor-rgb: 33,37,41; --bs-body-bg: #fff; --bs-body-bg-rgb: 255,255,255; --bs-=
emphasis-color: #000; --bs-emphasis-color-rgb: 0,0,0; --bs-secondary-color:=
 rgba(33, 37, 41, 0.75); --bs-secondary-color-rgb: 33,37,41; --bs-secondary=
-bg: #e9ecef; --bs-secondary-bg-rgb: 233,236,239; --bs-tertiary-color: rgba=
(33, 37, 41, 0.5); --bs-tertiary-color-rgb: 33,37,41; --bs-tertiary-bg: #f8=
f9fa; --bs-tertiary-bg-rgb: 248,249,250; --bs-heading-color: inherit; --bs-=
link-color: #0d6efd; --bs-link-color-rgb: 13,110,253; --bs-link-decoration:=
 underline; --bs-link-hover-color: #0a58ca; --bs-link-hover-color-rgb: 10,8=
8,202; --bs-code-color: #d63384; --bs-highlight-color: #212529; --bs-highli=
ght-bg: #fff3cd; --bs-border-width: 1px; --bs-border-style: solid; --bs-bor=
der-color: #dee2e6; --bs-border-color-translucent: rgba(0, 0, 0, 0.175); --=
bs-border-radius: 0.375rem; --bs-border-radius-sm: 0.25rem; --bs-border-rad=
ius-lg: 0.5rem; --bs-border-radius-xl: 1rem; --bs-border-radius-xxl: 2rem; =
--bs-border-radius-2xl: var(--bs-border-radius-xxl); --bs-border-radius-pil=
l: 50rem; --bs-box-shadow: 0 0.5rem 1rem rgba(0, 0, 0, 0.15); --bs-box-shad=
ow-sm: 0 0.125rem 0.25rem rgba(0, 0, 0, 0.075); --bs-box-shadow-lg: 0 1rem =
3rem rgba(0, 0, 0, 0.175); --bs-box-shadow-inset: inset 0 1px 2px rgba(0, 0=
, 0, 0.075); --bs-focus-ring-width: 0.25rem; --bs-focus-ring-opacity: 0.25;=
 --bs-focus-ring-color: rgba(13, 110, 253, 0.25); --bs-form-valid-color: #1=
98754; --bs-form-valid-border-color: #198754; --bs-form-invalid-color: #dc3=
545; --bs-form-invalid-border-color: #dc3545; }

[data-bs-theme=3D"dark"] { color-scheme: dark; --bs-body-color: #dee2e6; --=
bs-body-color-rgb: 222,226,230; --bs-body-bg: #212529; --bs-body-bg-rgb: 33=
,37,41; --bs-emphasis-color: #fff; --bs-emphasis-color-rgb: 255,255,255; --=
bs-secondary-color: rgba(222, 226, 230, 0.75); --bs-secondary-color-rgb: 22=
2,226,230; --bs-secondary-bg: #343a40; --bs-secondary-bg-rgb: 52,58,64; --b=
s-tertiary-color: rgba(222, 226, 230, 0.5); --bs-tertiary-color-rgb: 222,22=
6,230; --bs-tertiary-bg: #2b3035; --bs-tertiary-bg-rgb: 43,48,53; --bs-prim=
ary-text-emphasis: #6ea8fe; --bs-secondary-text-emphasis: #a7acb1; --bs-suc=
cess-text-emphasis: #75b798; --bs-info-text-emphasis: #6edff6; --bs-warning=
-text-emphasis: #ffda6a; --bs-danger-text-emphasis: #ea868f; --bs-light-tex=
t-emphasis: #f8f9fa; --bs-dark-text-emphasis: #dee2e6; --bs-primary-bg-subt=
le: #031633; --bs-secondary-bg-subtle: #161719; --bs-success-bg-subtle: #05=
1b11; --bs-info-bg-subtle: #032830; --bs-warning-bg-subtle: #332701; --bs-d=
anger-bg-subtle: #2c0b0e; --bs-light-bg-subtle: #343a40; --bs-dark-bg-subtl=
e: #1a1d20; --bs-primary-border-subtle: #084298; --bs-secondary-border-subt=
le: #41464b; --bs-success-border-subtle: #0f5132; --bs-info-border-subtle: =
#087990; --bs-warning-border-subtle: #997404; --bs-danger-border-subtle: #8=
42029; --bs-light-border-subtle: #495057; --bs-dark-border-subtle: #343a40;=
 --bs-heading-color: inherit; --bs-link-color: #6ea8fe; --bs-link-hover-col=
or: #8bb9fe; --bs-link-color-rgb: 110,168,254; --bs-link-hover-color-rgb: 1=
39,185,254; --bs-code-color: #e685b5; --bs-highlight-color: #dee2e6; --bs-h=
ighlight-bg: #664d03; --bs-border-color: #495057; --bs-border-color-translu=
cent: rgba(255, 255, 255, 0.15); --bs-form-valid-color: #75b798; --bs-form-=
valid-border-color: #75b798; --bs-form-invalid-color: #ea868f; --bs-form-in=
valid-border-color: #ea868f; }

*, ::after, ::before { box-sizing: border-box; }

@media (prefers-reduced-motion: no-preference) {
  :root { scroll-behavior: smooth; }
}

body { margin: 0px; font-family: var(--bs-body-font-family); font-size: var=
(--bs-body-font-size); font-weight: var(--bs-body-font-weight); line-height=
: var(--bs-body-line-height); color: var(--bs-body-color); text-align: var(=
--bs-body-text-align); background-color: var(--bs-body-bg); text-size-adjus=
t: 100%; -webkit-tap-highlight-color: transparent; }

hr { margin: 1rem 0px; color: inherit; border-right: 0px; border-bottom: 0p=
x; border-left: 0px; border-image: initial; border-top: var(--bs-border-wid=
th) solid; opacity: 0.25; }

.h1, .h2, .h3, .h4, .h5, .h6, h1, h2, h3, h4, h5, h6 { margin-top: 0px; mar=
gin-bottom: 0.5rem; font-weight: 500; line-height: 1.2; color: var(--bs-hea=
ding-color); }

.h1, h1 { font-size: calc(1.375rem + 1.5vw); }

@media (min-width: 1200px) {
  .h1, h1 { font-size: 2.5rem; }
}

.h2, h2 { font-size: calc(1.325rem + 0.9vw); }

@media (min-width: 1200px) {
  .h2, h2 { font-size: 2rem; }
}

.h3, h3 { font-size: calc(1.3rem + 0.6vw); }

@media (min-width: 1200px) {
  .h3, h3 { font-size: 1.75rem; }
}

.h4, h4 { font-size: calc(1.275rem + 0.3vw); }

@media (min-width: 1200px) {
  .h4, h4 { font-size: 1.5rem; }
}

.h5, h5 { font-size: 1.25rem; }

.h6, h6 { font-size: 1rem; }

p { margin-top: 0px; margin-bottom: 1rem; }

abbr[title] { text-decoration: underline dotted; cursor: help; text-decorat=
ion-skip-ink: none; }

address { margin-bottom: 1rem; font-style: normal; line-height: inherit; }

ol, ul { padding-left: 2rem; }

dl, ol, ul { margin-top: 0px; margin-bottom: 1rem; }

ol ol, ol ul, ul ol, ul ul { margin-bottom: 0px; }

dt { font-weight: 700; }

dd { margin-bottom: 0.5rem; margin-left: 0px; }

blockquote { margin: 0px 0px 1rem; }

b, strong { font-weight: bolder; }

.small, small { font-size: 0.875em; }

.mark, mark { padding: 0.1875em; color: var(--bs-highlight-color); backgrou=
nd-color: var(--bs-highlight-bg); }

sub, sup { position: relative; font-size: 0.75em; line-height: 0; vertical-=
align: baseline; }

sub { bottom: -0.25em; }

sup { top: -0.5em; }

a { color: rgba(var(--bs-link-color-rgb),var(--bs-link-opacity,1)); text-de=
coration: underline; }

a:hover { --bs-link-color-rgb: var(--bs-link-hover-color-rgb); }

a:not([href]):not([class]), a:not([href]):not([class]):hover { color: inher=
it; text-decoration: none; }

code, kbd, pre, samp { font-family: var(--bs-font-monospace); font-size: 1e=
m; }

pre { display: block; margin-top: 0px; margin-bottom: 1rem; overflow: auto;=
 font-size: 0.875em; }

pre code { font-size: inherit; color: inherit; word-break: normal; }

code { font-size: 0.875em; color: var(--bs-code-color); overflow-wrap: brea=
k-word; }

a > code { color: inherit; }

kbd { padding: 0.1875rem 0.375rem; font-size: 0.875em; color: var(--bs-body=
-bg); background-color: var(--bs-body-color); border-radius: 0.25rem; }

kbd kbd { padding: 0px; font-size: 1em; }

figure { margin: 0px 0px 1rem; }

img, svg { vertical-align: middle; }

table { caption-side: bottom; border-collapse: collapse; }

caption { padding-top: 0.5rem; padding-bottom: 0.5rem; color: var(--bs-seco=
ndary-color); text-align: left; }

th { text-align: -webkit-match-parent; }

tbody, td, tfoot, th, thead, tr { border-color: inherit; border-style: soli=
d; border-width: 0px; }

label { display: inline-block; }

button { border-radius: 0px; }

button:focus:not(:focus-visible) { outline: 0px; }

button, input, optgroup, select, textarea { margin: 0px; font-family: inher=
it; font-size: inherit; line-height: inherit; }

button, select { text-transform: none; }

[role=3D"button"] { cursor: pointer; }

select { overflow-wrap: normal; }

select:disabled { opacity: 1; }

[list]:not([type=3D"date"]):not([type=3D"datetime-local"]):not([type=3D"mon=
th"]):not([type=3D"week"]):not([type=3D"time"])::-webkit-calendar-picker-in=
dicator { display: none !important; }

[type=3D"button"], [type=3D"reset"], [type=3D"submit"], button { appearance=
: button; }

[type=3D"button"]:not(:disabled), [type=3D"reset"]:not(:disabled), [type=3D=
"submit"]:not(:disabled), button:not(:disabled) { cursor: pointer; }

textarea { resize: vertical; }

fieldset { min-width: 0px; padding: 0px; margin: 0px; border: 0px; }

legend { float: left; width: 100%; padding: 0px; margin-bottom: 0.5rem; fon=
t-size: calc(1.275rem + 0.3vw); line-height: inherit; }

@media (min-width: 1200px) {
  legend { font-size: 1.5rem; }
}

legend + * { clear: left; }

::-webkit-datetime-edit-day-field, ::-webkit-datetime-edit-fields-wrapper, =
::-webkit-datetime-edit-hour-field, ::-webkit-datetime-edit-minute, ::-webk=
it-datetime-edit-month-field, ::-webkit-datetime-edit-text, ::-webkit-datet=
ime-edit-year-field { padding: 0px; }

::-webkit-inner-spin-button { height: auto; }

[type=3D"search"] { appearance: textfield; outline-offset: -2px; }

::-webkit-search-decoration { appearance: none; }

::-webkit-color-swatch-wrapper { padding: 0px; }

::-webkit-file-upload-button { font: inherit; appearance: button; }

::file-selector-button { font: inherit; appearance: button; }

output { display: inline-block; }

iframe { border: 0px; }

summary { display: list-item; cursor: pointer; }

progress { vertical-align: baseline; }

[hidden] { display: none !important; }

.lead { font-size: 1.25rem; font-weight: 300; }

.display-1 { font-size: calc(1.625rem + 4.5vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-1 { font-size: 5rem; }
}

.display-2 { font-size: calc(1.575rem + 3.9vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-2 { font-size: 4.5rem; }
}

.display-3 { font-size: calc(1.525rem + 3.3vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-3 { font-size: 4rem; }
}

.display-4 { font-size: calc(1.475rem + 2.7vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-4 { font-size: 3.5rem; }
}

.display-5 { font-size: calc(1.425rem + 2.1vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-5 { font-size: 3rem; }
}

.display-6 { font-size: calc(1.375rem + 1.5vw); font-weight: 300; line-heig=
ht: 1.2; }

@media (min-width: 1200px) {
  .display-6 { font-size: 2.5rem; }
}

.list-unstyled { padding-left: 0px; list-style: none; }

.list-inline { padding-left: 0px; list-style: none; }

.list-inline-item { display: inline-block; }

.list-inline-item:not(:last-child) { margin-right: 0.5rem; }

.initialism { font-size: 0.875em; text-transform: uppercase; }

.blockquote { margin-bottom: 1rem; font-size: 1.25rem; }

.blockquote > :last-child { margin-bottom: 0px; }

.blockquote-footer { margin-top: -1rem; margin-bottom: 1rem; font-size: 0.8=
75em; color: rgb(108, 117, 125); }

.blockquote-footer::before { content: "=E2=80=94=C2=A0"; }

.img-fluid { max-width: 100%; height: auto; }

.img-thumbnail { padding: 0.25rem; background-color: var(--bs-body-bg); bor=
der: var(--bs-border-width) solid var(--bs-border-color); border-radius: va=
r(--bs-border-radius); max-width: 100%; height: auto; }

.figure { display: inline-block; }

.figure-img { margin-bottom: 0.5rem; line-height: 1; }

.figure-caption { font-size: 0.875em; color: var(--bs-secondary-color); }

.container, .container-fluid, .container-lg, .container-md, .container-sm, =
.container-xl, .container-xxl { --bs-gutter-x: 1.5rem; --bs-gutter-y: 0; wi=
dth: 100%; padding-right: calc(var(--bs-gutter-x) * .5); padding-left: calc=
(var(--bs-gutter-x) * .5); margin-right: auto; margin-left: auto; }

@media (min-width: 576px) {
  .container, .container-sm { max-width: 540px; }
}

@media (min-width: 768px) {
  .container, .container-md, .container-sm { max-width: 720px; }
}

@media (min-width: 992px) {
  .container, .container-lg, .container-md, .container-sm { max-width: 960p=
x; }
}

@media (min-width: 1200px) {
  .container, .container-lg, .container-md, .container-sm, .container-xl { =
max-width: 1140px; }
}

@media (min-width: 1400px) {
  .container, .container-lg, .container-md, .container-sm, .container-xl, .=
container-xxl { max-width: 1320px; }
}

:root { --bs-breakpoint-xs: 0; --bs-breakpoint-sm: 576px; --bs-breakpoint-m=
d: 768px; --bs-breakpoint-lg: 992px; --bs-breakpoint-xl: 1200px; --bs-break=
point-xxl: 1400px; }

.row { --bs-gutter-x: 1.5rem; --bs-gutter-y: 0; display: flex; flex-wrap: w=
rap; margin-top: calc(-1 * var(--bs-gutter-y)); margin-right: calc(-.5 * va=
r(--bs-gutter-x)); margin-left: calc(-.5 * var(--bs-gutter-x)); }

.row > * { flex-shrink: 0; width: 100%; max-width: 100%; padding-right: cal=
c(var(--bs-gutter-x) * .5); padding-left: calc(var(--bs-gutter-x) * .5); ma=
rgin-top: var(--bs-gutter-y); }

.col { flex: 1 0 0%; }

.row-cols-auto > * { flex: 0 0 auto; width: auto; }

.row-cols-1 > * { flex: 0 0 auto; width: 100%; }

.row-cols-2 > * { flex: 0 0 auto; width: 50%; }

.row-cols-3 > * { flex: 0 0 auto; width: 33.3333%; }

.row-cols-4 > * { flex: 0 0 auto; width: 25%; }

.row-cols-5 > * { flex: 0 0 auto; width: 20%; }

.row-cols-6 > * { flex: 0 0 auto; width: 16.6667%; }

.col-auto { flex: 0 0 auto; width: auto; }

.col-1 { flex: 0 0 auto; width: 8.33333%; }

.col-2 { flex: 0 0 auto; width: 16.6667%; }

.col-3 { flex: 0 0 auto; width: 25%; }

.col-4 { flex: 0 0 auto; width: 33.3333%; }

.col-5 { flex: 0 0 auto; width: 41.6667%; }

.col-6 { flex: 0 0 auto; width: 50%; }

.col-7 { flex: 0 0 auto; width: 58.3333%; }

.col-8 { flex: 0 0 auto; width: 66.6667%; }

.col-9 { flex: 0 0 auto; width: 75%; }

.col-10 { flex: 0 0 auto; width: 83.3333%; }

.col-11 { flex: 0 0 auto; width: 91.6667%; }

.col-12 { flex: 0 0 auto; width: 100%; }

.offset-1 { margin-left: 8.33333%; }

.offset-2 { margin-left: 16.6667%; }

.offset-3 { margin-left: 25%; }

.offset-4 { margin-left: 33.3333%; }

.offset-5 { margin-left: 41.6667%; }

.offset-6 { margin-left: 50%; }

.offset-7 { margin-left: 58.3333%; }

.offset-8 { margin-left: 66.6667%; }

.offset-9 { margin-left: 75%; }

.offset-10 { margin-left: 83.3333%; }

.offset-11 { margin-left: 91.6667%; }

.g-0, .gx-0 { --bs-gutter-x: 0; }

.g-0, .gy-0 { --bs-gutter-y: 0; }

.g-1, .gx-1 { --bs-gutter-x: 0.25rem; }

.g-1, .gy-1 { --bs-gutter-y: 0.25rem; }

.g-2, .gx-2 { --bs-gutter-x: 0.5rem; }

.g-2, .gy-2 { --bs-gutter-y: 0.5rem; }

.g-3, .gx-3 { --bs-gutter-x: 1rem; }

.g-3, .gy-3 { --bs-gutter-y: 1rem; }

.g-4, .gx-4 { --bs-gutter-x: 1.5rem; }

.g-4, .gy-4 { --bs-gutter-y: 1.5rem; }

.g-5, .gx-5 { --bs-gutter-x: 3rem; }

.g-5, .gy-5 { --bs-gutter-y: 3rem; }

@media (min-width: 576px) {
  .col-sm { flex: 1 0 0%; }
  .row-cols-sm-auto > * { flex: 0 0 auto; width: auto; }
  .row-cols-sm-1 > * { flex: 0 0 auto; width: 100%; }
  .row-cols-sm-2 > * { flex: 0 0 auto; width: 50%; }
  .row-cols-sm-3 > * { flex: 0 0 auto; width: 33.3333%; }
  .row-cols-sm-4 > * { flex: 0 0 auto; width: 25%; }
  .row-cols-sm-5 > * { flex: 0 0 auto; width: 20%; }
  .row-cols-sm-6 > * { flex: 0 0 auto; width: 16.6667%; }
  .col-sm-auto { flex: 0 0 auto; width: auto; }
  .col-sm-1 { flex: 0 0 auto; width: 8.33333%; }
  .col-sm-2 { flex: 0 0 auto; width: 16.6667%; }
  .col-sm-3 { flex: 0 0 auto; width: 25%; }
  .col-sm-4 { flex: 0 0 auto; width: 33.3333%; }
  .col-sm-5 { flex: 0 0 auto; width: 41.6667%; }
  .col-sm-6 { flex: 0 0 auto; width: 50%; }
  .col-sm-7 { flex: 0 0 auto; width: 58.3333%; }
  .col-sm-8 { flex: 0 0 auto; width: 66.6667%; }
  .col-sm-9 { flex: 0 0 auto; width: 75%; }
  .col-sm-10 { flex: 0 0 auto; width: 83.3333%; }
  .col-sm-11 { flex: 0 0 auto; width: 91.6667%; }
  .col-sm-12 { flex: 0 0 auto; width: 100%; }
  .offset-sm-0 { margin-left: 0px; }
  .offset-sm-1 { margin-left: 8.33333%; }
  .offset-sm-2 { margin-left: 16.6667%; }
  .offset-sm-3 { margin-left: 25%; }
  .offset-sm-4 { margin-left: 33.3333%; }
  .offset-sm-5 { margin-left: 41.6667%; }
  .offset-sm-6 { margin-left: 50%; }
  .offset-sm-7 { margin-left: 58.3333%; }
  .offset-sm-8 { margin-left: 66.6667%; }
  .offset-sm-9 { margin-left: 75%; }
  .offset-sm-10 { margin-left: 83.3333%; }
  .offset-sm-11 { margin-left: 91.6667%; }
  .g-sm-0, .gx-sm-0 { --bs-gutter-x: 0; }
  .g-sm-0, .gy-sm-0 { --bs-gutter-y: 0; }
  .g-sm-1, .gx-sm-1 { --bs-gutter-x: 0.25rem; }
  .g-sm-1, .gy-sm-1 { --bs-gutter-y: 0.25rem; }
  .g-sm-2, .gx-sm-2 { --bs-gutter-x: 0.5rem; }
  .g-sm-2, .gy-sm-2 { --bs-gutter-y: 0.5rem; }
  .g-sm-3, .gx-sm-3 { --bs-gutter-x: 1rem; }
  .g-sm-3, .gy-sm-3 { --bs-gutter-y: 1rem; }
  .g-sm-4, .gx-sm-4 { --bs-gutter-x: 1.5rem; }
  .g-sm-4, .gy-sm-4 { --bs-gutter-y: 1.5rem; }
  .g-sm-5, .gx-sm-5 { --bs-gutter-x: 3rem; }
  .g-sm-5, .gy-sm-5 { --bs-gutter-y: 3rem; }
}

@media (min-width: 768px) {
  .col-md { flex: 1 0 0%; }
  .row-cols-md-auto > * { flex: 0 0 auto; width: auto; }
  .row-cols-md-1 > * { flex: 0 0 auto; width: 100%; }
  .row-cols-md-2 > * { flex: 0 0 auto; width: 50%; }
  .row-cols-md-3 > * { flex: 0 0 auto; width: 33.3333%; }
  .row-cols-md-4 > * { flex: 0 0 auto; width: 25%; }
  .row-cols-md-5 > * { flex: 0 0 auto; width: 20%; }
  .row-cols-md-6 > * { flex: 0 0 auto; width: 16.6667%; }
  .col-md-auto { flex: 0 0 auto; width: auto; }
  .col-md-1 { flex: 0 0 auto; width: 8.33333%; }
  .col-md-2 { flex: 0 0 auto; width: 16.6667%; }
  .col-md-3 { flex: 0 0 auto; width: 25%; }
  .col-md-4 { flex: 0 0 auto; width: 33.3333%; }
  .col-md-5 { flex: 0 0 auto; width: 41.6667%; }
  .col-md-6 { flex: 0 0 auto; width: 50%; }
  .col-md-7 { flex: 0 0 auto; width: 58.3333%; }
  .col-md-8 { flex: 0 0 auto; width: 66.6667%; }
  .col-md-9 { flex: 0 0 auto; width: 75%; }
  .col-md-10 { flex: 0 0 auto; width: 83.3333%; }
  .col-md-11 { flex: 0 0 auto; width: 91.6667%; }
  .col-md-12 { flex: 0 0 auto; width: 100%; }
  .offset-md-0 { margin-left: 0px; }
  .offset-md-1 { margin-left: 8.33333%; }
  .offset-md-2 { margin-left: 16.6667%; }
  .offset-md-3 { margin-left: 25%; }
  .offset-md-4 { margin-left: 33.3333%; }
  .offset-md-5 { margin-left: 41.6667%; }
  .offset-md-6 { margin-left: 50%; }
  .offset-md-7 { margin-left: 58.3333%; }
  .offset-md-8 { margin-left: 66.6667%; }
  .offset-md-9 { margin-left: 75%; }
  .offset-md-10 { margin-left: 83.3333%; }
  .offset-md-11 { margin-left: 91.6667%; }
  .g-md-0, .gx-md-0 { --bs-gutter-x: 0; }
  .g-md-0, .gy-md-0 { --bs-gutter-y: 0; }
  .g-md-1, .gx-md-1 { --bs-gutter-x: 0.25rem; }
  .g-md-1, .gy-md-1 { --bs-gutter-y: 0.25rem; }
  .g-md-2, .gx-md-2 { --bs-gutter-x: 0.5rem; }
  .g-md-2, .gy-md-2 { --bs-gutter-y: 0.5rem; }
  .g-md-3, .gx-md-3 { --bs-gutter-x: 1rem; }
  .g-md-3, .gy-md-3 { --bs-gutter-y: 1rem; }
  .g-md-4, .gx-md-4 { --bs-gutter-x: 1.5rem; }
  .g-md-4, .gy-md-4 { --bs-gutter-y: 1.5rem; }
  .g-md-5, .gx-md-5 { --bs-gutter-x: 3rem; }
  .g-md-5, .gy-md-5 { --bs-gutter-y: 3rem; }
}

@media (min-width: 992px) {
  .col-lg { flex: 1 0 0%; }
  .row-cols-lg-auto > * { flex: 0 0 auto; width: auto; }
  .row-cols-lg-1 > * { flex: 0 0 auto; width: 100%; }
  .row-cols-lg-2 > * { flex: 0 0 auto; width: 50%; }
  .row-cols-lg-3 > * { flex: 0 0 auto; width: 33.3333%; }
  .row-cols-lg-4 > * { flex: 0 0 auto; width: 25%; }
  .row-cols-lg-5 > * { flex: 0 0 auto; width: 20%; }
  .row-cols-lg-6 > * { flex: 0 0 auto; width: 16.6667%; }
  .col-lg-auto { flex: 0 0 auto; width: auto; }
  .col-lg-1 { flex: 0 0 auto; width: 8.33333%; }
  .col-lg-2 { flex: 0 0 auto; width: 16.6667%; }
  .col-lg-3 { flex: 0 0 auto; width: 25%; }
  .col-lg-4 { flex: 0 0 auto; width: 33.3333%; }
  .col-lg-5 { flex: 0 0 auto; width: 41.6667%; }
  .col-lg-6 { flex: 0 0 auto; width: 50%; }
  .col-lg-7 { flex: 0 0 auto; width: 58.3333%; }
  .col-lg-8 { flex: 0 0 auto; width: 66.6667%; }
  .col-lg-9 { flex: 0 0 auto; width: 75%; }
  .col-lg-10 { flex: 0 0 auto; width: 83.3333%; }
  .col-lg-11 { flex: 0 0 auto; width: 91.6667%; }
  .col-lg-12 { flex: 0 0 auto; width: 100%; }
  .offset-lg-0 { margin-left: 0px; }
  .offset-lg-1 { margin-left: 8.33333%; }
  .offset-lg-2 { margin-left: 16.6667%; }
  .offset-lg-3 { margin-left: 25%; }
  .offset-lg-4 { margin-left: 33.3333%; }
  .offset-lg-5 { margin-left: 41.6667%; }
  .offset-lg-6 { margin-left: 50%; }
  .offset-lg-7 { margin-left: 58.3333%; }
  .offset-lg-8 { margin-left: 66.6667%; }
  .offset-lg-9 { margin-left: 75%; }
  .offset-lg-10 { margin-left: 83.3333%; }
  .offset-lg-11 { margin-left: 91.6667%; }
  .g-lg-0, .gx-lg-0 { --bs-gutter-x: 0; }
  .g-lg-0, .gy-lg-0 { --bs-gutter-y: 0; }
  .g-lg-1, .gx-lg-1 { --bs-gutter-x: 0.25rem; }
  .g-lg-1, .gy-lg-1 { --bs-gutter-y: 0.25rem; }
  .g-lg-2, .gx-lg-2 { --bs-gutter-x: 0.5rem; }
  .g-lg-2, .gy-lg-2 { --bs-gutter-y: 0.5rem; }
  .g-lg-3, .gx-lg-3 { --bs-gutter-x: 1rem; }
  .g-lg-3, .gy-lg-3 { --bs-gutter-y: 1rem; }
  .g-lg-4, .gx-lg-4 { --bs-gutter-x: 1.5rem; }
  .g-lg-4, .gy-lg-4 { --bs-gutter-y: 1.5rem; }
  .g-lg-5, .gx-lg-5 { --bs-gutter-x: 3rem; }
  .g-lg-5, .gy-lg-5 { --bs-gutter-y: 3rem; }
}

@media (min-width: 1200px) {
  .col-xl { flex: 1 0 0%; }
  .row-cols-xl-auto > * { flex: 0 0 auto; width: auto; }
  .row-cols-xl-1 > * { flex: 0 0 auto; width: 100%; }
  .row-cols-xl-2 > * { flex: 0 0 auto; width: 50%; }
  .row-cols-xl-3 > * { flex: 0 0 auto; width: 33.3333%; }
  .row-cols-xl-4 > * { flex: 0 0 auto; width: 25%; }
  .row-cols-xl-5 > * { flex: 0 0 auto; width: 20%; }
  .row-cols-xl-6 > * { flex: 0 0 auto; width: 16.6667%; }
  .col-xl-auto { flex: 0 0 auto; width: auto; }
  .col-xl-1 { flex: 0 0 auto; width: 8.33333%; }
  .col-xl-2 { flex: 0 0 auto; width: 16.6667%; }
  .col-xl-3 { flex: 0 0 auto; width: 25%; }
  .col-xl-4 { flex: 0 0 auto; width: 33.3333%; }
  .col-xl-5 { flex: 0 0 auto; width: 41.6667%; }
  .col-xl-6 { flex: 0 0 auto; width: 50%; }
  .col-xl-7 { flex: 0 0 auto; width: 58.3333%; }
  .col-xl-8 { flex: 0 0 auto; width: 66.6667%; }
  .col-xl-9 { flex: 0 0 auto; width: 75%; }
  .col-xl-10 { flex: 0 0 auto; width: 83.3333%; }
  .col-xl-11 { flex: 0 0 auto; width: 91.6667%; }
  .col-xl-12 { flex: 0 0 auto; width: 100%; }
  .offset-xl-0 { margin-left: 0px; }
  .offset-xl-1 { margin-left: 8.33333%; }
  .offset-xl-2 { margin-left: 16.6667%; }
  .offset-xl-3 { margin-left: 25%; }
  .offset-xl-4 { margin-left: 33.3333%; }
  .offset-xl-5 { margin-left: 41.6667%; }
  .offset-xl-6 { margin-left: 50%; }
  .offset-xl-7 { margin-left: 58.3333%; }
  .offset-xl-8 { margin-left: 66.6667%; }
  .offset-xl-9 { margin-left: 75%; }
  .offset-xl-10 { margin-left: 83.3333%; }
  .offset-xl-11 { margin-left: 91.6667%; }
  .g-xl-0, .gx-xl-0 { --bs-gutter-x: 0; }
  .g-xl-0, .gy-xl-0 { --bs-gutter-y: 0; }
  .g-xl-1, .gx-xl-1 { --bs-gutter-x: 0.25rem; }
  .g-xl-1, .gy-xl-1 { --bs-gutter-y: 0.25rem; }
  .g-xl-2, .gx-xl-2 { --bs-gutter-x: 0.5rem; }
  .g-xl-2, .gy-xl-2 { --bs-gutter-y: 0.5rem; }
  .g-xl-3, .gx-xl-3 { --bs-gutter-x: 1rem; }
  .g-xl-3, .gy-xl-3 { --bs-gutter-y: 1rem; }
  .g-xl-4, .gx-xl-4 { --bs-gutter-x: 1.5rem; }
  .g-xl-4, .gy-xl-4 { --bs-gutter-y: 1.5rem; }
  .g-xl-5, .gx-xl-5 { --bs-gutter-x: 3rem; }
  .g-xl-5, .gy-xl-5 { --bs-gutter-y: 3rem; }
}

@media (min-width: 1400px) {
  .col-xxl { flex: 1 0 0%; }
  .row-cols-xxl-auto > * { flex: 0 0 auto; width: auto; }
  .row-cols-xxl-1 > * { flex: 0 0 auto; width: 100%; }
  .row-cols-xxl-2 > * { flex: 0 0 auto; width: 50%; }
  .row-cols-xxl-3 > * { flex: 0 0 auto; width: 33.3333%; }
  .row-cols-xxl-4 > * { flex: 0 0 auto; width: 25%; }
  .row-cols-xxl-5 > * { flex: 0 0 auto; width: 20%; }
  .row-cols-xxl-6 > * { flex: 0 0 auto; width: 16.6667%; }
  .col-xxl-auto { flex: 0 0 auto; width: auto; }
  .col-xxl-1 { flex: 0 0 auto; width: 8.33333%; }
  .col-xxl-2 { flex: 0 0 auto; width: 16.6667%; }
  .col-xxl-3 { flex: 0 0 auto; width: 25%; }
  .col-xxl-4 { flex: 0 0 auto; width: 33.3333%; }
  .col-xxl-5 { flex: 0 0 auto; width: 41.6667%; }
  .col-xxl-6 { flex: 0 0 auto; width: 50%; }
  .col-xxl-7 { flex: 0 0 auto; width: 58.3333%; }
  .col-xxl-8 { flex: 0 0 auto; width: 66.6667%; }
  .col-xxl-9 { flex: 0 0 auto; width: 75%; }
  .col-xxl-10 { flex: 0 0 auto; width: 83.3333%; }
  .col-xxl-11 { flex: 0 0 auto; width: 91.6667%; }
  .col-xxl-12 { flex: 0 0 auto; width: 100%; }
  .offset-xxl-0 { margin-left: 0px; }
  .offset-xxl-1 { margin-left: 8.33333%; }
  .offset-xxl-2 { margin-left: 16.6667%; }
  .offset-xxl-3 { margin-left: 25%; }
  .offset-xxl-4 { margin-left: 33.3333%; }
  .offset-xxl-5 { margin-left: 41.6667%; }
  .offset-xxl-6 { margin-left: 50%; }
  .offset-xxl-7 { margin-left: 58.3333%; }
  .offset-xxl-8 { margin-left: 66.6667%; }
  .offset-xxl-9 { margin-left: 75%; }
  .offset-xxl-10 { margin-left: 83.3333%; }
  .offset-xxl-11 { margin-left: 91.6667%; }
  .g-xxl-0, .gx-xxl-0 { --bs-gutter-x: 0; }
  .g-xxl-0, .gy-xxl-0 { --bs-gutter-y: 0; }
  .g-xxl-1, .gx-xxl-1 { --bs-gutter-x: 0.25rem; }
  .g-xxl-1, .gy-xxl-1 { --bs-gutter-y: 0.25rem; }
  .g-xxl-2, .gx-xxl-2 { --bs-gutter-x: 0.5rem; }
  .g-xxl-2, .gy-xxl-2 { --bs-gutter-y: 0.5rem; }
  .g-xxl-3, .gx-xxl-3 { --bs-gutter-x: 1rem; }
  .g-xxl-3, .gy-xxl-3 { --bs-gutter-y: 1rem; }
  .g-xxl-4, .gx-xxl-4 { --bs-gutter-x: 1.5rem; }
  .g-xxl-4, .gy-xxl-4 { --bs-gutter-y: 1.5rem; }
  .g-xxl-5, .gx-xxl-5 { --bs-gutter-x: 3rem; }
  .g-xxl-5, .gy-xxl-5 { --bs-gutter-y: 3rem; }
}

.table { --bs-table-color-type: initial; --bs-table-bg-type: initial; --bs-=
table-color-state: initial; --bs-table-bg-state: initial; --bs-table-color:=
 var(--bs-emphasis-color); --bs-table-bg: var(--bs-body-bg); --bs-table-bor=
der-color: var(--bs-border-color); --bs-table-accent-bg: transparent; --bs-=
table-striped-color: var(--bs-emphasis-color); --bs-table-striped-bg: rgba(=
var(--bs-emphasis-color-rgb), 0.05); --bs-table-active-color: var(--bs-emph=
asis-color); --bs-table-active-bg: rgba(var(--bs-emphasis-color-rgb), 0.1);=
 --bs-table-hover-color: var(--bs-emphasis-color); --bs-table-hover-bg: rgb=
a(var(--bs-emphasis-color-rgb), 0.075); width: 100%; margin-bottom: 1rem; v=
ertical-align: top; border-color: var(--bs-table-border-color); }

.table > :not(caption) > * > * { padding: 0.5rem; color: var(--bs-table-col=
or-state,var(--bs-table-color-type,var(--bs-table-color))); background-colo=
r: var(--bs-table-bg); border-bottom-width: var(--bs-border-width); box-sha=
dow: inset 0 0 0 9999px var(--bs-table-bg-state,var(--bs-table-bg-type,var(=
--bs-table-accent-bg))); }

.table > tbody { vertical-align: inherit; }

.table > thead { vertical-align: bottom; }

.table-group-divider { border-top: calc(var(--bs-border-width) * 2) solid c=
urrentcolor; }

.caption-top { caption-side: top; }

.table-sm > :not(caption) > * > * { padding: 0.25rem; }

.table-bordered > :not(caption) > * { border-width: var(--bs-border-width) =
0; }

.table-bordered > :not(caption) > * > * { border-width: 0 var(--bs-border-w=
idth); }

.table-borderless > :not(caption) > * > * { border-bottom-width: 0px; }

.table-borderless > :not(:first-child) { border-top-width: 0px; }

.table-striped > tbody > tr:nth-of-type(2n+1) > * { --bs-table-color-type: =
var(--bs-table-striped-color); --bs-table-bg-type: var(--bs-table-striped-b=
g); }

.table-striped-columns > :not(caption) > tr > :nth-child(2n) { --bs-table-c=
olor-type: var(--bs-table-striped-color); --bs-table-bg-type: var(--bs-tabl=
e-striped-bg); }

.table-active { --bs-table-color-state: var(--bs-table-active-color); --bs-=
table-bg-state: var(--bs-table-active-bg); }

.table-hover > tbody > tr:hover > * { --bs-table-color-state: var(--bs-tabl=
e-hover-color); --bs-table-bg-state: var(--bs-table-hover-bg); }

.table-primary { --bs-table-color: #000; --bs-table-bg: #cfe2ff; --bs-table=
-border-color: #a6b5cc; --bs-table-striped-bg: #c5d7f2; --bs-table-striped-=
color: #000; --bs-table-active-bg: #bacbe6; --bs-table-active-color: #000; =
--bs-table-hover-bg: #bfd1ec; --bs-table-hover-color: #000; color: var(--bs=
-table-color); border-color: var(--bs-table-border-color); }

.table-secondary { --bs-table-color: #000; --bs-table-bg: #e2e3e5; --bs-tab=
le-border-color: #b5b6b7; --bs-table-striped-bg: #d7d8da; --bs-table-stripe=
d-color: #000; --bs-table-active-bg: #cbccce; --bs-table-active-color: #000=
; --bs-table-hover-bg: #d1d2d4; --bs-table-hover-color: #000; color: var(--=
bs-table-color); border-color: var(--bs-table-border-color); }

.table-success { --bs-table-color: #000; --bs-table-bg: #d1e7dd; --bs-table=
-border-color: #a7b9b1; --bs-table-striped-bg: #c7dbd2; --bs-table-striped-=
color: #000; --bs-table-active-bg: #bcd0c7; --bs-table-active-color: #000; =
--bs-table-hover-bg: #c1d6cc; --bs-table-hover-color: #000; color: var(--bs=
-table-color); border-color: var(--bs-table-border-color); }

.table-info { --bs-table-color: #000; --bs-table-bg: #cff4fc; --bs-table-bo=
rder-color: #a6c3ca; --bs-table-striped-bg: #c5e8ef; --bs-table-striped-col=
or: #000; --bs-table-active-bg: #badce3; --bs-table-active-color: #000; --b=
s-table-hover-bg: #bfe2e9; --bs-table-hover-color: #000; color: var(--bs-ta=
ble-color); border-color: var(--bs-table-border-color); }

.table-warning { --bs-table-color: #000; --bs-table-bg: #fff3cd; --bs-table=
-border-color: #ccc2a4; --bs-table-striped-bg: #f2e7c3; --bs-table-striped-=
color: #000; --bs-table-active-bg: #e6dbb9; --bs-table-active-color: #000; =
--bs-table-hover-bg: #ece1be; --bs-table-hover-color: #000; color: var(--bs=
-table-color); border-color: var(--bs-table-border-color); }

.table-danger { --bs-table-color: #000; --bs-table-bg: #f8d7da; --bs-table-=
border-color: #c6acae; --bs-table-striped-bg: #eccccf; --bs-table-striped-c=
olor: #000; --bs-table-active-bg: #dfc2c4; --bs-table-active-color: #000; -=
-bs-table-hover-bg: #e5c7ca; --bs-table-hover-color: #000; color: var(--bs-=
table-color); border-color: var(--bs-table-border-color); }

.table-light { --bs-table-color: #000; --bs-table-bg: #f8f9fa; --bs-table-b=
order-color: #c6c7c8; --bs-table-striped-bg: #ecedee; --bs-table-striped-co=
lor: #000; --bs-table-active-bg: #dfe0e1; --bs-table-active-color: #000; --=
bs-table-hover-bg: #e5e6e7; --bs-table-hover-color: #000; color: var(--bs-t=
able-color); border-color: var(--bs-table-border-color); }

.table-dark { --bs-table-color: #fff; --bs-table-bg: #212529; --bs-table-bo=
rder-color: #4d5154; --bs-table-striped-bg: #2c3034; --bs-table-striped-col=
or: #fff; --bs-table-active-bg: #373b3e; --bs-table-active-color: #fff; --b=
s-table-hover-bg: #323539; --bs-table-hover-color: #fff; color: var(--bs-ta=
ble-color); border-color: var(--bs-table-border-color); }

.table-responsive { overflow-x: auto; }

@media (max-width: 575.98px) {
  .table-responsive-sm { overflow-x: auto; }
}

@media (max-width: 767.98px) {
  .table-responsive-md { overflow-x: auto; }
}

@media (max-width: 991.98px) {
  .table-responsive-lg { overflow-x: auto; }
}

@media (max-width: 1199.98px) {
  .table-responsive-xl { overflow-x: auto; }
}

@media (max-width: 1399.98px) {
  .table-responsive-xxl { overflow-x: auto; }
}

.form-label { margin-bottom: 0.5rem; }

.col-form-label { padding-top: calc(.375rem + var(--bs-border-width)); padd=
ing-bottom: calc(.375rem + var(--bs-border-width)); margin-bottom: 0px; fon=
t-size: inherit; line-height: 1.5; }

.col-form-label-lg { padding-top: calc(.5rem + var(--bs-border-width)); pad=
ding-bottom: calc(.5rem + var(--bs-border-width)); font-size: 1.25rem; }

.col-form-label-sm { padding-top: calc(.25rem + var(--bs-border-width)); pa=
dding-bottom: calc(.25rem + var(--bs-border-width)); font-size: 0.875rem; }

.form-text { margin-top: 0.25rem; font-size: 0.875em; color: var(--bs-secon=
dary-color); }

.form-control { display: block; width: 100%; padding: 0.375rem 0.75rem; fon=
t-size: 1rem; font-weight: 400; line-height: 1.5; color: var(--bs-body-colo=
r); appearance: none; background-color: var(--bs-body-bg); background-clip:=
 padding-box; border: var(--bs-border-width) solid var(--bs-border-color); =
border-radius: var(--bs-border-radius); transition: border-color 0.15s ease=
-in-out 0s, box-shadow 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-control { transition: none 0s ease 0s; }
}

.form-control[type=3D"file"] { overflow: hidden; }

.form-control[type=3D"file"]:not(:disabled):not([readonly]) { cursor: point=
er; }

.form-control:focus { color: var(--bs-body-color); background-color: var(--=
bs-body-bg); border-color: rgb(134, 183, 254); outline: 0px; box-shadow: rg=
ba(13, 110, 253, 0.25) 0px 0px 0px 0.25rem; }

.form-control::-webkit-date-and-time-value { min-width: 85px; height: 1.5em=
; margin: 0px; }

.form-control::-webkit-datetime-edit { display: block; padding: 0px; }

.form-control::placeholder { color: var(--bs-secondary-color); opacity: 1; =
}

.form-control:disabled { background-color: var(--bs-secondary-bg); opacity:=
 1; }

.form-control::-webkit-file-upload-button { padding: 0.375rem 0.75rem; marg=
in: -0.375rem -0.75rem; margin-inline-end: 0.75rem; color: var(--bs-body-co=
lor); background-color: var(--bs-tertiary-bg); pointer-events: none; border=
-color: inherit; border-style: solid; border-width: 0px; border-inline-end-=
width: var(--bs-border-width); border-radius: 0px; transition: color 0.15s =
ease-in-out 0s, background-color 0.15s ease-in-out 0s, border-color 0.15s e=
ase-in-out 0s, box-shadow 0.15s ease-in-out 0s; }

.form-control::file-selector-button { padding: 0.375rem 0.75rem; margin: -0=
.375rem -0.75rem; margin-inline-end: 0.75rem; color: var(--bs-body-color); =
background-color: var(--bs-tertiary-bg); pointer-events: none; border-color=
: inherit; border-style: solid; border-width: 0px; border-inline-end-width:=
 var(--bs-border-width); border-radius: 0px; transition: color 0.15s ease-i=
n-out 0s, background-color 0.15s ease-in-out 0s, border-color 0.15s ease-in=
-out 0s, box-shadow 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-control::-webkit-file-upload-button { transition: none 0s ease 0s; =
}
  .form-control::file-selector-button { transition: none 0s ease 0s; }
}

.form-control:hover:not(:disabled):not([readonly])::-webkit-file-upload-but=
ton { background-color: var(--bs-secondary-bg); }

.form-control:hover:not(:disabled):not([readonly])::file-selector-button { =
background-color: var(--bs-secondary-bg); }

.form-control-plaintext { display: block; width: 100%; padding: 0.375rem 0p=
x; margin-bottom: 0px; line-height: 1.5; color: var(--bs-body-color); backg=
round-color: transparent; border-style: solid; border-color: transparent; b=
order-image: initial; border-width: var(--bs-border-width) 0; }

.form-control-plaintext:focus { outline: 0px; }

.form-control-plaintext.form-control-lg, .form-control-plaintext.form-contr=
ol-sm { padding-right: 0px; padding-left: 0px; }

.form-control-sm { min-height: calc(1.5em + .5rem + calc(var(--bs-border-wi=
dth) * 2)); padding: 0.25rem 0.5rem; font-size: 0.875rem; border-radius: va=
r(--bs-border-radius-sm); }

.form-control-sm::-webkit-file-upload-button { padding: 0.25rem 0.5rem; mar=
gin: -0.25rem -0.5rem; margin-inline-end: 0.5rem; }

.form-control-sm::file-selector-button { padding: 0.25rem 0.5rem; margin: -=
0.25rem -0.5rem; margin-inline-end: 0.5rem; }

.form-control-lg { min-height: calc(1.5em + 1rem + calc(var(--bs-border-wid=
th) * 2)); padding: 0.5rem 1rem; font-size: 1.25rem; border-radius: var(--b=
s-border-radius-lg); }

.form-control-lg::-webkit-file-upload-button { padding: 0.5rem 1rem; margin=
: -0.5rem -1rem; margin-inline-end: 1rem; }

.form-control-lg::file-selector-button { padding: 0.5rem 1rem; margin: -0.5=
rem -1rem; margin-inline-end: 1rem; }

textarea.form-control { min-height: calc(1.5em + .75rem + calc(var(--bs-bor=
der-width) * 2)); }

textarea.form-control-sm { min-height: calc(1.5em + .5rem + calc(var(--bs-b=
order-width) * 2)); }

textarea.form-control-lg { min-height: calc(1.5em + 1rem + calc(var(--bs-bo=
rder-width) * 2)); }

.form-control-color { width: 3rem; height: calc(1.5em + .75rem + calc(var(-=
-bs-border-width) * 2)); padding: 0.375rem; }

.form-control-color:not(:disabled):not([readonly]) { cursor: pointer; }

.form-control-color::-webkit-color-swatch { border-radius: var(--bs-border-=
radius); border: 0px !important; }

.form-control-color.form-control-sm { height: calc(1.5em + .5rem + calc(var=
(--bs-border-width) * 2)); }

.form-control-color.form-control-lg { height: calc(1.5em + 1rem + calc(var(=
--bs-border-width) * 2)); }

.form-select { --bs-form-select-bg-img: url("data:image/svg+xml,%3csvg xmln=
s=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 16'%3e%3cpath fill=3D'no=
ne' stroke=3D'%23343a40' stroke-linecap=3D'round' stroke-linejoin=3D'round'=
 stroke-width=3D'2' d=3D'm2 5 6 6 6-6'/%3e%3c/svg%3e"); display: block; wid=
th: 100%; padding: 0.375rem 2.25rem 0.375rem 0.75rem; font-size: 1rem; font=
-weight: 400; line-height: 1.5; color: var(--bs-body-color); appearance: no=
ne; background-color: var(--bs-body-bg); background-image: var(--bs-form-se=
lect-bg-img),var(--bs-form-select-bg-icon,none); background-repeat: no-repe=
at; background-position: right 0.75rem center; background-size: 16px 12px; =
border: var(--bs-border-width) solid var(--bs-border-color); border-radius:=
 var(--bs-border-radius); transition: border-color 0.15s ease-in-out 0s, bo=
x-shadow 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-select { transition: none 0s ease 0s; }
}

.form-select:focus { border-color: rgb(134, 183, 254); outline: 0px; box-sh=
adow: rgba(13, 110, 253, 0.25) 0px 0px 0px 0.25rem; }

.form-select[multiple], .form-select[size]:not([size=3D"1"]) { padding-righ=
t: 0.75rem; background-image: none; }

.form-select:disabled { background-color: var(--bs-secondary-bg); }

.form-select-sm { padding-top: 0.25rem; padding-bottom: 0.25rem; padding-le=
ft: 0.5rem; font-size: 0.875rem; border-radius: var(--bs-border-radius-sm);=
 }

.form-select-lg { padding-top: 0.5rem; padding-bottom: 0.5rem; padding-left=
: 1rem; font-size: 1.25rem; border-radius: var(--bs-border-radius-lg); }

[data-bs-theme=3D"dark"] .form-select { --bs-form-select-bg-img: url("data:=
image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16=
 16'%3e%3cpath fill=3D'none' stroke=3D'%23dee2e6' stroke-linecap=3D'round' =
stroke-linejoin=3D'round' stroke-width=3D'2' d=3D'm2 5 6 6 6-6'/%3e%3c/svg%=
3e"); }

.form-check { display: block; min-height: 1.5rem; padding-left: 1.5em; marg=
in-bottom: 0.125rem; }

.form-check .form-check-input { float: left; margin-left: -1.5em; }

.form-check-reverse { padding-right: 1.5em; padding-left: 0px; text-align: =
right; }

.form-check-reverse .form-check-input { float: right; margin-right: -1.5em;=
 margin-left: 0px; }

.form-check-input { --bs-form-check-bg: var(--bs-body-bg); flex-shrink: 0; =
width: 1em; height: 1em; margin-top: 0.25em; vertical-align: top; appearanc=
e: none; background-color: var(--bs-form-check-bg); background-image: var(-=
-bs-form-check-bg-image); background-repeat: no-repeat; background-position=
: center center; background-size: contain; border: var(--bs-border-width) s=
olid var(--bs-border-color); -webkit-print-color-adjust: exact; }

.form-check-input[type=3D"checkbox"] { border-radius: 0.25em; }

.form-check-input[type=3D"radio"] { border-radius: 50%; }

.form-check-input:active { filter: brightness(90%); }

.form-check-input:focus { border-color: rgb(134, 183, 254); outline: 0px; b=
ox-shadow: rgba(13, 110, 253, 0.25) 0px 0px 0px 0.25rem; }

.form-check-input:checked { background-color: rgb(13, 110, 253); border-col=
or: rgb(13, 110, 253); }

.form-check-input:checked[type=3D"checkbox"] { --bs-form-check-bg-image: ur=
l("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=
=3D'0 0 20 20'%3e%3cpath fill=3D'none' stroke=3D'%23fff' stroke-linecap=3D'=
round' stroke-linejoin=3D'round' stroke-width=3D'3' d=3D'm6 10 3 3 6-6'/%3e=
%3c/svg%3e"); }

.form-check-input:checked[type=3D"radio"] { --bs-form-check-bg-image: url("=
data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'-=
4 -4 8 8'%3e%3ccircle r=3D'2' fill=3D'%23fff'/%3e%3c/svg%3e"); }

.form-check-input[type=3D"checkbox"]:indeterminate { background-color: rgb(=
13, 110, 253); border-color: rgb(13, 110, 253); --bs-form-check-bg-image: u=
rl("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=
=3D'0 0 20 20'%3e%3cpath fill=3D'none' stroke=3D'%23fff' stroke-linecap=3D'=
round' stroke-linejoin=3D'round' stroke-width=3D'3' d=3D'M6 10h8'/%3e%3c/sv=
g%3e"); }

.form-check-input:disabled { pointer-events: none; filter: none; opacity: 0=
.5; }

.form-check-input:disabled ~ .form-check-label, .form-check-input[disabled]=
 ~ .form-check-label { cursor: default; opacity: 0.5; }

.form-switch { padding-left: 2.5em; }

.form-switch .form-check-input { --bs-form-switch-bg: url("data:image/svg+x=
ml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'-4 -4 8 8'%3e%3cc=
ircle r=3D'3' fill=3D'rgba%280, 0, 0, 0.25%29'/%3e%3c/svg%3e"); width: 2em;=
 margin-left: -2.5em; background-image: var(--bs-form-switch-bg); backgroun=
d-position: left center; border-radius: 2em; transition: background-positio=
n 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-switch .form-check-input { transition: none 0s ease 0s; }
}

.form-switch .form-check-input:focus { --bs-form-switch-bg: url("data:image=
/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'-4 -4 8 8'%=
3e%3ccircle r=3D'3' fill=3D'%2386b7fe'/%3e%3c/svg%3e"); }

.form-switch .form-check-input:checked { background-position: right center;=
 --bs-form-switch-bg: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3=
.org/2000/svg' viewBox=3D'-4 -4 8 8'%3e%3ccircle r=3D'3' fill=3D'%23fff'/%3=
e%3c/svg%3e"); }

.form-switch.form-check-reverse { padding-right: 2.5em; padding-left: 0px; =
}

.form-switch.form-check-reverse .form-check-input { margin-right: -2.5em; m=
argin-left: 0px; }

.form-check-inline { display: inline-block; margin-right: 1rem; }

.btn-check { position: absolute; clip: rect(0px, 0px, 0px, 0px); pointer-ev=
ents: none; }

.btn-check:disabled + .btn, .btn-check[disabled] + .btn { pointer-events: n=
one; filter: none; opacity: 0.65; }

[data-bs-theme=3D"dark"] .form-switch .form-check-input:not(:checked):not(:=
focus) { --bs-form-switch-bg: url("data:image/svg+xml,%3csvg xmlns=3D'http:=
//www.w3.org/2000/svg' viewBox=3D'-4 -4 8 8'%3e%3ccircle r=3D'3' fill=3D'rg=
ba%28255, 255, 255, 0.25%29'/%3e%3c/svg%3e"); }

.form-range { width: 100%; height: 1.5rem; padding: 0px; appearance: none; =
background-color: transparent; }

.form-range:focus { outline: 0px; }

.form-range:focus::-webkit-slider-thumb { box-shadow: rgb(255, 255, 255) 0p=
x 0px 0px 1px, rgba(13, 110, 253, 0.25) 0px 0px 0px 0.25rem; }

.form-range::-webkit-slider-thumb { width: 1rem; height: 1rem; margin-top: =
-0.25rem; appearance: none; background-color: rgb(13, 110, 253); border: 0p=
x; border-radius: 1rem; transition: background-color 0.15s ease-in-out 0s, =
border-color 0.15s ease-in-out 0s, box-shadow 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-range::-webkit-slider-thumb { transition: none 0s ease 0s; }
}

.form-range::-webkit-slider-thumb:active { background-color: rgb(182, 212, =
254); }

.form-range::-webkit-slider-runnable-track { width: 100%; height: 0.5rem; c=
olor: transparent; cursor: pointer; background-color: var(--bs-secondary-bg=
); border-color: transparent; border-radius: 1rem; }

@media (prefers-reduced-motion: reduce) {
}

.form-range:disabled { pointer-events: none; }

.form-range:disabled::-webkit-slider-thumb { background-color: var(--bs-sec=
ondary-color); }

.form-floating { position: relative; }

.form-floating > .form-control, .form-floating > .form-control-plaintext, .=
form-floating > .form-select { height: calc(3.5rem + calc(var(--bs-border-w=
idth) * 2)); min-height: calc(3.5rem + calc(var(--bs-border-width) * 2)); l=
ine-height: 1.25; }

.form-floating > label { position: absolute; top: 0px; left: 0px; z-index: =
2; height: 100%; padding: 1rem 0.75rem; overflow: hidden; text-align: start=
; text-overflow: ellipsis; white-space: nowrap; pointer-events: none; borde=
r: var(--bs-border-width) solid transparent; transform-origin: 0px 0px; tra=
nsition: opacity 0.1s ease-in-out 0s, transform 0.1s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .form-floating > label { transition: none 0s ease 0s; }
}

.form-floating > .form-control, .form-floating > .form-control-plaintext { =
padding: 1rem 0.75rem; }

.form-floating > .form-control-plaintext::placeholder, .form-floating > .fo=
rm-control::placeholder { color: transparent; }

.form-floating > .form-control-plaintext:focus, .form-floating > .form-cont=
rol-plaintext:not(:placeholder-shown), .form-floating > .form-control:focus=
, .form-floating > .form-control:not(:placeholder-shown) { padding-top: 1.6=
25rem; padding-bottom: 0.625rem; }

.form-floating > .form-control-plaintext:-webkit-autofill, .form-floating >=
 .form-control:-webkit-autofill { padding-top: 1.625rem; padding-bottom: 0.=
625rem; }

.form-floating > .form-select { padding-top: 1.625rem; padding-bottom: 0.62=
5rem; }

.form-floating > .form-control-plaintext ~ label, .form-floating > .form-co=
ntrol:focus ~ label, .form-floating > .form-control:not(:placeholder-shown)=
 ~ label, .form-floating > .form-select ~ label { color: rgba(var(--bs-body=
-color-rgb),.65); transform: scale(0.85) translateY(-0.5rem) translateX(0.1=
5rem); }

.form-floating > .form-control-plaintext ~ label::after, .form-floating > .=
form-control:focus ~ label::after, .form-floating > .form-control:not(:plac=
eholder-shown) ~ label::after, .form-floating > .form-select ~ label::after=
 { position: absolute; inset: 1rem 0.375rem; z-index: -1; height: 1.5em; co=
ntent: ""; background-color: var(--bs-body-bg); border-radius: var(--bs-bor=
der-radius); }

.form-floating > .form-control:-webkit-autofill ~ label { color: rgba(var(-=
-bs-body-color-rgb),.65); transform: scale(0.85) translateY(-0.5rem) transl=
ateX(0.15rem); }

.form-floating > .form-control-plaintext ~ label { border-width: var(--bs-b=
order-width) 0; }

.form-floating > .form-control:disabled ~ label, .form-floating > :disabled=
 ~ label { color: rgb(108, 117, 125); }

.form-floating > .form-control:disabled ~ label::after, .form-floating > :d=
isabled ~ label::after { background-color: var(--bs-secondary-bg); }

.input-group { position: relative; display: flex; flex-wrap: wrap; align-it=
ems: stretch; width: 100%; }

.input-group > .form-control, .input-group > .form-floating, .input-group >=
 .form-select { position: relative; flex: 1 1 auto; width: 1%; min-width: 0=
px; }

.input-group > .form-control:focus, .input-group > .form-floating:focus-wit=
hin, .input-group > .form-select:focus { z-index: 5; }

.input-group .btn { position: relative; z-index: 2; }

.input-group .btn:focus { z-index: 5; }

.input-group-text { display: flex; align-items: center; padding: 0.375rem 0=
.75rem; font-size: 1rem; font-weight: 400; line-height: 1.5; color: var(--b=
s-body-color); text-align: center; white-space: nowrap; background-color: v=
ar(--bs-tertiary-bg); border: var(--bs-border-width) solid var(--bs-border-=
color); border-radius: var(--bs-border-radius); }

.input-group-lg > .btn, .input-group-lg > .form-control, .input-group-lg > =
.form-select, .input-group-lg > .input-group-text { padding: 0.5rem 1rem; f=
ont-size: 1.25rem; border-radius: var(--bs-border-radius-lg); }

.input-group-sm > .btn, .input-group-sm > .form-control, .input-group-sm > =
.form-select, .input-group-sm > .input-group-text { padding: 0.25rem 0.5rem=
; font-size: 0.875rem; border-radius: var(--bs-border-radius-sm); }

.input-group-lg > .form-select, .input-group-sm > .form-select { padding-ri=
ght: 3rem; }

.input-group:not(.has-validation) > .dropdown-toggle:nth-last-child(n+3), .=
input-group:not(.has-validation) > .form-floating:not(:last-child) > .form-=
control, .input-group:not(.has-validation) > .form-floating:not(:last-child=
) > .form-select, .input-group:not(.has-validation) > :not(:last-child):not=
(.dropdown-toggle):not(.dropdown-menu):not(.form-floating) { border-top-rig=
ht-radius: 0px; border-bottom-right-radius: 0px; }

.input-group.has-validation > .dropdown-toggle:nth-last-child(n+4), .input-=
group.has-validation > .form-floating:nth-last-child(n+3) > .form-control, =
.input-group.has-validation > .form-floating:nth-last-child(n+3) > .form-se=
lect, .input-group.has-validation > :nth-last-child(n+3):not(.dropdown-togg=
le):not(.dropdown-menu):not(.form-floating) { border-top-right-radius: 0px;=
 border-bottom-right-radius: 0px; }

.input-group > :not(:first-child):not(.dropdown-menu):not(.valid-tooltip):n=
ot(.valid-feedback):not(.invalid-tooltip):not(.invalid-feedback) { margin-l=
eft: calc(var(--bs-border-width) * -1); border-top-left-radius: 0px; border=
-bottom-left-radius: 0px; }

.input-group > .form-floating:not(:first-child) > .form-control, .input-gro=
up > .form-floating:not(:first-child) > .form-select { border-top-left-radi=
us: 0px; border-bottom-left-radius: 0px; }

.valid-feedback { display: none; width: 100%; margin-top: 0.25rem; font-siz=
e: 0.875em; color: var(--bs-form-valid-color); }

.valid-tooltip { position: absolute; top: 100%; z-index: 5; display: none; =
max-width: 100%; padding: 0.25rem 0.5rem; margin-top: 0.1rem; font-size: 0.=
875rem; color: rgb(255, 255, 255); background-color: var(--bs-success); bor=
der-radius: var(--bs-border-radius); }

.is-valid ~ .valid-feedback, .is-valid ~ .valid-tooltip, .was-validated :va=
lid ~ .valid-feedback, .was-validated :valid ~ .valid-tooltip { display: bl=
ock; }

.form-control.is-valid, .was-validated .form-control:valid { border-color: =
var(--bs-form-valid-border-color); padding-right: calc(1.5em + 0.75rem); ba=
ckground-image: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2=
000/svg' viewBox=3D'0 0 8 8'%3e%3cpath fill=3D'%23198754' d=3D'M2.3 6.73.6 =
4.53c-.4-1.04.46-1.4 1.1-.8l1.1 1.4 3.4-3.8c.6-.63 1.6-.27 1.2.7l-4 4.6c-.4=
3.5-.8.4-1.1.1z'/%3e%3c/svg%3e"); background-repeat: no-repeat; background-=
position: right calc(0.375em + 0.1875rem) center; background-size: calc(0.7=
5em + 0.375rem) calc(0.75em + 0.375rem); }

.form-control.is-valid:focus, .was-validated .form-control:valid:focus { bo=
rder-color: var(--bs-form-valid-border-color); box-shadow: 0 0 0 .25rem rgb=
a(var(--bs-success-rgb),.25); }

.was-validated textarea.form-control:valid, textarea.form-control.is-valid =
{ padding-right: calc(1.5em + 0.75rem); background-position: right calc(0.3=
75em + 0.1875rem) top calc(0.375em + 0.1875rem); }

.form-select.is-valid, .was-validated .form-select:valid { border-color: va=
r(--bs-form-valid-border-color); }

.form-select.is-valid:not([multiple]):not([size]), .form-select.is-valid:no=
t([multiple])[size=3D"1"], .was-validated .form-select:valid:not([multiple]=
):not([size]), .was-validated .form-select:valid:not([multiple])[size=3D"1"=
] { --bs-form-select-bg-icon: url("data:image/svg+xml,%3csvg xmlns=3D'http:=
//www.w3.org/2000/svg' viewBox=3D'0 0 8 8'%3e%3cpath fill=3D'%23198754' d=
=3D'M2.3 6.73.6 4.53c-.4-1.04.46-1.4 1.1-.8l1.1 1.4 3.4-3.8c.6-.63 1.6-.27 =
1.2.7l-4 4.6c-.43.5-.8.4-1.1.1z'/%3e%3c/svg%3e"); padding-right: 4.125rem; =
background-position: right 0.75rem center, right 2.25rem center; background=
-size: 16px 12px, calc(0.75em + 0.375rem) calc(0.75em + 0.375rem); }

.form-select.is-valid:focus, .was-validated .form-select:valid:focus { bord=
er-color: var(--bs-form-valid-border-color); box-shadow: 0 0 0 .25rem rgba(=
var(--bs-success-rgb),.25); }

.form-control-color.is-valid, .was-validated .form-control-color:valid { wi=
dth: calc(1.5em + 3.75rem); }

.form-check-input.is-valid, .was-validated .form-check-input:valid { border=
-color: var(--bs-form-valid-border-color); }

.form-check-input.is-valid:checked, .was-validated .form-check-input:valid:=
checked { background-color: var(--bs-form-valid-color); }

.form-check-input.is-valid:focus, .was-validated .form-check-input:valid:fo=
cus { box-shadow: 0 0 0 .25rem rgba(var(--bs-success-rgb),.25); }

.form-check-input.is-valid ~ .form-check-label, .was-validated .form-check-=
input:valid ~ .form-check-label { color: var(--bs-form-valid-color); }

.form-check-inline .form-check-input ~ .valid-feedback { margin-left: 0.5em=
; }

.input-group > .form-control:not(:focus).is-valid, .input-group > .form-flo=
ating:not(:focus-within).is-valid, .input-group > .form-select:not(:focus).=
is-valid, .was-validated .input-group > .form-control:not(:focus):valid, .w=
as-validated .input-group > .form-floating:not(:focus-within):valid, .was-v=
alidated .input-group > .form-select:not(:focus):valid { z-index: 3; }

.invalid-feedback { display: none; width: 100%; margin-top: 0.25rem; font-s=
ize: 0.875em; color: var(--bs-form-invalid-color); }

.invalid-tooltip { position: absolute; top: 100%; z-index: 5; display: none=
; max-width: 100%; padding: 0.25rem 0.5rem; margin-top: 0.1rem; font-size: =
0.875rem; color: rgb(255, 255, 255); background-color: var(--bs-danger); bo=
rder-radius: var(--bs-border-radius); }

.is-invalid ~ .invalid-feedback, .is-invalid ~ .invalid-tooltip, .was-valid=
ated :invalid ~ .invalid-feedback, .was-validated :invalid ~ .invalid-toolt=
ip { display: block; }

.form-control.is-invalid, .was-validated .form-control:invalid { border-col=
or: var(--bs-form-invalid-border-color); padding-right: calc(1.5em + 0.75re=
m); background-image: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3=
.org/2000/svg' viewBox=3D'0 0 12 12' width=3D'12' height=3D'12' fill=3D'non=
e' stroke=3D'%23dc3545'%3e%3ccircle cx=3D'6' cy=3D'6' r=3D'4.5'/%3e%3cpath =
stroke-linejoin=3D'round' d=3D'M5.8 3.6h.4L6 6.5z'/%3e%3ccircle cx=3D'6' cy=
=3D'8.2' r=3D'.6' fill=3D'%23dc3545' stroke=3D'none'/%3e%3c/svg%3e"); backg=
round-repeat: no-repeat; background-position: right calc(0.375em + 0.1875re=
m) center; background-size: calc(0.75em + 0.375rem) calc(0.75em + 0.375rem)=
; }

.form-control.is-invalid:focus, .was-validated .form-control:invalid:focus =
{ border-color: var(--bs-form-invalid-border-color); box-shadow: 0 0 0 .25r=
em rgba(var(--bs-danger-rgb),.25); }

.was-validated textarea.form-control:invalid, textarea.form-control.is-inva=
lid { padding-right: calc(1.5em + 0.75rem); background-position: right calc=
(0.375em + 0.1875rem) top calc(0.375em + 0.1875rem); }

.form-select.is-invalid, .was-validated .form-select:invalid { border-color=
: var(--bs-form-invalid-border-color); }

.form-select.is-invalid:not([multiple]):not([size]), .form-select.is-invali=
d:not([multiple])[size=3D"1"], .was-validated .form-select:invalid:not([mul=
tiple]):not([size]), .was-validated .form-select:invalid:not([multiple])[si=
ze=3D"1"] { --bs-form-select-bg-icon: url("data:image/svg+xml,%3csvg xmlns=
=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 12 12' width=3D'12' height=
=3D'12' fill=3D'none' stroke=3D'%23dc3545'%3e%3ccircle cx=3D'6' cy=3D'6' r=
=3D'4.5'/%3e%3cpath stroke-linejoin=3D'round' d=3D'M5.8 3.6h.4L6 6.5z'/%3e%=
3ccircle cx=3D'6' cy=3D'8.2' r=3D'.6' fill=3D'%23dc3545' stroke=3D'none'/%3=
e%3c/svg%3e"); padding-right: 4.125rem; background-position: right 0.75rem =
center, right 2.25rem center; background-size: 16px 12px, calc(0.75em + 0.3=
75rem) calc(0.75em + 0.375rem); }

.form-select.is-invalid:focus, .was-validated .form-select:invalid:focus { =
border-color: var(--bs-form-invalid-border-color); box-shadow: 0 0 0 .25rem=
 rgba(var(--bs-danger-rgb),.25); }

.form-control-color.is-invalid, .was-validated .form-control-color:invalid =
{ width: calc(1.5em + 3.75rem); }

.form-check-input.is-invalid, .was-validated .form-check-input:invalid { bo=
rder-color: var(--bs-form-invalid-border-color); }

.form-check-input.is-invalid:checked, .was-validated .form-check-input:inva=
lid:checked { background-color: var(--bs-form-invalid-color); }

.form-check-input.is-invalid:focus, .was-validated .form-check-input:invali=
d:focus { box-shadow: 0 0 0 .25rem rgba(var(--bs-danger-rgb),.25); }

.form-check-input.is-invalid ~ .form-check-label, .was-validated .form-chec=
k-input:invalid ~ .form-check-label { color: var(--bs-form-invalid-color); =
}

.form-check-inline .form-check-input ~ .invalid-feedback { margin-left: 0.5=
em; }

.input-group > .form-control:not(:focus).is-invalid, .input-group > .form-f=
loating:not(:focus-within).is-invalid, .input-group > .form-select:not(:foc=
us).is-invalid, .was-validated .input-group > .form-control:not(:focus):inv=
alid, .was-validated .input-group > .form-floating:not(:focus-within):inval=
id, .was-validated .input-group > .form-select:not(:focus):invalid { z-inde=
x: 4; }

.btn { --bs-btn-padding-x: 0.75rem; --bs-btn-padding-y: 0.375rem; --bs-btn-=
font-family: ; --bs-btn-font-size: 1rem; --bs-btn-font-weight: 400; --bs-bt=
n-line-height: 1.5; --bs-btn-color: var(--bs-body-color); --bs-btn-bg: tran=
sparent; --bs-btn-border-width: var(--bs-border-width); --bs-btn-border-col=
or: transparent; --bs-btn-border-radius: var(--bs-border-radius); --bs-btn-=
hover-border-color: transparent; --bs-btn-box-shadow: inset 0 1px 0 rgba(25=
5, 255, 255, 0.15),0 1px 1px rgba(0, 0, 0, 0.075); --bs-btn-disabled-opacit=
y: 0.65; --bs-btn-focus-box-shadow: 0 0 0 0.25rem rgba(var(--bs-btn-focus-s=
hadow-rgb), .5); display: inline-block; padding: var(--bs-btn-padding-y) va=
r(--bs-btn-padding-x); font-family: var(--bs-btn-font-family); font-size: v=
ar(--bs-btn-font-size); font-weight: var(--bs-btn-font-weight); line-height=
: var(--bs-btn-line-height); color: var(--bs-btn-color); text-align: center=
; text-decoration: none; vertical-align: middle; cursor: pointer; user-sele=
ct: none; border: var(--bs-btn-border-width) solid var(--bs-btn-border-colo=
r); border-radius: var(--bs-btn-border-radius); background-color: var(--bs-=
btn-bg); transition: color 0.15s ease-in-out 0s, background-color 0.15s eas=
e-in-out 0s, border-color 0.15s ease-in-out 0s, box-shadow 0.15s ease-in-ou=
t 0s; }

@media (prefers-reduced-motion: reduce) {
  .btn { transition: none 0s ease 0s; }
}

.btn:hover { color: var(--bs-btn-hover-color); background-color: var(--bs-b=
tn-hover-bg); border-color: var(--bs-btn-hover-border-color); }

.btn-check + .btn:hover { color: var(--bs-btn-color); background-color: var=
(--bs-btn-bg); border-color: var(--bs-btn-border-color); }

.btn:focus-visible { color: var(--bs-btn-hover-color); background-color: va=
r(--bs-btn-hover-bg); border-color: var(--bs-btn-hover-border-color); outli=
ne: 0px; box-shadow: var(--bs-btn-focus-box-shadow); }

.btn-check:focus-visible + .btn { border-color: var(--bs-btn-hover-border-c=
olor); outline: 0px; box-shadow: var(--bs-btn-focus-box-shadow); }

.btn-check:checked + .btn, .btn.active, .btn.show, .btn:first-child:active,=
 :not(.btn-check) + .btn:active { color: var(--bs-btn-active-color); backgr=
ound-color: var(--bs-btn-active-bg); border-color: var(--bs-btn-active-bord=
er-color); }

.btn-check:checked + .btn:focus-visible, .btn.active:focus-visible, .btn.sh=
ow:focus-visible, .btn:first-child:active:focus-visible, :not(.btn-check) +=
 .btn:active:focus-visible { box-shadow: var(--bs-btn-focus-box-shadow); }

.btn.disabled, .btn:disabled, fieldset:disabled .btn { color: var(--bs-btn-=
disabled-color); pointer-events: none; background-color: var(--bs-btn-disab=
led-bg); border-color: var(--bs-btn-disabled-border-color); opacity: var(--=
bs-btn-disabled-opacity); }

.btn-primary { --bs-btn-color: #fff; --bs-btn-bg: #0d6efd; --bs-btn-border-=
color: #0d6efd; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #0b5ed7; --b=
s-btn-hover-border-color: #0a58ca; --bs-btn-focus-shadow-rgb: 49,132,253; -=
-bs-btn-active-color: #fff; --bs-btn-active-bg: #0a58ca; --bs-btn-active-bo=
rder-color: #0a53be; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, =
0.125); --bs-btn-disabled-color: #fff; --bs-btn-disabled-bg: #0d6efd; --bs-=
btn-disabled-border-color: #0d6efd; }

.btn-secondary { --bs-btn-color: #fff; --bs-btn-bg: #6c757d; --bs-btn-borde=
r-color: #6c757d; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #5c636a; -=
-bs-btn-hover-border-color: #565e64; --bs-btn-focus-shadow-rgb: 130,138,145=
; --bs-btn-active-color: #fff; --bs-btn-active-bg: #565e64; --bs-btn-active=
-border-color: #51585e; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, =
0, 0.125); --bs-btn-disabled-color: #fff; --bs-btn-disabled-bg: #6c757d; --=
bs-btn-disabled-border-color: #6c757d; }

.btn-success { --bs-btn-color: #fff; --bs-btn-bg: #198754; --bs-btn-border-=
color: #198754; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #157347; --b=
s-btn-hover-border-color: #146c43; --bs-btn-focus-shadow-rgb: 60,153,110; -=
-bs-btn-active-color: #fff; --bs-btn-active-bg: #146c43; --bs-btn-active-bo=
rder-color: #13653f; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, =
0.125); --bs-btn-disabled-color: #fff; --bs-btn-disabled-bg: #198754; --bs-=
btn-disabled-border-color: #198754; }

.btn-info { --bs-btn-color: #000; --bs-btn-bg: #0dcaf0; --bs-btn-border-col=
or: #0dcaf0; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #31d2f2; --bs-b=
tn-hover-border-color: #25cff2; --bs-btn-focus-shadow-rgb: 11,172,204; --bs=
-btn-active-color: #000; --bs-btn-active-bg: #3dd5f3; --bs-btn-active-borde=
r-color: #25cff2; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.1=
25); --bs-btn-disabled-color: #000; --bs-btn-disabled-bg: #0dcaf0; --bs-btn=
-disabled-border-color: #0dcaf0; }

.btn-warning { --bs-btn-color: #000; --bs-btn-bg: #ffc107; --bs-btn-border-=
color: #ffc107; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #ffca2c; --b=
s-btn-hover-border-color: #ffc720; --bs-btn-focus-shadow-rgb: 217,164,6; --=
bs-btn-active-color: #000; --bs-btn-active-bg: #ffcd39; --bs-btn-active-bor=
der-color: #ffc720; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0=
.125); --bs-btn-disabled-color: #000; --bs-btn-disabled-bg: #ffc107; --bs-b=
tn-disabled-border-color: #ffc107; }

.btn-danger { --bs-btn-color: #fff; --bs-btn-bg: #dc3545; --bs-btn-border-c=
olor: #dc3545; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #bb2d3b; --bs=
-btn-hover-border-color: #b02a37; --bs-btn-focus-shadow-rgb: 225,83,97; --b=
s-btn-active-color: #fff; --bs-btn-active-bg: #b02a37; --bs-btn-active-bord=
er-color: #a52834; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.=
125); --bs-btn-disabled-color: #fff; --bs-btn-disabled-bg: #dc3545; --bs-bt=
n-disabled-border-color: #dc3545; }

.btn-light { --bs-btn-color: #000; --bs-btn-bg: #f8f9fa; --bs-btn-border-co=
lor: #f8f9fa; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #d3d4d5; --bs-=
btn-hover-border-color: #c6c7c8; --bs-btn-focus-shadow-rgb: 211,212,213; --=
bs-btn-active-color: #000; --bs-btn-active-bg: #c6c7c8; --bs-btn-active-bor=
der-color: #babbbc; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0=
.125); --bs-btn-disabled-color: #000; --bs-btn-disabled-bg: #f8f9fa; --bs-b=
tn-disabled-border-color: #f8f9fa; }

.btn-dark { --bs-btn-color: #fff; --bs-btn-bg: #212529; --bs-btn-border-col=
or: #212529; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #424649; --bs-b=
tn-hover-border-color: #373b3e; --bs-btn-focus-shadow-rgb: 66,70,73; --bs-b=
tn-active-color: #fff; --bs-btn-active-bg: #4d5154; --bs-btn-active-border-=
color: #373b3e; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125=
); --bs-btn-disabled-color: #fff; --bs-btn-disabled-bg: #212529; --bs-btn-d=
isabled-border-color: #212529; }

.btn-outline-primary { --bs-btn-color: #0d6efd; --bs-btn-border-color: #0d6=
efd; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #0d6efd; --bs-btn-hover=
-border-color: #0d6efd; --bs-btn-focus-shadow-rgb: 13,110,253; --bs-btn-act=
ive-color: #fff; --bs-btn-active-bg: #0d6efd; --bs-btn-active-border-color:=
 #0d6efd; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --b=
s-btn-disabled-color: #0d6efd; --bs-btn-disabled-bg: transparent; --bs-btn-=
disabled-border-color: #0d6efd; --bs-gradient: none; }

.btn-outline-secondary { --bs-btn-color: #6c757d; --bs-btn-border-color: #6=
c757d; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #6c757d; --bs-btn-hov=
er-border-color: #6c757d; --bs-btn-focus-shadow-rgb: 108,117,125; --bs-btn-=
active-color: #fff; --bs-btn-active-bg: #6c757d; --bs-btn-active-border-col=
or: #6c757d; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); =
--bs-btn-disabled-color: #6c757d; --bs-btn-disabled-bg: transparent; --bs-b=
tn-disabled-border-color: #6c757d; --bs-gradient: none; }

.btn-outline-success { --bs-btn-color: #198754; --bs-btn-border-color: #198=
754; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #198754; --bs-btn-hover=
-border-color: #198754; --bs-btn-focus-shadow-rgb: 25,135,84; --bs-btn-acti=
ve-color: #fff; --bs-btn-active-bg: #198754; --bs-btn-active-border-color: =
#198754; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs=
-btn-disabled-color: #198754; --bs-btn-disabled-bg: transparent; --bs-btn-d=
isabled-border-color: #198754; --bs-gradient: none; }

.btn-outline-info { --bs-btn-color: #0dcaf0; --bs-btn-border-color: #0dcaf0=
; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #0dcaf0; --bs-btn-hover-bo=
rder-color: #0dcaf0; --bs-btn-focus-shadow-rgb: 13,202,240; --bs-btn-active=
-color: #000; --bs-btn-active-bg: #0dcaf0; --bs-btn-active-border-color: #0=
dcaf0; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs-b=
tn-disabled-color: #0dcaf0; --bs-btn-disabled-bg: transparent; --bs-btn-dis=
abled-border-color: #0dcaf0; --bs-gradient: none; }

.btn-outline-warning { --bs-btn-color: #ffc107; --bs-btn-border-color: #ffc=
107; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #ffc107; --bs-btn-hover=
-border-color: #ffc107; --bs-btn-focus-shadow-rgb: 255,193,7; --bs-btn-acti=
ve-color: #000; --bs-btn-active-bg: #ffc107; --bs-btn-active-border-color: =
#ffc107; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs=
-btn-disabled-color: #ffc107; --bs-btn-disabled-bg: transparent; --bs-btn-d=
isabled-border-color: #ffc107; --bs-gradient: none; }

.btn-outline-danger { --bs-btn-color: #dc3545; --bs-btn-border-color: #dc35=
45; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #dc3545; --bs-btn-hover-=
border-color: #dc3545; --bs-btn-focus-shadow-rgb: 220,53,69; --bs-btn-activ=
e-color: #fff; --bs-btn-active-bg: #dc3545; --bs-btn-active-border-color: #=
dc3545; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs-=
btn-disabled-color: #dc3545; --bs-btn-disabled-bg: transparent; --bs-btn-di=
sabled-border-color: #dc3545; --bs-gradient: none; }

.btn-outline-light { --bs-btn-color: #f8f9fa; --bs-btn-border-color: #f8f9f=
a; --bs-btn-hover-color: #000; --bs-btn-hover-bg: #f8f9fa; --bs-btn-hover-b=
order-color: #f8f9fa; --bs-btn-focus-shadow-rgb: 248,249,250; --bs-btn-acti=
ve-color: #000; --bs-btn-active-bg: #f8f9fa; --bs-btn-active-border-color: =
#f8f9fa; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs=
-btn-disabled-color: #f8f9fa; --bs-btn-disabled-bg: transparent; --bs-btn-d=
isabled-border-color: #f8f9fa; --bs-gradient: none; }

.btn-outline-dark { --bs-btn-color: #212529; --bs-btn-border-color: #212529=
; --bs-btn-hover-color: #fff; --bs-btn-hover-bg: #212529; --bs-btn-hover-bo=
rder-color: #212529; --bs-btn-focus-shadow-rgb: 33,37,41; --bs-btn-active-c=
olor: #fff; --bs-btn-active-bg: #212529; --bs-btn-active-border-color: #212=
529; --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125); --bs-btn=
-disabled-color: #212529; --bs-btn-disabled-bg: transparent; --bs-btn-disab=
led-border-color: #212529; --bs-gradient: none; }

.btn-link { --bs-btn-font-weight: 400; --bs-btn-color: var(--bs-link-color)=
; --bs-btn-bg: transparent; --bs-btn-border-color: transparent; --bs-btn-ho=
ver-color: var(--bs-link-hover-color); --bs-btn-hover-border-color: transpa=
rent; --bs-btn-active-color: var(--bs-link-hover-color); --bs-btn-active-bo=
rder-color: transparent; --bs-btn-disabled-color: #6c757d; --bs-btn-disable=
d-border-color: transparent; --bs-btn-box-shadow: 0 0 0 #000; --bs-btn-focu=
s-shadow-rgb: 49,132,253; text-decoration: underline; }

.btn-link:focus-visible { color: var(--bs-btn-color); }

.btn-link:hover { color: var(--bs-btn-hover-color); }

.btn-group-lg > .btn, .btn-lg { --bs-btn-padding-y: 0.5rem; --bs-btn-paddin=
g-x: 1rem; --bs-btn-font-size: 1.25rem; --bs-btn-border-radius: var(--bs-bo=
rder-radius-lg); }

.btn-group-sm > .btn, .btn-sm { --bs-btn-padding-y: 0.25rem; --bs-btn-paddi=
ng-x: 0.5rem; --bs-btn-font-size: 0.875rem; --bs-btn-border-radius: var(--b=
s-border-radius-sm); }

.fade { transition: opacity 0.15s linear 0s; }

@media (prefers-reduced-motion: reduce) {
  .fade { transition: none 0s ease 0s; }
}

.fade:not(.show) { opacity: 0; }

.collapse:not(.show) { display: none; }

.collapsing { height: 0px; overflow: hidden; transition: height 0.35s ease =
0s; }

@media (prefers-reduced-motion: reduce) {
  .collapsing { transition: none 0s ease 0s; }
}

.collapsing.collapse-horizontal { width: 0px; height: auto; transition: wid=
th 0.35s ease 0s; }

@media (prefers-reduced-motion: reduce) {
  .collapsing.collapse-horizontal { transition: none 0s ease 0s; }
}

.dropdown, .dropdown-center, .dropend, .dropstart, .dropup, .dropup-center =
{ position: relative; }

.dropdown-toggle { white-space: nowrap; }

.dropdown-toggle::after { display: inline-block; margin-left: 0.255em; vert=
ical-align: 0.255em; content: ""; border-width: 0.3em 0.3em 0px; border-top=
-style: solid; border-top-color: initial; border-right-style: solid; border=
-right-color: transparent; border-bottom-style: initial; border-bottom-colo=
r: initial; border-left-style: solid; border-left-color: transparent; }

.dropdown-toggle:empty::after { margin-left: 0px; }

.dropdown-menu { --bs-dropdown-zindex: 1000; --bs-dropdown-min-width: 10rem=
; --bs-dropdown-padding-x: 0; --bs-dropdown-padding-y: 0.5rem; --bs-dropdow=
n-spacer: 0.125rem; --bs-dropdown-font-size: 1rem; --bs-dropdown-color: var=
(--bs-body-color); --bs-dropdown-bg: var(--bs-body-bg); --bs-dropdown-borde=
r-color: var(--bs-border-color-translucent); --bs-dropdown-border-radius: v=
ar(--bs-border-radius); --bs-dropdown-border-width: var(--bs-border-width);=
 --bs-dropdown-inner-border-radius: calc(var(--bs-border-radius) - var(--bs=
-border-width)); --bs-dropdown-divider-bg: var(--bs-border-color-translucen=
t); --bs-dropdown-divider-margin-y: 0.5rem; --bs-dropdown-box-shadow: var(-=
-bs-box-shadow); --bs-dropdown-link-color: var(--bs-body-color); --bs-dropd=
own-link-hover-color: var(--bs-body-color); --bs-dropdown-link-hover-bg: va=
r(--bs-tertiary-bg); --bs-dropdown-link-active-color: #fff; --bs-dropdown-l=
ink-active-bg: #0d6efd; --bs-dropdown-link-disabled-color: var(--bs-tertiar=
y-color); --bs-dropdown-item-padding-x: 1rem; --bs-dropdown-item-padding-y:=
 0.25rem; --bs-dropdown-header-color: #6c757d; --bs-dropdown-header-padding=
-x: 1rem; --bs-dropdown-header-padding-y: 0.5rem; position: absolute; z-ind=
ex: var(--bs-dropdown-zindex); display: none; min-width: var(--bs-dropdown-=
min-width); padding: var(--bs-dropdown-padding-y) var(--bs-dropdown-padding=
-x); margin: 0px; font-size: var(--bs-dropdown-font-size); color: var(--bs-=
dropdown-color); text-align: left; list-style: none; background-color: var(=
--bs-dropdown-bg); background-clip: padding-box; border: var(--bs-dropdown-=
border-width) solid var(--bs-dropdown-border-color); border-radius: var(--b=
s-dropdown-border-radius); }

.dropdown-menu[data-bs-popper] { top: 100%; left: 0px; margin-top: var(--bs=
-dropdown-spacer); }

.dropdown-menu-start { --bs-position: start; }

.dropdown-menu-start[data-bs-popper] { right: auto; left: 0px; }

.dropdown-menu-end { --bs-position: end; }

.dropdown-menu-end[data-bs-popper] { right: 0px; left: auto; }

@media (min-width: 576px) {
  .dropdown-menu-sm-start { --bs-position: start; }
  .dropdown-menu-sm-start[data-bs-popper] { right: auto; left: 0px; }
  .dropdown-menu-sm-end { --bs-position: end; }
  .dropdown-menu-sm-end[data-bs-popper] { right: 0px; left: auto; }
}

@media (min-width: 768px) {
  .dropdown-menu-md-start { --bs-position: start; }
  .dropdown-menu-md-start[data-bs-popper] { right: auto; left: 0px; }
  .dropdown-menu-md-end { --bs-position: end; }
  .dropdown-menu-md-end[data-bs-popper] { right: 0px; left: auto; }
}

@media (min-width: 992px) {
  .dropdown-menu-lg-start { --bs-position: start; }
  .dropdown-menu-lg-start[data-bs-popper] { right: auto; left: 0px; }
  .dropdown-menu-lg-end { --bs-position: end; }
  .dropdown-menu-lg-end[data-bs-popper] { right: 0px; left: auto; }
}

@media (min-width: 1200px) {
  .dropdown-menu-xl-start { --bs-position: start; }
  .dropdown-menu-xl-start[data-bs-popper] { right: auto; left: 0px; }
  .dropdown-menu-xl-end { --bs-position: end; }
  .dropdown-menu-xl-end[data-bs-popper] { right: 0px; left: auto; }
}

@media (min-width: 1400px) {
  .dropdown-menu-xxl-start { --bs-position: start; }
  .dropdown-menu-xxl-start[data-bs-popper] { right: auto; left: 0px; }
  .dropdown-menu-xxl-end { --bs-position: end; }
  .dropdown-menu-xxl-end[data-bs-popper] { right: 0px; left: auto; }
}

.dropup .dropdown-menu[data-bs-popper] { top: auto; bottom: 100%; margin-to=
p: 0px; margin-bottom: var(--bs-dropdown-spacer); }

.dropup .dropdown-toggle::after { display: inline-block; margin-left: 0.255=
em; vertical-align: 0.255em; content: ""; border-width: 0px 0.3em 0.3em; bo=
rder-top-style: initial; border-top-color: initial; border-right-style: sol=
id; border-right-color: transparent; border-bottom-style: solid; border-bot=
tom-color: initial; border-left-style: solid; border-left-color: transparen=
t; }

.dropup .dropdown-toggle:empty::after { margin-left: 0px; }

.dropend .dropdown-menu[data-bs-popper] { top: 0px; right: auto; left: 100%=
; margin-top: 0px; margin-left: var(--bs-dropdown-spacer); }

.dropend .dropdown-toggle::after { display: inline-block; margin-left: 0.25=
5em; vertical-align: 0.255em; content: ""; border-width: 0.3em 0px 0.3em 0.=
3em; border-top-style: solid; border-top-color: transparent; border-right-s=
tyle: initial; border-right-color: initial; border-bottom-style: solid; bor=
der-bottom-color: transparent; border-left-style: solid; border-left-color:=
 initial; }

.dropend .dropdown-toggle:empty::after { margin-left: 0px; }

.dropend .dropdown-toggle::after { vertical-align: 0px; }

.dropstart .dropdown-menu[data-bs-popper] { top: 0px; right: 100%; left: au=
to; margin-top: 0px; margin-right: var(--bs-dropdown-spacer); }

.dropstart .dropdown-toggle::after { display: inline-block; margin-left: 0.=
255em; vertical-align: 0.255em; content: ""; }

.dropstart .dropdown-toggle::after { display: none; }

.dropstart .dropdown-toggle::before { display: inline-block; margin-right: =
0.255em; vertical-align: 0.255em; content: ""; border-top: 0.3em solid tran=
sparent; border-right: 0.3em solid; border-bottom: 0.3em solid transparent;=
 }

.dropstart .dropdown-toggle:empty::after { margin-left: 0px; }

.dropstart .dropdown-toggle::before { vertical-align: 0px; }

.dropdown-divider { height: 0px; margin: var(--bs-dropdown-divider-margin-y=
) 0; overflow: hidden; border-top: 1px solid var(--bs-dropdown-divider-bg);=
 opacity: 1; }

.dropdown-item { display: block; width: 100%; padding: var(--bs-dropdown-it=
em-padding-y) var(--bs-dropdown-item-padding-x); clear: both; font-weight: =
400; color: var(--bs-dropdown-link-color); text-align: inherit; text-decora=
tion: none; white-space: nowrap; background-color: transparent; border: 0px=
; border-radius: var(--bs-dropdown-item-border-radius,0); }

.dropdown-item:focus, .dropdown-item:hover { color: var(--bs-dropdown-link-=
hover-color); background-color: var(--bs-dropdown-link-hover-bg); }

.dropdown-item.active, .dropdown-item:active { color: var(--bs-dropdown-lin=
k-active-color); text-decoration: none; background-color: var(--bs-dropdown=
-link-active-bg); }

.dropdown-item.disabled, .dropdown-item:disabled { color: var(--bs-dropdown=
-link-disabled-color); pointer-events: none; background-color: transparent;=
 }

.dropdown-menu.show { display: block; }

.dropdown-header { display: block; padding: var(--bs-dropdown-header-paddin=
g-y) var(--bs-dropdown-header-padding-x); margin-bottom: 0px; font-size: 0.=
875rem; color: var(--bs-dropdown-header-color); white-space: nowrap; }

.dropdown-item-text { display: block; padding: var(--bs-dropdown-item-paddi=
ng-y) var(--bs-dropdown-item-padding-x); color: var(--bs-dropdown-link-colo=
r); }

.dropdown-menu-dark { --bs-dropdown-color: #dee2e6; --bs-dropdown-bg: #343a=
40; --bs-dropdown-border-color: var(--bs-border-color-translucent); --bs-dr=
opdown-box-shadow: ; --bs-dropdown-link-color: #dee2e6; --bs-dropdown-link-=
hover-color: #fff; --bs-dropdown-divider-bg: var(--bs-border-color-transluc=
ent); --bs-dropdown-link-hover-bg: rgba(255, 255, 255, 0.15); --bs-dropdown=
-link-active-color: #fff; --bs-dropdown-link-active-bg: #0d6efd; --bs-dropd=
own-link-disabled-color: #adb5bd; --bs-dropdown-header-color: #adb5bd; }

.btn-group, .btn-group-vertical { position: relative; display: inline-flex;=
 vertical-align: middle; }

.btn-group-vertical > .btn, .btn-group > .btn { position: relative; flex: 1=
 1 auto; }

.btn-group-vertical > .btn-check:checked + .btn, .btn-group-vertical > .btn=
-check:focus + .btn, .btn-group-vertical > .btn.active, .btn-group-vertical=
 > .btn:active, .btn-group-vertical > .btn:focus, .btn-group-vertical > .bt=
n:hover, .btn-group > .btn-check:checked + .btn, .btn-group > .btn-check:fo=
cus + .btn, .btn-group > .btn.active, .btn-group > .btn:active, .btn-group =
> .btn:focus, .btn-group > .btn:hover { z-index: 1; }

.btn-toolbar { display: flex; flex-wrap: wrap; justify-content: flex-start;=
 }

.btn-toolbar .input-group { width: auto; }

.btn-group { border-radius: var(--bs-border-radius); }

.btn-group > .btn-group:not(:first-child), .btn-group > :not(.btn-check:fir=
st-child) + .btn { margin-left: calc(var(--bs-border-width) * -1); }

.btn-group > .btn-group:not(:last-child) > .btn, .btn-group > .btn.dropdown=
-toggle-split:first-child, .btn-group > .btn:not(:last-child):not(.dropdown=
-toggle) { border-top-right-radius: 0px; border-bottom-right-radius: 0px; }

.btn-group > .btn-group:not(:first-child) > .btn, .btn-group > .btn:nth-chi=
ld(n+3), .btn-group > :not(.btn-check) + .btn { border-top-left-radius: 0px=
; border-bottom-left-radius: 0px; }

.dropdown-toggle-split { padding-right: 0.5625rem; padding-left: 0.5625rem;=
 }

.dropdown-toggle-split::after, .dropend .dropdown-toggle-split::after, .dro=
pup .dropdown-toggle-split::after { margin-left: 0px; }

.dropstart .dropdown-toggle-split::before { margin-right: 0px; }

.btn-group-sm > .btn + .dropdown-toggle-split, .btn-sm + .dropdown-toggle-s=
plit { padding-right: 0.375rem; padding-left: 0.375rem; }

.btn-group-lg > .btn + .dropdown-toggle-split, .btn-lg + .dropdown-toggle-s=
plit { padding-right: 0.75rem; padding-left: 0.75rem; }

.btn-group-vertical { flex-direction: column; align-items: flex-start; just=
ify-content: center; }

.btn-group-vertical > .btn, .btn-group-vertical > .btn-group { width: 100%;=
 }

.btn-group-vertical > .btn-group:not(:first-child), .btn-group-vertical > .=
btn:not(:first-child) { margin-top: calc(var(--bs-border-width) * -1); }

.btn-group-vertical > .btn-group:not(:last-child) > .btn, .btn-group-vertic=
al > .btn:not(:last-child):not(.dropdown-toggle) { border-bottom-right-radi=
us: 0px; border-bottom-left-radius: 0px; }

.btn-group-vertical > .btn-group:not(:first-child) > .btn, .btn-group-verti=
cal > .btn ~ .btn { border-top-left-radius: 0px; border-top-right-radius: 0=
px; }

.nav { --bs-nav-link-padding-x: 1rem; --bs-nav-link-padding-y: 0.5rem; --bs=
-nav-link-font-weight: ; --bs-nav-link-color: var(--bs-link-color); --bs-na=
v-link-hover-color: var(--bs-link-hover-color); --bs-nav-link-disabled-colo=
r: var(--bs-secondary-color); display: flex; flex-wrap: wrap; padding-left:=
 0px; margin-bottom: 0px; list-style: none; }

.nav-link { display: block; padding: var(--bs-nav-link-padding-y) var(--bs-=
nav-link-padding-x); font-size: var(--bs-nav-link-font-size); font-weight: =
var(--bs-nav-link-font-weight); color: var(--bs-nav-link-color); text-decor=
ation: none; background: 0px 0px; border: 0px; transition: color 0.15s ease=
-in-out 0s, background-color 0.15s ease-in-out 0s, border-color 0.15s ease-=
in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .nav-link { transition: none 0s ease 0s; }
}

.nav-link:focus, .nav-link:hover { color: var(--bs-nav-link-hover-color); }

.nav-link:focus-visible { outline: 0px; box-shadow: rgba(13, 110, 253, 0.25=
) 0px 0px 0px 0.25rem; }

.nav-link.disabled, .nav-link:disabled { color: var(--bs-nav-link-disabled-=
color); pointer-events: none; cursor: default; }

.nav-tabs { --bs-nav-tabs-border-width: var(--bs-border-width); --bs-nav-ta=
bs-border-color: var(--bs-border-color); --bs-nav-tabs-border-radius: var(-=
-bs-border-radius); --bs-nav-tabs-link-hover-border-color: var(--bs-seconda=
ry-bg) var(--bs-secondary-bg) var(--bs-border-color); --bs-nav-tabs-link-ac=
tive-color: var(--bs-emphasis-color); --bs-nav-tabs-link-active-bg: var(--b=
s-body-bg); --bs-nav-tabs-link-active-border-color: var(--bs-border-color) =
var(--bs-border-color) var(--bs-body-bg); border-bottom: var(--bs-nav-tabs-=
border-width) solid var(--bs-nav-tabs-border-color); }

.nav-tabs .nav-link { margin-bottom: calc(-1 * var(--bs-nav-tabs-border-wid=
th)); border: var(--bs-nav-tabs-border-width) solid transparent; border-top=
-left-radius: var(--bs-nav-tabs-border-radius); border-top-right-radius: va=
r(--bs-nav-tabs-border-radius); }

.nav-tabs .nav-link:focus, .nav-tabs .nav-link:hover { isolation: isolate; =
border-color: var(--bs-nav-tabs-link-hover-border-color); }

.nav-tabs .nav-item.show .nav-link, .nav-tabs .nav-link.active { color: var=
(--bs-nav-tabs-link-active-color); background-color: var(--bs-nav-tabs-link=
-active-bg); border-color: var(--bs-nav-tabs-link-active-border-color); }

.nav-tabs .dropdown-menu { margin-top: calc(-1 * var(--bs-nav-tabs-border-w=
idth)); border-top-left-radius: 0px; border-top-right-radius: 0px; }

.nav-pills { --bs-nav-pills-border-radius: var(--bs-border-radius); --bs-na=
v-pills-link-active-color: #fff; --bs-nav-pills-link-active-bg: #0d6efd; }

.nav-pills .nav-link { border-radius: var(--bs-nav-pills-border-radius); }

.nav-pills .nav-link.active, .nav-pills .show > .nav-link { color: var(--bs=
-nav-pills-link-active-color); background-color: var(--bs-nav-pills-link-ac=
tive-bg); }

.nav-underline { --bs-nav-underline-gap: 1rem; --bs-nav-underline-border-wi=
dth: 0.125rem; --bs-nav-underline-link-active-color: var(--bs-emphasis-colo=
r); gap: var(--bs-nav-underline-gap); }

.nav-underline .nav-link { padding-right: 0px; padding-left: 0px; border-bo=
ttom: var(--bs-nav-underline-border-width) solid transparent; }

.nav-underline .nav-link:focus, .nav-underline .nav-link:hover { border-bot=
tom-color: currentcolor; }

.nav-underline .nav-link.active, .nav-underline .show > .nav-link { font-we=
ight: 700; color: var(--bs-nav-underline-link-active-color); border-bottom-=
color: currentcolor; }

.nav-fill .nav-item, .nav-fill > .nav-link { flex: 1 1 auto; text-align: ce=
nter; }

.nav-justified .nav-item, .nav-justified > .nav-link { flex-basis: 0px; fle=
x-grow: 1; text-align: center; }

.nav-fill .nav-item .nav-link, .nav-justified .nav-item .nav-link { width: =
100%; }

.tab-content > .tab-pane { display: none; }

.tab-content > .active { display: block; }

.navbar { --bs-navbar-padding-x: 0; --bs-navbar-padding-y: 0.5rem; --bs-nav=
bar-color: rgba(var(--bs-emphasis-color-rgb), 0.65); --bs-navbar-hover-colo=
r: rgba(var(--bs-emphasis-color-rgb), 0.8); --bs-navbar-disabled-color: rgb=
a(var(--bs-emphasis-color-rgb), 0.3); --bs-navbar-active-color: rgba(var(--=
bs-emphasis-color-rgb), 1); --bs-navbar-brand-padding-y: 0.3125rem; --bs-na=
vbar-brand-margin-end: 1rem; --bs-navbar-brand-font-size: 1.25rem; --bs-nav=
bar-brand-color: rgba(var(--bs-emphasis-color-rgb), 1); --bs-navbar-brand-h=
over-color: rgba(var(--bs-emphasis-color-rgb), 1); --bs-navbar-nav-link-pad=
ding-x: 0.5rem; --bs-navbar-toggler-padding-y: 0.25rem; --bs-navbar-toggler=
-padding-x: 0.75rem; --bs-navbar-toggler-font-size: 1.25rem; --bs-navbar-to=
ggler-icon-bg: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/20=
00/svg' viewBox=3D'0 0 30 30'%3e%3cpath stroke=3D'rgba%2833, 37, 41, 0.75%2=
9' stroke-linecap=3D'round' stroke-miterlimit=3D'10' stroke-width=3D'2' d=
=3D'M4 7h22M4 15h22M4 23h22'/%3e%3c/svg%3e"); --bs-navbar-toggler-border-co=
lor: rgba(var(--bs-emphasis-color-rgb), 0.15); --bs-navbar-toggler-border-r=
adius: var(--bs-border-radius); --bs-navbar-toggler-focus-width: 0.25rem; -=
-bs-navbar-toggler-transition: box-shadow 0.15s ease-in-out; position: rela=
tive; display: flex; flex-wrap: wrap; align-items: center; justify-content:=
 space-between; padding: var(--bs-navbar-padding-y) var(--bs-navbar-padding=
-x); }

.navbar > .container, .navbar > .container-fluid, .navbar > .container-lg, =
.navbar > .container-md, .navbar > .container-sm, .navbar > .container-xl, =
.navbar > .container-xxl { display: flex; flex-wrap: inherit; align-items: =
center; justify-content: space-between; }

.navbar-brand { padding-top: var(--bs-navbar-brand-padding-y); padding-bott=
om: var(--bs-navbar-brand-padding-y); margin-right: var(--bs-navbar-brand-m=
argin-end); font-size: var(--bs-navbar-brand-font-size); color: var(--bs-na=
vbar-brand-color); text-decoration: none; white-space: nowrap; }

.navbar-brand:focus, .navbar-brand:hover { color: var(--bs-navbar-brand-hov=
er-color); }

.navbar-nav { --bs-nav-link-padding-x: 0; --bs-nav-link-padding-y: 0.5rem; =
--bs-nav-link-font-weight: ; --bs-nav-link-color: var(--bs-navbar-color); -=
-bs-nav-link-hover-color: var(--bs-navbar-hover-color); --bs-nav-link-disab=
led-color: var(--bs-navbar-disabled-color); display: flex; flex-direction: =
column; padding-left: 0px; margin-bottom: 0px; list-style: none; }

.navbar-nav .nav-link.active, .navbar-nav .nav-link.show { color: var(--bs-=
navbar-active-color); }

.navbar-nav .dropdown-menu { position: static; }

.navbar-text { padding-top: 0.5rem; padding-bottom: 0.5rem; color: var(--bs=
-navbar-color); }

.navbar-text a, .navbar-text a:focus, .navbar-text a:hover { color: var(--b=
s-navbar-active-color); }

.navbar-collapse { flex-basis: 100%; flex-grow: 1; align-items: center; }

.navbar-toggler { padding: var(--bs-navbar-toggler-padding-y) var(--bs-navb=
ar-toggler-padding-x); font-size: var(--bs-navbar-toggler-font-size); line-=
height: 1; color: var(--bs-navbar-color); background-color: transparent; bo=
rder: var(--bs-border-width) solid var(--bs-navbar-toggler-border-color); b=
order-radius: var(--bs-navbar-toggler-border-radius); transition: var(--bs-=
navbar-toggler-transition); }

@media (prefers-reduced-motion: reduce) {
  .navbar-toggler { transition: none 0s ease 0s; }
}

.navbar-toggler:hover { text-decoration: none; }

.navbar-toggler:focus { text-decoration: none; outline: 0px; box-shadow: 0 =
0 0 var(--bs-navbar-toggler-focus-width); }

.navbar-toggler-icon { display: inline-block; width: 1.5em; height: 1.5em; =
vertical-align: middle; background-image: var(--bs-navbar-toggler-icon-bg);=
 background-repeat: no-repeat; background-position: center center; backgrou=
nd-size: 100%; }

.navbar-nav-scroll { max-height: var(--bs-scroll-height,75vh); overflow-y: =
auto; }

@media (min-width: 576px) {
  .navbar-expand-sm { flex-wrap: nowrap; justify-content: flex-start; }
  .navbar-expand-sm .navbar-nav { flex-direction: row; }
  .navbar-expand-sm .navbar-nav .dropdown-menu { position: absolute; }
  .navbar-expand-sm .navbar-nav .nav-link { padding-right: var(--bs-navbar-=
nav-link-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }
  .navbar-expand-sm .navbar-nav-scroll { overflow: visible; }
  .navbar-expand-sm .navbar-collapse { display: flex !important; flex-basis=
: auto; }
  .navbar-expand-sm .navbar-toggler { display: none; }
  .navbar-expand-sm .offcanvas { position: static; z-index: auto; flex-grow=
: 1; transition: none 0s ease 0s; width: auto !important; height: auto !imp=
ortant; visibility: visible !important; background-color: transparent !impo=
rtant; border: 0px !important; transform: none !important; }
  .navbar-expand-sm .offcanvas .offcanvas-header { display: none; }
  .navbar-expand-sm .offcanvas .offcanvas-body { display: flex; flex-grow: =
0; padding: 0px; overflow-y: visible; }
}

@media (min-width: 768px) {
  .navbar-expand-md { flex-wrap: nowrap; justify-content: flex-start; }
  .navbar-expand-md .navbar-nav { flex-direction: row; }
  .navbar-expand-md .navbar-nav .dropdown-menu { position: absolute; }
  .navbar-expand-md .navbar-nav .nav-link { padding-right: var(--bs-navbar-=
nav-link-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }
  .navbar-expand-md .navbar-nav-scroll { overflow: visible; }
  .navbar-expand-md .navbar-collapse { display: flex !important; flex-basis=
: auto; }
  .navbar-expand-md .navbar-toggler { display: none; }
  .navbar-expand-md .offcanvas { position: static; z-index: auto; flex-grow=
: 1; transition: none 0s ease 0s; width: auto !important; height: auto !imp=
ortant; visibility: visible !important; background-color: transparent !impo=
rtant; border: 0px !important; transform: none !important; }
  .navbar-expand-md .offcanvas .offcanvas-header { display: none; }
  .navbar-expand-md .offcanvas .offcanvas-body { display: flex; flex-grow: =
0; padding: 0px; overflow-y: visible; }
}

@media (min-width: 992px) {
  .navbar-expand-lg { flex-wrap: nowrap; justify-content: flex-start; }
  .navbar-expand-lg .navbar-nav { flex-direction: row; }
  .navbar-expand-lg .navbar-nav .dropdown-menu { position: absolute; }
  .navbar-expand-lg .navbar-nav .nav-link { padding-right: var(--bs-navbar-=
nav-link-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }
  .navbar-expand-lg .navbar-nav-scroll { overflow: visible; }
  .navbar-expand-lg .navbar-collapse { display: flex !important; flex-basis=
: auto; }
  .navbar-expand-lg .navbar-toggler { display: none; }
  .navbar-expand-lg .offcanvas { position: static; z-index: auto; flex-grow=
: 1; transition: none 0s ease 0s; width: auto !important; height: auto !imp=
ortant; visibility: visible !important; background-color: transparent !impo=
rtant; border: 0px !important; transform: none !important; }
  .navbar-expand-lg .offcanvas .offcanvas-header { display: none; }
  .navbar-expand-lg .offcanvas .offcanvas-body { display: flex; flex-grow: =
0; padding: 0px; overflow-y: visible; }
}

@media (min-width: 1200px) {
  .navbar-expand-xl { flex-wrap: nowrap; justify-content: flex-start; }
  .navbar-expand-xl .navbar-nav { flex-direction: row; }
  .navbar-expand-xl .navbar-nav .dropdown-menu { position: absolute; }
  .navbar-expand-xl .navbar-nav .nav-link { padding-right: var(--bs-navbar-=
nav-link-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }
  .navbar-expand-xl .navbar-nav-scroll { overflow: visible; }
  .navbar-expand-xl .navbar-collapse { display: flex !important; flex-basis=
: auto; }
  .navbar-expand-xl .navbar-toggler { display: none; }
  .navbar-expand-xl .offcanvas { position: static; z-index: auto; flex-grow=
: 1; transition: none 0s ease 0s; width: auto !important; height: auto !imp=
ortant; visibility: visible !important; background-color: transparent !impo=
rtant; border: 0px !important; transform: none !important; }
  .navbar-expand-xl .offcanvas .offcanvas-header { display: none; }
  .navbar-expand-xl .offcanvas .offcanvas-body { display: flex; flex-grow: =
0; padding: 0px; overflow-y: visible; }
}

@media (min-width: 1400px) {
  .navbar-expand-xxl { flex-wrap: nowrap; justify-content: flex-start; }
  .navbar-expand-xxl .navbar-nav { flex-direction: row; }
  .navbar-expand-xxl .navbar-nav .dropdown-menu { position: absolute; }
  .navbar-expand-xxl .navbar-nav .nav-link { padding-right: var(--bs-navbar=
-nav-link-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }
  .navbar-expand-xxl .navbar-nav-scroll { overflow: visible; }
  .navbar-expand-xxl .navbar-collapse { display: flex !important; flex-basi=
s: auto; }
  .navbar-expand-xxl .navbar-toggler { display: none; }
  .navbar-expand-xxl .offcanvas { position: static; z-index: auto; flex-gro=
w: 1; transition: none 0s ease 0s; width: auto !important; height: auto !im=
portant; visibility: visible !important; background-color: transparent !imp=
ortant; border: 0px !important; transform: none !important; }
  .navbar-expand-xxl .offcanvas .offcanvas-header { display: none; }
  .navbar-expand-xxl .offcanvas .offcanvas-body { display: flex; flex-grow:=
 0; padding: 0px; overflow-y: visible; }
}

.navbar-expand { flex-wrap: nowrap; justify-content: flex-start; }

.navbar-expand .navbar-nav { flex-direction: row; }

.navbar-expand .navbar-nav .dropdown-menu { position: absolute; }

.navbar-expand .navbar-nav .nav-link { padding-right: var(--bs-navbar-nav-l=
ink-padding-x); padding-left: var(--bs-navbar-nav-link-padding-x); }

.navbar-expand .navbar-nav-scroll { overflow: visible; }

.navbar-expand .navbar-collapse { display: flex !important; flex-basis: aut=
o; }

.navbar-expand .navbar-toggler { display: none; }

.navbar-expand .offcanvas { position: static; z-index: auto; flex-grow: 1; =
transition: none 0s ease 0s; width: auto !important; height: auto !importan=
t; visibility: visible !important; background-color: transparent !important=
; border: 0px !important; transform: none !important; }

.navbar-expand .offcanvas .offcanvas-header { display: none; }

.navbar-expand .offcanvas .offcanvas-body { display: flex; flex-grow: 0; pa=
dding: 0px; overflow-y: visible; }

.navbar-dark, .navbar[data-bs-theme=3D"dark"] { --bs-navbar-color: rgba(255=
, 255, 255, 0.55); --bs-navbar-hover-color: rgba(255, 255, 255, 0.75); --bs=
-navbar-disabled-color: rgba(255, 255, 255, 0.25); --bs-navbar-active-color=
: #fff; --bs-navbar-brand-color: #fff; --bs-navbar-brand-hover-color: #fff;=
 --bs-navbar-toggler-border-color: rgba(255, 255, 255, 0.1); --bs-navbar-to=
ggler-icon-bg: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/20=
00/svg' viewBox=3D'0 0 30 30'%3e%3cpath stroke=3D'rgba%28255, 255, 255, 0.5=
5%29' stroke-linecap=3D'round' stroke-miterlimit=3D'10' stroke-width=3D'2' =
d=3D'M4 7h22M4 15h22M4 23h22'/%3e%3c/svg%3e"); }

[data-bs-theme=3D"dark"] .navbar-toggler-icon { --bs-navbar-toggler-icon-bg=
: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewB=
ox=3D'0 0 30 30'%3e%3cpath stroke=3D'rgba%28255, 255, 255, 0.55%29' stroke-=
linecap=3D'round' stroke-miterlimit=3D'10' stroke-width=3D'2' d=3D'M4 7h22M=
4 15h22M4 23h22'/%3e%3c/svg%3e"); }

.card { --bs-card-spacer-y: 1rem; --bs-card-spacer-x: 1rem; --bs-card-title=
-spacer-y: 0.5rem; --bs-card-title-color: ; --bs-card-subtitle-color: ; --b=
s-card-border-width: var(--bs-border-width); --bs-card-border-color: var(--=
bs-border-color-translucent); --bs-card-border-radius: var(--bs-border-radi=
us); --bs-card-box-shadow: ; --bs-card-inner-border-radius: calc(var(--bs-b=
order-radius) - (var(--bs-border-width))); --bs-card-cap-padding-y: 0.5rem;=
 --bs-card-cap-padding-x: 1rem; --bs-card-cap-bg: rgba(var(--bs-body-color-=
rgb), 0.03); --bs-card-cap-color: ; --bs-card-height: ; --bs-card-color: ; =
--bs-card-bg: var(--bs-body-bg); --bs-card-img-overlay-padding: 1rem; --bs-=
card-group-margin: 0.75rem; position: relative; display: flex; flex-directi=
on: column; min-width: 0px; height: var(--bs-card-height); color: var(--bs-=
body-color); overflow-wrap: break-word; background-color: var(--bs-card-bg)=
; background-clip: border-box; border: var(--bs-card-border-width) solid va=
r(--bs-card-border-color); border-radius: var(--bs-card-border-radius); }

.card > hr { margin-right: 0px; margin-left: 0px; }

.card > .list-group { border-top: inherit; border-bottom: inherit; }

.card > .list-group:first-child { border-top-width: 0px; border-top-left-ra=
dius: var(--bs-card-inner-border-radius); border-top-right-radius: var(--bs=
-card-inner-border-radius); }

.card > .list-group:last-child { border-bottom-width: 0px; border-bottom-ri=
ght-radius: var(--bs-card-inner-border-radius); border-bottom-left-radius: =
var(--bs-card-inner-border-radius); }

.card > .card-header + .list-group, .card > .list-group + .card-footer { bo=
rder-top: 0px; }

.card-body { flex: 1 1 auto; padding: var(--bs-card-spacer-y) var(--bs-card=
-spacer-x); color: var(--bs-card-color); }

.card-title { margin-bottom: var(--bs-card-title-spacer-y); color: var(--bs=
-card-title-color); }

.card-subtitle { margin-top: calc(-.5 * var(--bs-card-title-spacer-y)); mar=
gin-bottom: 0px; color: var(--bs-card-subtitle-color); }

.card-text:last-child { margin-bottom: 0px; }

.card-link + .card-link { margin-left: var(--bs-card-spacer-x); }

.card-header { padding: var(--bs-card-cap-padding-y) var(--bs-card-cap-padd=
ing-x); margin-bottom: 0px; color: var(--bs-card-cap-color); background-col=
or: var(--bs-card-cap-bg); border-bottom: var(--bs-card-border-width) solid=
 var(--bs-card-border-color); }

.card-header:first-child { border-radius: var(--bs-card-inner-border-radius=
) var(--bs-card-inner-border-radius) 0 0; }

.card-footer { padding: var(--bs-card-cap-padding-y) var(--bs-card-cap-padd=
ing-x); color: var(--bs-card-cap-color); background-color: var(--bs-card-ca=
p-bg); border-top: var(--bs-card-border-width) solid var(--bs-card-border-c=
olor); }

.card-footer:last-child { border-radius: 0 0 var(--bs-card-inner-border-rad=
ius) var(--bs-card-inner-border-radius); }

.card-header-tabs { margin-right: calc(-.5 * var(--bs-card-cap-padding-x));=
 margin-bottom: calc(-1 * var(--bs-card-cap-padding-y)); margin-left: calc(=
-.5 * var(--bs-card-cap-padding-x)); border-bottom: 0px; }

.card-header-tabs .nav-link.active { background-color: var(--bs-card-bg); b=
order-bottom-color: var(--bs-card-bg); }

.card-header-pills { margin-right: calc(-.5 * var(--bs-card-cap-padding-x))=
; margin-left: calc(-.5 * var(--bs-card-cap-padding-x)); }

.card-img-overlay { position: absolute; inset: 0px; padding: var(--bs-card-=
img-overlay-padding); border-radius: var(--bs-card-inner-border-radius); }

.card-img, .card-img-bottom, .card-img-top { width: 100%; }

.card-img, .card-img-top { border-top-left-radius: var(--bs-card-inner-bord=
er-radius); border-top-right-radius: var(--bs-card-inner-border-radius); }

.card-img, .card-img-bottom { border-bottom-right-radius: var(--bs-card-inn=
er-border-radius); border-bottom-left-radius: var(--bs-card-inner-border-ra=
dius); }

.card-group > .card { margin-bottom: var(--bs-card-group-margin); }

@media (min-width: 576px) {
  .card-group { display: flex; flex-flow: wrap; }
  .card-group > .card { flex: 1 0 0%; margin-bottom: 0px; }
  .card-group > .card + .card { margin-left: 0px; border-left: 0px; }
  .card-group > .card:not(:last-child) { border-top-right-radius: 0px; bord=
er-bottom-right-radius: 0px; }
  .card-group > .card:not(:last-child) .card-header, .card-group > .card:no=
t(:last-child) .card-img-top { border-top-right-radius: 0px; }
  .card-group > .card:not(:last-child) .card-footer, .card-group > .card:no=
t(:last-child) .card-img-bottom { border-bottom-right-radius: 0px; }
  .card-group > .card:not(:first-child) { border-top-left-radius: 0px; bord=
er-bottom-left-radius: 0px; }
  .card-group > .card:not(:first-child) .card-header, .card-group > .card:n=
ot(:first-child) .card-img-top { border-top-left-radius: 0px; }
  .card-group > .card:not(:first-child) .card-footer, .card-group > .card:n=
ot(:first-child) .card-img-bottom { border-bottom-left-radius: 0px; }
}

.accordion { --bs-accordion-color: var(--bs-body-color); --bs-accordion-bg:=
 var(--bs-body-bg); --bs-accordion-transition: color 0.15s ease-in-out,back=
ground-color 0.15s ease-in-out,border-color 0.15s ease-in-out,box-shadow 0.=
15s ease-in-out,border-radius 0.15s ease; --bs-accordion-border-color: var(=
--bs-border-color); --bs-accordion-border-width: var(--bs-border-width); --=
bs-accordion-border-radius: var(--bs-border-radius); --bs-accordion-inner-b=
order-radius: calc(var(--bs-border-radius) - (var(--bs-border-width))); --b=
s-accordion-btn-padding-x: 1.25rem; --bs-accordion-btn-padding-y: 1rem; --b=
s-accordion-btn-color: var(--bs-body-color); --bs-accordion-btn-bg: var(--b=
s-accordion-bg); --bs-accordion-btn-icon: url("data:image/svg+xml,%3csvg xm=
lns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 16' fill=3D'%23212529'=
%3e%3cpath fill-rule=3D'evenodd' d=3D'M1.646 4.646a.5.5 0 0 1 .708 0L8 10.2=
93l5.646-5.647a.5.5 0 0 1 .708.708l-6 6a.5.5 0 0 1-.708 0l-6-6a.5.5 0 0 1 0=
-.708z'/%3e%3c/svg%3e"); --bs-accordion-btn-icon-width: 1.25rem; --bs-accor=
dion-btn-icon-transform: rotate(-180deg); --bs-accordion-btn-icon-transitio=
n: transform 0.2s ease-in-out; --bs-accordion-btn-active-icon: url("data:im=
age/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 1=
6' fill=3D'%23052c65'%3e%3cpath fill-rule=3D'evenodd' d=3D'M1.646 4.646a.5.=
5 0 0 1 .708 0L8 10.293l5.646-5.647a.5.5 0 0 1 .708.708l-6 6a.5.5 0 0 1-.70=
8 0l-6-6a.5.5 0 0 1 0-.708z'/%3e%3c/svg%3e"); --bs-accordion-btn-focus-bord=
er-color: #86b7fe; --bs-accordion-btn-focus-box-shadow: 0 0 0 0.25rem rgba(=
13, 110, 253, 0.25); --bs-accordion-body-padding-x: 1.25rem; --bs-accordion=
-body-padding-y: 1rem; --bs-accordion-active-color: var(--bs-primary-text-e=
mphasis); --bs-accordion-active-bg: var(--bs-primary-bg-subtle); }

.accordion-button { position: relative; display: flex; align-items: center;=
 width: 100%; padding: var(--bs-accordion-btn-padding-y) var(--bs-accordion=
-btn-padding-x); font-size: 1rem; color: var(--bs-accordion-btn-color); tex=
t-align: left; background-color: var(--bs-accordion-btn-bg); border: 0px; b=
order-radius: 0px; overflow-anchor: none; transition: var(--bs-accordion-tr=
ansition); }

@media (prefers-reduced-motion: reduce) {
  .accordion-button { transition: none 0s ease 0s; }
}

.accordion-button:not(.collapsed) { color: var(--bs-accordion-active-color)=
; background-color: var(--bs-accordion-active-bg); box-shadow: inset 0 calc=
(-1 * var(--bs-accordion-border-width)) 0 var(--bs-accordion-border-color);=
 }

.accordion-button:not(.collapsed)::after { background-image: var(--bs-accor=
dion-btn-active-icon); transform: var(--bs-accordion-btn-icon-transform); }

.accordion-button::after { flex-shrink: 0; width: var(--bs-accordion-btn-ic=
on-width); height: var(--bs-accordion-btn-icon-width); margin-left: auto; c=
ontent: ""; background-image: var(--bs-accordion-btn-icon); background-repe=
at: no-repeat; background-size: var(--bs-accordion-btn-icon-width); transit=
ion: var(--bs-accordion-btn-icon-transition); }

@media (prefers-reduced-motion: reduce) {
  .accordion-button::after { transition: none 0s ease 0s; }
}

.accordion-button:hover { z-index: 2; }

.accordion-button:focus { z-index: 3; border-color: var(--bs-accordion-btn-=
focus-border-color); outline: 0px; box-shadow: var(--bs-accordion-btn-focus=
-box-shadow); }

.accordion-header { margin-bottom: 0px; }

.accordion-item { color: var(--bs-accordion-color); background-color: var(-=
-bs-accordion-bg); border: var(--bs-accordion-border-width) solid var(--bs-=
accordion-border-color); }

.accordion-item:first-of-type { border-top-left-radius: var(--bs-accordion-=
border-radius); border-top-right-radius: var(--bs-accordion-border-radius);=
 }

.accordion-item:first-of-type .accordion-button { border-top-left-radius: v=
ar(--bs-accordion-inner-border-radius); border-top-right-radius: var(--bs-a=
ccordion-inner-border-radius); }

.accordion-item:not(:first-of-type) { border-top: 0px; }

.accordion-item:last-of-type { border-bottom-right-radius: var(--bs-accordi=
on-border-radius); border-bottom-left-radius: var(--bs-accordion-border-rad=
ius); }

.accordion-item:last-of-type .accordion-button.collapsed { border-bottom-ri=
ght-radius: var(--bs-accordion-inner-border-radius); border-bottom-left-rad=
ius: var(--bs-accordion-inner-border-radius); }

.accordion-item:last-of-type .accordion-collapse { border-bottom-right-radi=
us: var(--bs-accordion-border-radius); border-bottom-left-radius: var(--bs-=
accordion-border-radius); }

.accordion-body { padding: var(--bs-accordion-body-padding-y) var(--bs-acco=
rdion-body-padding-x); }

.accordion-flush .accordion-collapse { border-width: 0px; }

.accordion-flush .accordion-item { border-right: 0px; border-left: 0px; bor=
der-radius: 0px; }

.accordion-flush .accordion-item:first-child { border-top: 0px; }

.accordion-flush .accordion-item:last-child { border-bottom: 0px; }

.accordion-flush .accordion-item .accordion-button, .accordion-flush .accor=
dion-item .accordion-button.collapsed { border-radius: 0px; }

[data-bs-theme=3D"dark"] .accordion-button::after { --bs-accordion-btn-icon=
: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewB=
ox=3D'0 0 16 16' fill=3D'%236ea8fe'%3e%3cpath fill-rule=3D'evenodd' d=3D'M1=
.646 4.646a.5.5 0 0 1 .708 0L8 10.293l5.646-5.647a.5.5 0 0 1 .708.708l-6 6a=
.5.5 0 0 1-.708 0l-6-6a.5.5 0 0 1 0-.708z'/%3e%3c/svg%3e"); --bs-accordion-=
btn-active-icon: url("data:image/svg+xml,%3csvg xmlns=3D'http://www.w3.org/=
2000/svg' viewBox=3D'0 0 16 16' fill=3D'%236ea8fe'%3e%3cpath fill-rule=3D'e=
venodd' d=3D'M1.646 4.646a.5.5 0 0 1 .708 0L8 10.293l5.646-5.647a.5.5 0 0 1=
 .708.708l-6 6a.5.5 0 0 1-.708 0l-6-6a.5.5 0 0 1 0-.708z'/%3e%3c/svg%3e"); =
}

.breadcrumb { --bs-breadcrumb-padding-x: 0; --bs-breadcrumb-padding-y: 0; -=
-bs-breadcrumb-margin-bottom: 1rem; --bs-breadcrumb-bg: ; --bs-breadcrumb-b=
order-radius: ; --bs-breadcrumb-divider-color: var(--bs-secondary-color); -=
-bs-breadcrumb-item-padding-x: 0.5rem; --bs-breadcrumb-item-active-color: v=
ar(--bs-secondary-color); display: flex; flex-wrap: wrap; padding: var(--bs=
-breadcrumb-padding-y) var(--bs-breadcrumb-padding-x); margin-bottom: var(-=
-bs-breadcrumb-margin-bottom); font-size: var(--bs-breadcrumb-font-size); l=
ist-style: none; background-color: var(--bs-breadcrumb-bg); border-radius: =
var(--bs-breadcrumb-border-radius); }

.breadcrumb-item + .breadcrumb-item { padding-left: var(--bs-breadcrumb-ite=
m-padding-x); }

.breadcrumb-item + .breadcrumb-item::before { float: left; padding-right: v=
ar(--bs-breadcrumb-item-padding-x); color: var(--bs-breadcrumb-divider-colo=
r); content: var(--bs-breadcrumb-divider, "/"); }

.breadcrumb-item.active { color: var(--bs-breadcrumb-item-active-color); }

.pagination { --bs-pagination-padding-x: 0.75rem; --bs-pagination-padding-y=
: 0.375rem; --bs-pagination-font-size: 1rem; --bs-pagination-color: var(--b=
s-link-color); --bs-pagination-bg: var(--bs-body-bg); --bs-pagination-borde=
r-width: var(--bs-border-width); --bs-pagination-border-color: var(--bs-bor=
der-color); --bs-pagination-border-radius: var(--bs-border-radius); --bs-pa=
gination-hover-color: var(--bs-link-hover-color); --bs-pagination-hover-bg:=
 var(--bs-tertiary-bg); --bs-pagination-hover-border-color: var(--bs-border=
-color); --bs-pagination-focus-color: var(--bs-link-hover-color); --bs-pagi=
nation-focus-bg: var(--bs-secondary-bg); --bs-pagination-focus-box-shadow: =
0 0 0 0.25rem rgba(13, 110, 253, 0.25); --bs-pagination-active-color: #fff;=
 --bs-pagination-active-bg: #0d6efd; --bs-pagination-active-border-color: #=
0d6efd; --bs-pagination-disabled-color: var(--bs-secondary-color); --bs-pag=
ination-disabled-bg: var(--bs-secondary-bg); --bs-pagination-disabled-borde=
r-color: var(--bs-border-color); display: flex; padding-left: 0px; list-sty=
le: none; }

.page-link { position: relative; display: block; padding: var(--bs-paginati=
on-padding-y) var(--bs-pagination-padding-x); font-size: var(--bs-paginatio=
n-font-size); color: var(--bs-pagination-color); text-decoration: none; bac=
kground-color: var(--bs-pagination-bg); border: var(--bs-pagination-border-=
width) solid var(--bs-pagination-border-color); transition: color 0.15s eas=
e-in-out 0s, background-color 0.15s ease-in-out 0s, border-color 0.15s ease=
-in-out 0s, box-shadow 0.15s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .page-link { transition: none 0s ease 0s; }
}

.page-link:hover { z-index: 2; color: var(--bs-pagination-hover-color); bac=
kground-color: var(--bs-pagination-hover-bg); border-color: var(--bs-pagina=
tion-hover-border-color); }

.page-link:focus { z-index: 3; color: var(--bs-pagination-focus-color); bac=
kground-color: var(--bs-pagination-focus-bg); outline: 0px; box-shadow: var=
(--bs-pagination-focus-box-shadow); }

.active > .page-link, .page-link.active { z-index: 3; color: var(--bs-pagin=
ation-active-color); background-color: var(--bs-pagination-active-bg); bord=
er-color: var(--bs-pagination-active-border-color); }

.disabled > .page-link, .page-link.disabled { color: var(--bs-pagination-di=
sabled-color); pointer-events: none; background-color: var(--bs-pagination-=
disabled-bg); border-color: var(--bs-pagination-disabled-border-color); }

.page-item:not(:first-child) .page-link { margin-left: calc(var(--bs-border=
-width) * -1); }

.page-item:first-child .page-link { border-top-left-radius: var(--bs-pagina=
tion-border-radius); border-bottom-left-radius: var(--bs-pagination-border-=
radius); }

.page-item:last-child .page-link { border-top-right-radius: var(--bs-pagina=
tion-border-radius); border-bottom-right-radius: var(--bs-pagination-border=
-radius); }

.pagination-lg { --bs-pagination-padding-x: 1.5rem; --bs-pagination-padding=
-y: 0.75rem; --bs-pagination-font-size: 1.25rem; --bs-pagination-border-rad=
ius: var(--bs-border-radius-lg); }

.pagination-sm { --bs-pagination-padding-x: 0.5rem; --bs-pagination-padding=
-y: 0.25rem; --bs-pagination-font-size: 0.875rem; --bs-pagination-border-ra=
dius: var(--bs-border-radius-sm); }

.badge { --bs-badge-padding-x: 0.65em; --bs-badge-padding-y: 0.35em; --bs-b=
adge-font-size: 0.75em; --bs-badge-font-weight: 700; --bs-badge-color: #fff=
; --bs-badge-border-radius: var(--bs-border-radius); display: inline-block;=
 padding: var(--bs-badge-padding-y) var(--bs-badge-padding-x); font-size: v=
ar(--bs-badge-font-size); font-weight: var(--bs-badge-font-weight); line-he=
ight: 1; color: var(--bs-badge-color); text-align: center; white-space: now=
rap; vertical-align: baseline; border-radius: var(--bs-badge-border-radius)=
; }

.badge:empty { display: none; }

.btn .badge { position: relative; top: -1px; }

.alert { --bs-alert-bg: transparent; --bs-alert-padding-x: 1rem; --bs-alert=
-padding-y: 1rem; --bs-alert-margin-bottom: 1rem; --bs-alert-color: inherit=
; --bs-alert-border-color: transparent; --bs-alert-border: var(--bs-border-=
width) solid var(--bs-alert-border-color); --bs-alert-border-radius: var(--=
bs-border-radius); --bs-alert-link-color: inherit; position: relative; padd=
ing: var(--bs-alert-padding-y) var(--bs-alert-padding-x); margin-bottom: va=
r(--bs-alert-margin-bottom); color: var(--bs-alert-color); background-color=
: var(--bs-alert-bg); border: var(--bs-alert-border); border-radius: var(--=
bs-alert-border-radius); }

.alert-heading { color: inherit; }

.alert-link { font-weight: 700; color: var(--bs-alert-link-color); }

.alert-dismissible { padding-right: 3rem; }

.alert-dismissible .btn-close { position: absolute; top: 0px; right: 0px; z=
-index: 2; padding: 1.25rem 1rem; }

.alert-primary { --bs-alert-color: var(--bs-primary-text-emphasis); --bs-al=
ert-bg: var(--bs-primary-bg-subtle); --bs-alert-border-color: var(--bs-prim=
ary-border-subtle); --bs-alert-link-color: var(--bs-primary-text-emphasis);=
 }

.alert-secondary { --bs-alert-color: var(--bs-secondary-text-emphasis); --b=
s-alert-bg: var(--bs-secondary-bg-subtle); --bs-alert-border-color: var(--b=
s-secondary-border-subtle); --bs-alert-link-color: var(--bs-secondary-text-=
emphasis); }

.alert-success { --bs-alert-color: var(--bs-success-text-emphasis); --bs-al=
ert-bg: var(--bs-success-bg-subtle); --bs-alert-border-color: var(--bs-succ=
ess-border-subtle); --bs-alert-link-color: var(--bs-success-text-emphasis);=
 }

.alert-info { --bs-alert-color: var(--bs-info-text-emphasis); --bs-alert-bg=
: var(--bs-info-bg-subtle); --bs-alert-border-color: var(--bs-info-border-s=
ubtle); --bs-alert-link-color: var(--bs-info-text-emphasis); }

.alert-warning { --bs-alert-color: var(--bs-warning-text-emphasis); --bs-al=
ert-bg: var(--bs-warning-bg-subtle); --bs-alert-border-color: var(--bs-warn=
ing-border-subtle); --bs-alert-link-color: var(--bs-warning-text-emphasis);=
 }

.alert-danger { --bs-alert-color: var(--bs-danger-text-emphasis); --bs-aler=
t-bg: var(--bs-danger-bg-subtle); --bs-alert-border-color: var(--bs-danger-=
border-subtle); --bs-alert-link-color: var(--bs-danger-text-emphasis); }

.alert-light { --bs-alert-color: var(--bs-light-text-emphasis); --bs-alert-=
bg: var(--bs-light-bg-subtle); --bs-alert-border-color: var(--bs-light-bord=
er-subtle); --bs-alert-link-color: var(--bs-light-text-emphasis); }

.alert-dark { --bs-alert-color: var(--bs-dark-text-emphasis); --bs-alert-bg=
: var(--bs-dark-bg-subtle); --bs-alert-border-color: var(--bs-dark-border-s=
ubtle); --bs-alert-link-color: var(--bs-dark-text-emphasis); }

@keyframes progress-bar-stripes {=20
  0% { background-position-x: 1rem; }
}

.progress, .progress-stacked { --bs-progress-height: 1rem; --bs-progress-fo=
nt-size: 0.75rem; --bs-progress-bg: var(--bs-secondary-bg); --bs-progress-b=
order-radius: var(--bs-border-radius); --bs-progress-box-shadow: var(--bs-b=
ox-shadow-inset); --bs-progress-bar-color: #fff; --bs-progress-bar-bg: #0d6=
efd; --bs-progress-bar-transition: width 0.6s ease; display: flex; height: =
var(--bs-progress-height); overflow: hidden; font-size: var(--bs-progress-f=
ont-size); background-color: var(--bs-progress-bg); border-radius: var(--bs=
-progress-border-radius); }

.progress-bar { display: flex; flex-direction: column; justify-content: cen=
ter; overflow: hidden; color: var(--bs-progress-bar-color); text-align: cen=
ter; white-space: nowrap; background-color: var(--bs-progress-bar-bg); tran=
sition: var(--bs-progress-bar-transition); }

@media (prefers-reduced-motion: reduce) {
  .progress-bar { transition: none 0s ease 0s; }
}

.progress-bar-striped { background-image: linear-gradient(45deg, rgba(255, =
255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, =
0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent); ba=
ckground-size: var(--bs-progress-height) var(--bs-progress-height); }

.progress-stacked > .progress { overflow: visible; }

.progress-stacked > .progress > .progress-bar { width: 100%; }

.progress-bar-animated { animation: 1s linear 0s infinite normal none runni=
ng progress-bar-stripes; }

@media (prefers-reduced-motion: reduce) {
  .progress-bar-animated { animation: auto ease 0s 1 normal none running no=
ne; }
}

.list-group { --bs-list-group-color: var(--bs-body-color); --bs-list-group-=
bg: var(--bs-body-bg); --bs-list-group-border-color: var(--bs-border-color)=
; --bs-list-group-border-width: var(--bs-border-width); --bs-list-group-bor=
der-radius: var(--bs-border-radius); --bs-list-group-item-padding-x: 1rem; =
--bs-list-group-item-padding-y: 0.5rem; --bs-list-group-action-color: var(-=
-bs-secondary-color); --bs-list-group-action-hover-color: var(--bs-emphasis=
-color); --bs-list-group-action-hover-bg: var(--bs-tertiary-bg); --bs-list-=
group-action-active-color: var(--bs-body-color); --bs-list-group-action-act=
ive-bg: var(--bs-secondary-bg); --bs-list-group-disabled-color: var(--bs-se=
condary-color); --bs-list-group-disabled-bg: var(--bs-body-bg); --bs-list-g=
roup-active-color: #fff; --bs-list-group-active-bg: #0d6efd; --bs-list-grou=
p-active-border-color: #0d6efd; display: flex; flex-direction: column; padd=
ing-left: 0px; margin-bottom: 0px; border-radius: var(--bs-list-group-borde=
r-radius); }

.list-group-numbered { list-style-type: none; counter-reset: section 0; }

.list-group-numbered > .list-group-item::before { content: counters(section=
, ".") ". "; counter-increment: section 1; }

.list-group-item-action { width: 100%; color: var(--bs-list-group-action-co=
lor); text-align: inherit; }

.list-group-item-action:focus, .list-group-item-action:hover { z-index: 1; =
color: var(--bs-list-group-action-hover-color); text-decoration: none; back=
ground-color: var(--bs-list-group-action-hover-bg); }

.list-group-item-action:active { color: var(--bs-list-group-action-active-c=
olor); background-color: var(--bs-list-group-action-active-bg); }

.list-group-item { position: relative; display: block; padding: var(--bs-li=
st-group-item-padding-y) var(--bs-list-group-item-padding-x); color: var(--=
bs-list-group-color); text-decoration: none; background-color: var(--bs-lis=
t-group-bg); border: var(--bs-list-group-border-width) solid var(--bs-list-=
group-border-color); }

.list-group-item:first-child { border-top-left-radius: inherit; border-top-=
right-radius: inherit; }

.list-group-item:last-child { border-bottom-right-radius: inherit; border-b=
ottom-left-radius: inherit; }

.list-group-item.disabled, .list-group-item:disabled { color: var(--bs-list=
-group-disabled-color); pointer-events: none; background-color: var(--bs-li=
st-group-disabled-bg); }

.list-group-item.active { z-index: 2; color: var(--bs-list-group-active-col=
or); background-color: var(--bs-list-group-active-bg); border-color: var(--=
bs-list-group-active-border-color); }

.list-group-item + .list-group-item { border-top-width: 0px; }

.list-group-item + .list-group-item.active { margin-top: calc(-1 * var(--bs=
-list-group-border-width)); border-top-width: var(--bs-list-group-border-wi=
dth); }

.list-group-horizontal { flex-direction: row; }

.list-group-horizontal > .list-group-item:first-child:not(:last-child) { bo=
rder-bottom-left-radius: var(--bs-list-group-border-radius); border-top-rig=
ht-radius: 0px; }

.list-group-horizontal > .list-group-item:last-child:not(:first-child) { bo=
rder-top-right-radius: var(--bs-list-group-border-radius); border-bottom-le=
ft-radius: 0px; }

.list-group-horizontal > .list-group-item.active { margin-top: 0px; }

.list-group-horizontal > .list-group-item + .list-group-item { border-top-w=
idth: var(--bs-list-group-border-width); border-left-width: 0px; }

.list-group-horizontal > .list-group-item + .list-group-item.active { margi=
n-left: calc(-1 * var(--bs-list-group-border-width)); border-left-width: va=
r(--bs-list-group-border-width); }

@media (min-width: 576px) {
  .list-group-horizontal-sm { flex-direction: row; }
  .list-group-horizontal-sm > .list-group-item:first-child:not(:last-child)=
 { border-bottom-left-radius: var(--bs-list-group-border-radius); border-to=
p-right-radius: 0px; }
  .list-group-horizontal-sm > .list-group-item:last-child:not(:first-child)=
 { border-top-right-radius: var(--bs-list-group-border-radius); border-bott=
om-left-radius: 0px; }
  .list-group-horizontal-sm > .list-group-item.active { margin-top: 0px; }
  .list-group-horizontal-sm > .list-group-item + .list-group-item { border-=
top-width: var(--bs-list-group-border-width); border-left-width: 0px; }
  .list-group-horizontal-sm > .list-group-item + .list-group-item.active { =
margin-left: calc(-1 * var(--bs-list-group-border-width)); border-left-widt=
h: var(--bs-list-group-border-width); }
}

@media (min-width: 768px) {
  .list-group-horizontal-md { flex-direction: row; }
  .list-group-horizontal-md > .list-group-item:first-child:not(:last-child)=
 { border-bottom-left-radius: var(--bs-list-group-border-radius); border-to=
p-right-radius: 0px; }
  .list-group-horizontal-md > .list-group-item:last-child:not(:first-child)=
 { border-top-right-radius: var(--bs-list-group-border-radius); border-bott=
om-left-radius: 0px; }
  .list-group-horizontal-md > .list-group-item.active { margin-top: 0px; }
  .list-group-horizontal-md > .list-group-item + .list-group-item { border-=
top-width: var(--bs-list-group-border-width); border-left-width: 0px; }
  .list-group-horizontal-md > .list-group-item + .list-group-item.active { =
margin-left: calc(-1 * var(--bs-list-group-border-width)); border-left-widt=
h: var(--bs-list-group-border-width); }
}

@media (min-width: 992px) {
  .list-group-horizontal-lg { flex-direction: row; }
  .list-group-horizontal-lg > .list-group-item:first-child:not(:last-child)=
 { border-bottom-left-radius: var(--bs-list-group-border-radius); border-to=
p-right-radius: 0px; }
  .list-group-horizontal-lg > .list-group-item:last-child:not(:first-child)=
 { border-top-right-radius: var(--bs-list-group-border-radius); border-bott=
om-left-radius: 0px; }
  .list-group-horizontal-lg > .list-group-item.active { margin-top: 0px; }
  .list-group-horizontal-lg > .list-group-item + .list-group-item { border-=
top-width: var(--bs-list-group-border-width); border-left-width: 0px; }
  .list-group-horizontal-lg > .list-group-item + .list-group-item.active { =
margin-left: calc(-1 * var(--bs-list-group-border-width)); border-left-widt=
h: var(--bs-list-group-border-width); }
}

@media (min-width: 1200px) {
  .list-group-horizontal-xl { flex-direction: row; }
  .list-group-horizontal-xl > .list-group-item:first-child:not(:last-child)=
 { border-bottom-left-radius: var(--bs-list-group-border-radius); border-to=
p-right-radius: 0px; }
  .list-group-horizontal-xl > .list-group-item:last-child:not(:first-child)=
 { border-top-right-radius: var(--bs-list-group-border-radius); border-bott=
om-left-radius: 0px; }
  .list-group-horizontal-xl > .list-group-item.active { margin-top: 0px; }
  .list-group-horizontal-xl > .list-group-item + .list-group-item { border-=
top-width: var(--bs-list-group-border-width); border-left-width: 0px; }
  .list-group-horizontal-xl > .list-group-item + .list-group-item.active { =
margin-left: calc(-1 * var(--bs-list-group-border-width)); border-left-widt=
h: var(--bs-list-group-border-width); }
}

@media (min-width: 1400px) {
  .list-group-horizontal-xxl { flex-direction: row; }
  .list-group-horizontal-xxl > .list-group-item:first-child:not(:last-child=
) { border-bottom-left-radius: var(--bs-list-group-border-radius); border-t=
op-right-radius: 0px; }
  .list-group-horizontal-xxl > .list-group-item:last-child:not(:first-child=
) { border-top-right-radius: var(--bs-list-group-border-radius); border-bot=
tom-left-radius: 0px; }
  .list-group-horizontal-xxl > .list-group-item.active { margin-top: 0px; }
  .list-group-horizontal-xxl > .list-group-item + .list-group-item { border=
-top-width: var(--bs-list-group-border-width); border-left-width: 0px; }
  .list-group-horizontal-xxl > .list-group-item + .list-group-item.active {=
 margin-left: calc(-1 * var(--bs-list-group-border-width)); border-left-wid=
th: var(--bs-list-group-border-width); }
}

.list-group-flush { border-radius: 0px; }

.list-group-flush > .list-group-item { border-width: 0 0 var(--bs-list-grou=
p-border-width); }

.list-group-flush > .list-group-item:last-child { border-bottom-width: 0px;=
 }

.list-group-item-primary { --bs-list-group-color: var(--bs-primary-text-emp=
hasis); --bs-list-group-bg: var(--bs-primary-bg-subtle); --bs-list-group-bo=
rder-color: var(--bs-primary-border-subtle); --bs-list-group-action-hover-c=
olor: var(--bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-p=
rimary-border-subtle); --bs-list-group-action-active-color: var(--bs-emphas=
is-color); --bs-list-group-action-active-bg: var(--bs-primary-border-subtle=
); --bs-list-group-active-color: var(--bs-primary-bg-subtle); --bs-list-gro=
up-active-bg: var(--bs-primary-text-emphasis); --bs-list-group-active-borde=
r-color: var(--bs-primary-text-emphasis); }

.list-group-item-secondary { --bs-list-group-color: var(--bs-secondary-text=
-emphasis); --bs-list-group-bg: var(--bs-secondary-bg-subtle); --bs-list-gr=
oup-border-color: var(--bs-secondary-border-subtle); --bs-list-group-action=
-hover-color: var(--bs-emphasis-color); --bs-list-group-action-hover-bg: va=
r(--bs-secondary-border-subtle); --bs-list-group-action-active-color: var(-=
-bs-emphasis-color); --bs-list-group-action-active-bg: var(--bs-secondary-b=
order-subtle); --bs-list-group-active-color: var(--bs-secondary-bg-subtle);=
 --bs-list-group-active-bg: var(--bs-secondary-text-emphasis); --bs-list-gr=
oup-active-border-color: var(--bs-secondary-text-emphasis); }

.list-group-item-success { --bs-list-group-color: var(--bs-success-text-emp=
hasis); --bs-list-group-bg: var(--bs-success-bg-subtle); --bs-list-group-bo=
rder-color: var(--bs-success-border-subtle); --bs-list-group-action-hover-c=
olor: var(--bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-s=
uccess-border-subtle); --bs-list-group-action-active-color: var(--bs-emphas=
is-color); --bs-list-group-action-active-bg: var(--bs-success-border-subtle=
); --bs-list-group-active-color: var(--bs-success-bg-subtle); --bs-list-gro=
up-active-bg: var(--bs-success-text-emphasis); --bs-list-group-active-borde=
r-color: var(--bs-success-text-emphasis); }

.list-group-item-info { --bs-list-group-color: var(--bs-info-text-emphasis)=
; --bs-list-group-bg: var(--bs-info-bg-subtle); --bs-list-group-border-colo=
r: var(--bs-info-border-subtle); --bs-list-group-action-hover-color: var(--=
bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-info-border-s=
ubtle); --bs-list-group-action-active-color: var(--bs-emphasis-color); --bs=
-list-group-action-active-bg: var(--bs-info-border-subtle); --bs-list-group=
-active-color: var(--bs-info-bg-subtle); --bs-list-group-active-bg: var(--b=
s-info-text-emphasis); --bs-list-group-active-border-color: var(--bs-info-t=
ext-emphasis); }

.list-group-item-warning { --bs-list-group-color: var(--bs-warning-text-emp=
hasis); --bs-list-group-bg: var(--bs-warning-bg-subtle); --bs-list-group-bo=
rder-color: var(--bs-warning-border-subtle); --bs-list-group-action-hover-c=
olor: var(--bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-w=
arning-border-subtle); --bs-list-group-action-active-color: var(--bs-emphas=
is-color); --bs-list-group-action-active-bg: var(--bs-warning-border-subtle=
); --bs-list-group-active-color: var(--bs-warning-bg-subtle); --bs-list-gro=
up-active-bg: var(--bs-warning-text-emphasis); --bs-list-group-active-borde=
r-color: var(--bs-warning-text-emphasis); }

.list-group-item-danger { --bs-list-group-color: var(--bs-danger-text-empha=
sis); --bs-list-group-bg: var(--bs-danger-bg-subtle); --bs-list-group-borde=
r-color: var(--bs-danger-border-subtle); --bs-list-group-action-hover-color=
: var(--bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-dange=
r-border-subtle); --bs-list-group-action-active-color: var(--bs-emphasis-co=
lor); --bs-list-group-action-active-bg: var(--bs-danger-border-subtle); --b=
s-list-group-active-color: var(--bs-danger-bg-subtle); --bs-list-group-acti=
ve-bg: var(--bs-danger-text-emphasis); --bs-list-group-active-border-color:=
 var(--bs-danger-text-emphasis); }

.list-group-item-light { --bs-list-group-color: var(--bs-light-text-emphasi=
s); --bs-list-group-bg: var(--bs-light-bg-subtle); --bs-list-group-border-c=
olor: var(--bs-light-border-subtle); --bs-list-group-action-hover-color: va=
r(--bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-light-bor=
der-subtle); --bs-list-group-action-active-color: var(--bs-emphasis-color);=
 --bs-list-group-action-active-bg: var(--bs-light-border-subtle); --bs-list=
-group-active-color: var(--bs-light-bg-subtle); --bs-list-group-active-bg: =
var(--bs-light-text-emphasis); --bs-list-group-active-border-color: var(--b=
s-light-text-emphasis); }

.list-group-item-dark { --bs-list-group-color: var(--bs-dark-text-emphasis)=
; --bs-list-group-bg: var(--bs-dark-bg-subtle); --bs-list-group-border-colo=
r: var(--bs-dark-border-subtle); --bs-list-group-action-hover-color: var(--=
bs-emphasis-color); --bs-list-group-action-hover-bg: var(--bs-dark-border-s=
ubtle); --bs-list-group-action-active-color: var(--bs-emphasis-color); --bs=
-list-group-action-active-bg: var(--bs-dark-border-subtle); --bs-list-group=
-active-color: var(--bs-dark-bg-subtle); --bs-list-group-active-bg: var(--b=
s-dark-text-emphasis); --bs-list-group-active-border-color: var(--bs-dark-t=
ext-emphasis); }

.btn-close { --bs-btn-close-color: #000; --bs-btn-close-bg: url("data:image=
/svg+xml,%3csvg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 16' =
fill=3D'%23000'%3e%3cpath d=3D'M.293.293a1 1 0 0 1 1.414 0L8 6.586 14.293.2=
93a1 1 0 1 1 1.414 1.414L9.414 8l6.293 6.293a1 1 0 0 1-1.414 1.414L8 9.414l=
-6.293 6.293a1 1 0 0 1-1.414-1.414L6.586 8 .293 1.707a1 1 0 0 1 0-1.414z'/%=
3e%3c/svg%3e"); --bs-btn-close-opacity: 0.5; --bs-btn-close-hover-opacity: =
0.75; --bs-btn-close-focus-shadow: 0 0 0 0.25rem rgba(13, 110, 253, 0.25); =
--bs-btn-close-focus-opacity: 1; --bs-btn-close-disabled-opacity: 0.25; --b=
s-btn-close-white-filter: invert(1) grayscale(100%) brightness(200%); box-s=
izing: content-box; width: 1em; height: 1em; padding: 0.25em; color: var(--=
bs-btn-close-color); background: transparent var(--bs-btn-close-bg) center/=
1em auto no-repeat; border: 0px; border-radius: 0.375rem; opacity: var(--bs=
-btn-close-opacity); }

.btn-close:hover { color: var(--bs-btn-close-color); text-decoration: none;=
 opacity: var(--bs-btn-close-hover-opacity); }

.btn-close:focus { outline: 0px; box-shadow: var(--bs-btn-close-focus-shado=
w); opacity: var(--bs-btn-close-focus-opacity); }

.btn-close.disabled, .btn-close:disabled { pointer-events: none; user-selec=
t: none; opacity: var(--bs-btn-close-disabled-opacity); }

.btn-close-white { filter: var(--bs-btn-close-white-filter); }

[data-bs-theme=3D"dark"] .btn-close { filter: var(--bs-btn-close-white-filt=
er); }

.toast { --bs-toast-zindex: 1090; --bs-toast-padding-x: 0.75rem; --bs-toast=
-padding-y: 0.5rem; --bs-toast-spacing: 1.5rem; --bs-toast-max-width: 350px=
; --bs-toast-font-size: 0.875rem; --bs-toast-color: ; --bs-toast-bg: rgba(v=
ar(--bs-body-bg-rgb), 0.85); --bs-toast-border-width: var(--bs-border-width=
); --bs-toast-border-color: var(--bs-border-color-translucent); --bs-toast-=
border-radius: var(--bs-border-radius); --bs-toast-box-shadow: var(--bs-box=
-shadow); --bs-toast-header-color: var(--bs-secondary-color); --bs-toast-he=
ader-bg: rgba(var(--bs-body-bg-rgb), 0.85); --bs-toast-header-border-color:=
 var(--bs-border-color-translucent); width: var(--bs-toast-max-width); max-=
width: 100%; font-size: var(--bs-toast-font-size); color: var(--bs-toast-co=
lor); pointer-events: auto; background-color: var(--bs-toast-bg); backgroun=
d-clip: padding-box; border: var(--bs-toast-border-width) solid var(--bs-to=
ast-border-color); box-shadow: var(--bs-toast-box-shadow); border-radius: v=
ar(--bs-toast-border-radius); }

.toast.showing { opacity: 0; }

.toast:not(.show) { display: none; }

.toast-container { --bs-toast-zindex: 1090; position: absolute; z-index: va=
r(--bs-toast-zindex); width: max-content; max-width: 100%; pointer-events: =
none; }

.toast-container > :not(:last-child) { margin-bottom: var(--bs-toast-spacin=
g); }

.toast-header { display: flex; align-items: center; padding: var(--bs-toast=
-padding-y) var(--bs-toast-padding-x); color: var(--bs-toast-header-color);=
 background-color: var(--bs-toast-header-bg); background-clip: padding-box;=
 border-bottom: var(--bs-toast-border-width) solid var(--bs-toast-header-bo=
rder-color); border-top-left-radius: calc(var(--bs-toast-border-radius) - v=
ar(--bs-toast-border-width)); border-top-right-radius: calc(var(--bs-toast-=
border-radius) - var(--bs-toast-border-width)); }

.toast-header .btn-close { margin-right: calc(-.5 * var(--bs-toast-padding-=
x)); margin-left: var(--bs-toast-padding-x); }

.toast-body { padding: var(--bs-toast-padding-x); overflow-wrap: break-word=
; }

.modal { --bs-modal-zindex: 1055; --bs-modal-width: 500px; --bs-modal-paddi=
ng: 1rem; --bs-modal-margin: 0.5rem; --bs-modal-color: ; --bs-modal-bg: var=
(--bs-body-bg); --bs-modal-border-color: var(--bs-border-color-translucent)=
; --bs-modal-border-width: var(--bs-border-width); --bs-modal-border-radius=
: var(--bs-border-radius-lg); --bs-modal-box-shadow: var(--bs-box-shadow-sm=
); --bs-modal-inner-border-radius: calc(var(--bs-border-radius-lg) - (var(-=
-bs-border-width))); --bs-modal-header-padding-x: 1rem; --bs-modal-header-p=
adding-y: 1rem; --bs-modal-header-padding: 1rem 1rem; --bs-modal-header-bor=
der-color: var(--bs-border-color); --bs-modal-header-border-width: var(--bs=
-border-width); --bs-modal-title-line-height: 1.5; --bs-modal-footer-gap: 0=
.5rem; --bs-modal-footer-bg: ; --bs-modal-footer-border-color: var(--bs-bor=
der-color); --bs-modal-footer-border-width: var(--bs-border-width); positio=
n: fixed; top: 0px; left: 0px; z-index: var(--bs-modal-zindex); display: no=
ne; width: 100%; height: 100%; overflow: hidden auto; outline: 0px; }

.modal-dialog { position: relative; width: auto; margin: var(--bs-modal-mar=
gin); pointer-events: none; }

.modal.fade .modal-dialog { transition: transform 0.3s ease-out 0s; transfo=
rm: translate(0px, -50px); }

@media (prefers-reduced-motion: reduce) {
  .modal.fade .modal-dialog { transition: none 0s ease 0s; }
}

.modal.show .modal-dialog { transform: none; }

.modal.modal-static .modal-dialog { transform: scale(1.02); }

.modal-dialog-scrollable { height: calc(100% - var(--bs-modal-margin) * 2);=
 }

.modal-dialog-scrollable .modal-content { max-height: 100%; overflow: hidde=
n; }

.modal-dialog-scrollable .modal-body { overflow-y: auto; }

.modal-dialog-centered { display: flex; align-items: center; min-height: ca=
lc(100% - var(--bs-modal-margin) * 2); }

.modal-content { position: relative; display: flex; flex-direction: column;=
 width: 100%; color: var(--bs-modal-color); pointer-events: auto; backgroun=
d-color: var(--bs-modal-bg); background-clip: padding-box; border: var(--bs=
-modal-border-width) solid var(--bs-modal-border-color); border-radius: var=
(--bs-modal-border-radius); outline: 0px; }

.modal-backdrop { --bs-backdrop-zindex: 1050; --bs-backdrop-bg: #000; --bs-=
backdrop-opacity: 0.5; position: fixed; top: 0px; left: 0px; z-index: var(-=
-bs-backdrop-zindex); width: 100vw; height: 100vh; background-color: var(--=
bs-backdrop-bg); }

.modal-backdrop.fade { opacity: 0; }

.modal-backdrop.show { opacity: var(--bs-backdrop-opacity); }

.modal-header { display: flex; flex-shrink: 0; align-items: center; justify=
-content: space-between; padding: var(--bs-modal-header-padding); border-bo=
ttom: var(--bs-modal-header-border-width) solid var(--bs-modal-header-borde=
r-color); border-top-left-radius: var(--bs-modal-inner-border-radius); bord=
er-top-right-radius: var(--bs-modal-inner-border-radius); }

.modal-header .btn-close { padding: calc(var(--bs-modal-header-padding-y) *=
 .5) calc(var(--bs-modal-header-padding-x) * .5); margin: calc(-.5 * var(--=
bs-modal-header-padding-y)) calc(-.5 * var(--bs-modal-header-padding-x)) ca=
lc(-.5 * var(--bs-modal-header-padding-y)) auto; }

.modal-title { margin-bottom: 0px; line-height: var(--bs-modal-title-line-h=
eight); }

.modal-body { position: relative; flex: 1 1 auto; padding: var(--bs-modal-p=
adding); }

.modal-footer { display: flex; flex-shrink: 0; flex-wrap: wrap; align-items=
: center; justify-content: flex-end; padding: calc(var(--bs-modal-padding) =
- var(--bs-modal-footer-gap) * .5); background-color: var(--bs-modal-footer=
-bg); border-top: var(--bs-modal-footer-border-width) solid var(--bs-modal-=
footer-border-color); border-bottom-right-radius: var(--bs-modal-inner-bord=
er-radius); border-bottom-left-radius: var(--bs-modal-inner-border-radius);=
 }

.modal-footer > * { margin: calc(var(--bs-modal-footer-gap) * .5); }

@media (min-width: 576px) {
  .modal { --bs-modal-margin: 1.75rem; --bs-modal-box-shadow: var(--bs-box-=
shadow); }
  .modal-dialog { max-width: var(--bs-modal-width); margin-right: auto; mar=
gin-left: auto; }
  .modal-sm { --bs-modal-width: 300px; }
}

@media (min-width: 992px) {
  .modal-lg, .modal-xl { --bs-modal-width: 800px; }
}

@media (min-width: 1200px) {
  .modal-xl { --bs-modal-width: 1140px; }
}

.modal-fullscreen { width: 100vw; max-width: none; height: 100%; margin: 0p=
x; }

.modal-fullscreen .modal-content { height: 100%; border: 0px; border-radius=
: 0px; }

.modal-fullscreen .modal-footer, .modal-fullscreen .modal-header { border-r=
adius: 0px; }

.modal-fullscreen .modal-body { overflow-y: auto; }

@media (max-width: 575.98px) {
  .modal-fullscreen-sm-down { width: 100vw; max-width: none; height: 100%; =
margin: 0px; }
  .modal-fullscreen-sm-down .modal-content { height: 100%; border: 0px; bor=
der-radius: 0px; }
  .modal-fullscreen-sm-down .modal-footer, .modal-fullscreen-sm-down .modal=
-header { border-radius: 0px; }
  .modal-fullscreen-sm-down .modal-body { overflow-y: auto; }
}

@media (max-width: 767.98px) {
  .modal-fullscreen-md-down { width: 100vw; max-width: none; height: 100%; =
margin: 0px; }
  .modal-fullscreen-md-down .modal-content { height: 100%; border: 0px; bor=
der-radius: 0px; }
  .modal-fullscreen-md-down .modal-footer, .modal-fullscreen-md-down .modal=
-header { border-radius: 0px; }
  .modal-fullscreen-md-down .modal-body { overflow-y: auto; }
}

@media (max-width: 991.98px) {
  .modal-fullscreen-lg-down { width: 100vw; max-width: none; height: 100%; =
margin: 0px; }
  .modal-fullscreen-lg-down .modal-content { height: 100%; border: 0px; bor=
der-radius: 0px; }
  .modal-fullscreen-lg-down .modal-footer, .modal-fullscreen-lg-down .modal=
-header { border-radius: 0px; }
  .modal-fullscreen-lg-down .modal-body { overflow-y: auto; }
}

@media (max-width: 1199.98px) {
  .modal-fullscreen-xl-down { width: 100vw; max-width: none; height: 100%; =
margin: 0px; }
  .modal-fullscreen-xl-down .modal-content { height: 100%; border: 0px; bor=
der-radius: 0px; }
  .modal-fullscreen-xl-down .modal-footer, .modal-fullscreen-xl-down .modal=
-header { border-radius: 0px; }
  .modal-fullscreen-xl-down .modal-body { overflow-y: auto; }
}

@media (max-width: 1399.98px) {
  .modal-fullscreen-xxl-down { width: 100vw; max-width: none; height: 100%;=
 margin: 0px; }
  .modal-fullscreen-xxl-down .modal-content { height: 100%; border: 0px; bo=
rder-radius: 0px; }
  .modal-fullscreen-xxl-down .modal-footer, .modal-fullscreen-xxl-down .mod=
al-header { border-radius: 0px; }
  .modal-fullscreen-xxl-down .modal-body { overflow-y: auto; }
}

.tooltip { --bs-tooltip-zindex: 1080; --bs-tooltip-max-width: 200px; --bs-t=
ooltip-padding-x: 0.5rem; --bs-tooltip-padding-y: 0.25rem; --bs-tooltip-mar=
gin: ; --bs-tooltip-font-size: 0.875rem; --bs-tooltip-color: var(--bs-body-=
bg); --bs-tooltip-bg: var(--bs-emphasis-color); --bs-tooltip-border-radius:=
 var(--bs-border-radius); --bs-tooltip-opacity: 0.9; --bs-tooltip-arrow-wid=
th: 0.8rem; --bs-tooltip-arrow-height: 0.4rem; z-index: var(--bs-tooltip-zi=
ndex); display: block; margin: var(--bs-tooltip-margin); font-family: var(-=
-bs-font-sans-serif); font-style: normal; font-weight: 400; line-height: 1.=
5; text-align: start; text-decoration: none; text-shadow: none; text-transf=
orm: none; letter-spacing: normal; word-break: normal; white-space: normal;=
 word-spacing: normal; line-break: auto; font-size: var(--bs-tooltip-font-s=
ize); overflow-wrap: break-word; opacity: 0; }

.tooltip.show { opacity: var(--bs-tooltip-opacity); }

.tooltip .tooltip-arrow { display: block; width: var(--bs-tooltip-arrow-wid=
th); height: var(--bs-tooltip-arrow-height); }

.tooltip .tooltip-arrow::before { position: absolute; content: ""; border-c=
olor: transparent; border-style: solid; }

.bs-tooltip-auto[data-popper-placement^=3D"top"] .tooltip-arrow, .bs-toolti=
p-top .tooltip-arrow { bottom: calc(-1 * var(--bs-tooltip-arrow-height)); }

.bs-tooltip-auto[data-popper-placement^=3D"top"] .tooltip-arrow::before, .b=
s-tooltip-top .tooltip-arrow::before { top: -1px; border-width: var(--bs-to=
oltip-arrow-height) calc(var(--bs-tooltip-arrow-width) * .5) 0; border-top-=
color: var(--bs-tooltip-bg); }

.bs-tooltip-auto[data-popper-placement^=3D"right"] .tooltip-arrow, .bs-tool=
tip-end .tooltip-arrow { left: calc(-1 * var(--bs-tooltip-arrow-height)); w=
idth: var(--bs-tooltip-arrow-height); height: var(--bs-tooltip-arrow-width)=
; }

.bs-tooltip-auto[data-popper-placement^=3D"right"] .tooltip-arrow::before, =
.bs-tooltip-end .tooltip-arrow::before { right: -1px; border-width: calc(va=
r(--bs-tooltip-arrow-width) * .5) var(--bs-tooltip-arrow-height) calc(var(-=
-bs-tooltip-arrow-width) * .5) 0; border-right-color: var(--bs-tooltip-bg);=
 }

.bs-tooltip-auto[data-popper-placement^=3D"bottom"] .tooltip-arrow, .bs-too=
ltip-bottom .tooltip-arrow { top: calc(-1 * var(--bs-tooltip-arrow-height))=
; }

.bs-tooltip-auto[data-popper-placement^=3D"bottom"] .tooltip-arrow::before,=
 .bs-tooltip-bottom .tooltip-arrow::before { bottom: -1px; border-width: 0 =
calc(var(--bs-tooltip-arrow-width) * .5) var(--bs-tooltip-arrow-height); bo=
rder-bottom-color: var(--bs-tooltip-bg); }

.bs-tooltip-auto[data-popper-placement^=3D"left"] .tooltip-arrow, .bs-toolt=
ip-start .tooltip-arrow { right: calc(-1 * var(--bs-tooltip-arrow-height));=
 width: var(--bs-tooltip-arrow-height); height: var(--bs-tooltip-arrow-widt=
h); }

.bs-tooltip-auto[data-popper-placement^=3D"left"] .tooltip-arrow::before, .=
bs-tooltip-start .tooltip-arrow::before { left: -1px; border-width: calc(va=
r(--bs-tooltip-arrow-width) * .5) 0 calc(var(--bs-tooltip-arrow-width) * .5=
) var(--bs-tooltip-arrow-height); border-left-color: var(--bs-tooltip-bg); =
}

.tooltip-inner { max-width: var(--bs-tooltip-max-width); padding: var(--bs-=
tooltip-padding-y) var(--bs-tooltip-padding-x); color: var(--bs-tooltip-col=
or); text-align: center; background-color: var(--bs-tooltip-bg); border-rad=
ius: var(--bs-tooltip-border-radius); }

.popover { --bs-popover-zindex: 1070; --bs-popover-max-width: 276px; --bs-p=
opover-font-size: 0.875rem; --bs-popover-bg: var(--bs-body-bg); --bs-popove=
r-border-width: var(--bs-border-width); --bs-popover-border-color: var(--bs=
-border-color-translucent); --bs-popover-border-radius: var(--bs-border-rad=
ius-lg); --bs-popover-inner-border-radius: calc(var(--bs-border-radius-lg) =
- var(--bs-border-width)); --bs-popover-box-shadow: var(--bs-box-shadow); -=
-bs-popover-header-padding-x: 1rem; --bs-popover-header-padding-y: 0.5rem; =
--bs-popover-header-font-size: 1rem; --bs-popover-header-color: inherit; --=
bs-popover-header-bg: var(--bs-secondary-bg); --bs-popover-body-padding-x: =
1rem; --bs-popover-body-padding-y: 1rem; --bs-popover-body-color: var(--bs-=
body-color); --bs-popover-arrow-width: 1rem; --bs-popover-arrow-height: 0.5=
rem; --bs-popover-arrow-border: var(--bs-popover-border-color); z-index: va=
r(--bs-popover-zindex); display: block; max-width: var(--bs-popover-max-wid=
th); font-family: var(--bs-font-sans-serif); font-style: normal; font-weigh=
t: 400; line-height: 1.5; text-align: start; text-decoration: none; text-sh=
adow: none; text-transform: none; letter-spacing: normal; word-break: norma=
l; white-space: normal; word-spacing: normal; line-break: auto; font-size: =
var(--bs-popover-font-size); overflow-wrap: break-word; background-color: v=
ar(--bs-popover-bg); background-clip: padding-box; border: var(--bs-popover=
-border-width) solid var(--bs-popover-border-color); border-radius: var(--b=
s-popover-border-radius); }

.popover .popover-arrow { display: block; width: var(--bs-popover-arrow-wid=
th); height: var(--bs-popover-arrow-height); }

.popover .popover-arrow::after, .popover .popover-arrow::before { position:=
 absolute; display: block; content: ""; border-color: transparent; border-s=
tyle: solid; border-width: 0px; }

.bs-popover-auto[data-popper-placement^=3D"top"] > .popover-arrow, .bs-popo=
ver-top > .popover-arrow { bottom: calc(-1 * (var(--bs-popover-arrow-height=
)) - var(--bs-popover-border-width)); }

.bs-popover-auto[data-popper-placement^=3D"top"] > .popover-arrow::after, .=
bs-popover-auto[data-popper-placement^=3D"top"] > .popover-arrow::before, .=
bs-popover-top > .popover-arrow::after, .bs-popover-top > .popover-arrow::b=
efore { border-width: var(--bs-popover-arrow-height) calc(var(--bs-popover-=
arrow-width) * .5) 0; }

.bs-popover-auto[data-popper-placement^=3D"top"] > .popover-arrow::before, =
.bs-popover-top > .popover-arrow::before { bottom: 0px; border-top-color: v=
ar(--bs-popover-arrow-border); }

.bs-popover-auto[data-popper-placement^=3D"top"] > .popover-arrow::after, .=
bs-popover-top > .popover-arrow::after { bottom: var(--bs-popover-border-wi=
dth); border-top-color: var(--bs-popover-bg); }

.bs-popover-auto[data-popper-placement^=3D"right"] > .popover-arrow, .bs-po=
pover-end > .popover-arrow { left: calc(-1 * (var(--bs-popover-arrow-height=
)) - var(--bs-popover-border-width)); width: var(--bs-popover-arrow-height)=
; height: var(--bs-popover-arrow-width); }

.bs-popover-auto[data-popper-placement^=3D"right"] > .popover-arrow::after,=
 .bs-popover-auto[data-popper-placement^=3D"right"] > .popover-arrow::befor=
e, .bs-popover-end > .popover-arrow::after, .bs-popover-end > .popover-arro=
w::before { border-width: calc(var(--bs-popover-arrow-width) * .5) var(--bs=
-popover-arrow-height) calc(var(--bs-popover-arrow-width) * .5) 0; }

.bs-popover-auto[data-popper-placement^=3D"right"] > .popover-arrow::before=
, .bs-popover-end > .popover-arrow::before { left: 0px; border-right-color:=
 var(--bs-popover-arrow-border); }

.bs-popover-auto[data-popper-placement^=3D"right"] > .popover-arrow::after,=
 .bs-popover-end > .popover-arrow::after { left: var(--bs-popover-border-wi=
dth); border-right-color: var(--bs-popover-bg); }

.bs-popover-auto[data-popper-placement^=3D"bottom"] > .popover-arrow, .bs-p=
opover-bottom > .popover-arrow { top: calc(-1 * (var(--bs-popover-arrow-hei=
ght)) - var(--bs-popover-border-width)); }

.bs-popover-auto[data-popper-placement^=3D"bottom"] > .popover-arrow::after=
, .bs-popover-auto[data-popper-placement^=3D"bottom"] > .popover-arrow::bef=
ore, .bs-popover-bottom > .popover-arrow::after, .bs-popover-bottom > .popo=
ver-arrow::before { border-width: 0 calc(var(--bs-popover-arrow-width) * .5=
) var(--bs-popover-arrow-height); }

.bs-popover-auto[data-popper-placement^=3D"bottom"] > .popover-arrow::befor=
e, .bs-popover-bottom > .popover-arrow::before { top: 0px; border-bottom-co=
lor: var(--bs-popover-arrow-border); }

.bs-popover-auto[data-popper-placement^=3D"bottom"] > .popover-arrow::after=
, .bs-popover-bottom > .popover-arrow::after { top: var(--bs-popover-border=
-width); border-bottom-color: var(--bs-popover-bg); }

.bs-popover-auto[data-popper-placement^=3D"bottom"] .popover-header::before=
, .bs-popover-bottom .popover-header::before { position: absolute; top: 0px=
; left: 50%; display: block; width: var(--bs-popover-arrow-width); margin-l=
eft: calc(-.5 * var(--bs-popover-arrow-width)); content: ""; border-bottom:=
 var(--bs-popover-border-width) solid var(--bs-popover-header-bg); }

.bs-popover-auto[data-popper-placement^=3D"left"] > .popover-arrow, .bs-pop=
over-start > .popover-arrow { right: calc(-1 * (var(--bs-popover-arrow-heig=
ht)) - var(--bs-popover-border-width)); width: var(--bs-popover-arrow-heigh=
t); height: var(--bs-popover-arrow-width); }

.bs-popover-auto[data-popper-placement^=3D"left"] > .popover-arrow::after, =
.bs-popover-auto[data-popper-placement^=3D"left"] > .popover-arrow::before,=
 .bs-popover-start > .popover-arrow::after, .bs-popover-start > .popover-ar=
row::before { border-width: calc(var(--bs-popover-arrow-width) * .5) 0 calc=
(var(--bs-popover-arrow-width) * .5) var(--bs-popover-arrow-height); }

.bs-popover-auto[data-popper-placement^=3D"left"] > .popover-arrow::before,=
 .bs-popover-start > .popover-arrow::before { right: 0px; border-left-color=
: var(--bs-popover-arrow-border); }

.bs-popover-auto[data-popper-placement^=3D"left"] > .popover-arrow::after, =
.bs-popover-start > .popover-arrow::after { right: var(--bs-popover-border-=
width); border-left-color: var(--bs-popover-bg); }

.popover-header { padding: var(--bs-popover-header-padding-y) var(--bs-popo=
ver-header-padding-x); margin-bottom: 0px; font-size: var(--bs-popover-head=
er-font-size); color: var(--bs-popover-header-color); background-color: var=
(--bs-popover-header-bg); border-bottom: var(--bs-popover-border-width) sol=
id var(--bs-popover-border-color); border-top-left-radius: var(--bs-popover=
-inner-border-radius); border-top-right-radius: var(--bs-popover-inner-bord=
er-radius); }

.popover-header:empty { display: none; }

.popover-body { padding: var(--bs-popover-body-padding-y) var(--bs-popover-=
body-padding-x); color: var(--bs-popover-body-color); }

.carousel { position: relative; }

.carousel.pointer-event { touch-action: pan-y; }

.carousel-inner { position: relative; width: 100%; overflow: hidden; }

.carousel-inner::after { display: block; clear: both; content: ""; }

.carousel-item { position: relative; display: none; float: left; width: 100=
%; margin-right: -100%; backface-visibility: hidden; transition: transform =
0.6s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .carousel-item { transition: none 0s ease 0s; }
}

.carousel-item-next, .carousel-item-prev, .carousel-item.active { display: =
block; }

.active.carousel-item-end, .carousel-item-next:not(.carousel-item-start) { =
transform: translateX(100%); }

.active.carousel-item-start, .carousel-item-prev:not(.carousel-item-end) { =
transform: translateX(-100%); }

.carousel-fade .carousel-item { opacity: 0; transition-property: opacity; t=
ransform: none; }

.carousel-fade .carousel-item-next.carousel-item-start, .carousel-fade .car=
ousel-item-prev.carousel-item-end, .carousel-fade .carousel-item.active { z=
-index: 1; opacity: 1; }

.carousel-fade .active.carousel-item-end, .carousel-fade .active.carousel-i=
tem-start { z-index: 0; opacity: 0; transition: opacity 0s ease 0.6s; }

@media (prefers-reduced-motion: reduce) {
  .carousel-fade .active.carousel-item-end, .carousel-fade .active.carousel=
-item-start { transition: none 0s ease 0s; }
}

.carousel-control-next, .carousel-control-prev { position: absolute; top: 0=
px; bottom: 0px; z-index: 1; display: flex; align-items: center; justify-co=
ntent: center; width: 15%; padding: 0px; color: rgb(255, 255, 255); text-al=
ign: center; background: 0px 0px; border: 0px; opacity: 0.5; transition: op=
acity 0.15s ease 0s; }

@media (prefers-reduced-motion: reduce) {
  .carousel-control-next, .carousel-control-prev { transition: none 0s ease=
 0s; }
}

.carousel-control-next:focus, .carousel-control-next:hover, .carousel-contr=
ol-prev:focus, .carousel-control-prev:hover { color: rgb(255, 255, 255); te=
xt-decoration: none; outline: 0px; opacity: 0.9; }

.carousel-control-prev { left: 0px; }

.carousel-control-next { right: 0px; }

.carousel-control-next-icon, .carousel-control-prev-icon { display: inline-=
block; width: 2rem; height: 2rem; background-repeat: no-repeat; background-=
position: 50% center; background-size: 100% 100%; }

.carousel-control-prev-icon { background-image: url("data:image/svg+xml,%3c=
svg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 16' fill=3D'%23f=
ff'%3e%3cpath d=3D'M11.354 1.646a.5.5 0 0 1 0 .708L5.707 8l5.647 5.646a.5.5=
 0 0 1-.708.708l-6-6a.5.5 0 0 1 0-.708l6-6a.5.5 0 0 1 .708 0z'/%3e%3c/svg%3=
e"); }

.carousel-control-next-icon { background-image: url("data:image/svg+xml,%3c=
svg xmlns=3D'http://www.w3.org/2000/svg' viewBox=3D'0 0 16 16' fill=3D'%23f=
ff'%3e%3cpath d=3D'M4.646 1.646a.5.5 0 0 1 .708 0l6 6a.5.5 0 0 1 0 .708l-6 =
6a.5.5 0 0 1-.708-.708L10.293 8 4.646 2.354a.5.5 0 0 1 0-.708z'/%3e%3c/svg%=
3e"); }

.carousel-indicators { position: absolute; right: 0px; bottom: 0px; left: 0=
px; z-index: 2; display: flex; justify-content: center; padding: 0px; margi=
n-right: 15%; margin-bottom: 1rem; margin-left: 15%; }

.carousel-indicators [data-bs-target] { box-sizing: content-box; flex: 0 1 =
auto; width: 30px; height: 3px; padding: 0px; margin-right: 3px; margin-lef=
t: 3px; text-indent: -999px; cursor: pointer; background-color: rgb(255, 25=
5, 255); background-clip: padding-box; border-width: 10px 0px; border-right=
-style: initial; border-left-style: initial; border-right-color: initial; b=
order-left-color: initial; border-image: initial; border-top-style: solid; =
border-top-color: transparent; border-bottom-style: solid; border-bottom-co=
lor: transparent; opacity: 0.5; transition: opacity 0.6s ease 0s; }

@media (prefers-reduced-motion: reduce) {
  .carousel-indicators [data-bs-target] { transition: none 0s ease 0s; }
}

.carousel-indicators .active { opacity: 1; }

.carousel-caption { position: absolute; right: 15%; bottom: 1.25rem; left: =
15%; padding-top: 1.25rem; padding-bottom: 1.25rem; color: rgb(255, 255, 25=
5); text-align: center; }

.carousel-dark .carousel-control-next-icon, .carousel-dark .carousel-contro=
l-prev-icon { filter: invert(1) grayscale(1); }

.carousel-dark .carousel-indicators [data-bs-target] { background-color: rg=
b(0, 0, 0); }

.carousel-dark .carousel-caption { color: rgb(0, 0, 0); }

[data-bs-theme=3D"dark"] .carousel .carousel-control-next-icon, [data-bs-th=
eme=3D"dark"] .carousel .carousel-control-prev-icon, [data-bs-theme=3D"dark=
"].carousel .carousel-control-next-icon, [data-bs-theme=3D"dark"].carousel =
.carousel-control-prev-icon { filter: invert(1) grayscale(1); }

[data-bs-theme=3D"dark"] .carousel .carousel-indicators [data-bs-target], [=
data-bs-theme=3D"dark"].carousel .carousel-indicators [data-bs-target] { ba=
ckground-color: rgb(0, 0, 0); }

[data-bs-theme=3D"dark"] .carousel .carousel-caption, [data-bs-theme=3D"dar=
k"].carousel .carousel-caption { color: rgb(0, 0, 0); }

.spinner-border, .spinner-grow { display: inline-block; width: var(--bs-spi=
nner-width); height: var(--bs-spinner-height); vertical-align: var(--bs-spi=
nner-vertical-align); border-radius: 50%; animation: var(--bs-spinner-anima=
tion-speed) linear infinite var(--bs-spinner-animation-name); }

@keyframes spinner-border {=20
  100% { transform: rotate(360deg); }
}

.spinner-border { --bs-spinner-width: 2rem; --bs-spinner-height: 2rem; --bs=
-spinner-vertical-align: -0.125em; --bs-spinner-border-width: 0.25em; --bs-=
spinner-animation-speed: 0.75s; --bs-spinner-animation-name: spinner-border=
; border-top-color: ; border-top-style: ; border-top-width: ; border-right-=
style: ; border-right-width: ; border-bottom-color: ; border-bottom-style: =
; border-bottom-width: ; border-left-color: ; border-left-style: ; border-l=
eft-width: ; border-image-source: ; border-image-slice: ; border-image-widt=
h: ; border-image-outset: ; border-image-repeat: ; border-right-color: tran=
sparent; }

.spinner-border-sm { --bs-spinner-width: 1rem; --bs-spinner-height: 1rem; -=
-bs-spinner-border-width: 0.2em; }

@keyframes spinner-grow {=20
  0% { transform: scale(0); }
  50% { opacity: 1; transform: none; }
}

.spinner-grow { --bs-spinner-width: 2rem; --bs-spinner-height: 2rem; --bs-s=
pinner-vertical-align: -0.125em; --bs-spinner-animation-speed: 0.75s; --bs-=
spinner-animation-name: spinner-grow; background-color: currentcolor; opaci=
ty: 0; }

.spinner-grow-sm { --bs-spinner-width: 1rem; --bs-spinner-height: 1rem; }

@media (prefers-reduced-motion: reduce) {
  .spinner-border, .spinner-grow { --bs-spinner-animation-speed: 1.5s; }
}

.offcanvas, .offcanvas-lg, .offcanvas-md, .offcanvas-sm, .offcanvas-xl, .of=
fcanvas-xxl { --bs-offcanvas-zindex: 1045; --bs-offcanvas-width: 400px; --b=
s-offcanvas-height: 30vh; --bs-offcanvas-padding-x: 1rem; --bs-offcanvas-pa=
dding-y: 1rem; --bs-offcanvas-color: var(--bs-body-color); --bs-offcanvas-b=
g: var(--bs-body-bg); --bs-offcanvas-border-width: var(--bs-border-width); =
--bs-offcanvas-border-color: var(--bs-border-color-translucent); --bs-offca=
nvas-box-shadow: var(--bs-box-shadow-sm); --bs-offcanvas-transition: transf=
orm 0.3s ease-in-out; --bs-offcanvas-title-line-height: 1.5; }

@media (max-width: 575.98px) {
  .offcanvas-sm { position: fixed; bottom: 0px; z-index: var(--bs-offcanvas=
-zindex); display: flex; flex-direction: column; max-width: 100%; color: va=
r(--bs-offcanvas-color); visibility: hidden; background-color: var(--bs-off=
canvas-bg); background-clip: padding-box; outline: 0px; transition: var(--b=
s-offcanvas-transition); }
}

@media (max-width: 575.98px) and (prefers-reduced-motion: reduce) {
  .offcanvas-sm { transition: none 0s ease 0s; }
}

@media (max-width: 575.98px) {
  .offcanvas-sm.offcanvas-start { top: 0px; left: 0px; width: var(--bs-offc=
anvas-width); border-right: var(--bs-offcanvas-border-width) solid var(--bs=
-offcanvas-border-color); transform: translateX(-100%); }
  .offcanvas-sm.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offca=
nvas-width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-o=
ffcanvas-border-color); transform: translateX(100%); }
  .offcanvas-sm.offcanvas-top { top: 0px; right: 0px; left: 0px; height: va=
r(--bs-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcanv=
as-border-width) solid var(--bs-offcanvas-border-color); transform: transla=
teY(-100%); }
  .offcanvas-sm.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs-=
offcanvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border-=
width) solid var(--bs-offcanvas-border-color); transform: translateY(100%);=
 }
  .offcanvas-sm.show:not(.hiding), .offcanvas-sm.showing { transform: none;=
 }
  .offcanvas-sm.hiding, .offcanvas-sm.show, .offcanvas-sm.showing { visibil=
ity: visible; }
}

@media (min-width: 576px) {
  .offcanvas-sm { --bs-offcanvas-height: auto; --bs-offcanvas-border-width:=
 0; background-color: transparent !important; }
  .offcanvas-sm .offcanvas-header { display: none; }
  .offcanvas-sm .offcanvas-body { display: flex; flex-grow: 0; padding: 0px=
; overflow-y: visible; background-color: transparent !important; }
}

@media (max-width: 767.98px) {
  .offcanvas-md { position: fixed; bottom: 0px; z-index: var(--bs-offcanvas=
-zindex); display: flex; flex-direction: column; max-width: 100%; color: va=
r(--bs-offcanvas-color); visibility: hidden; background-color: var(--bs-off=
canvas-bg); background-clip: padding-box; outline: 0px; transition: var(--b=
s-offcanvas-transition); }
}

@media (max-width: 767.98px) and (prefers-reduced-motion: reduce) {
  .offcanvas-md { transition: none 0s ease 0s; }
}

@media (max-width: 767.98px) {
  .offcanvas-md.offcanvas-start { top: 0px; left: 0px; width: var(--bs-offc=
anvas-width); border-right: var(--bs-offcanvas-border-width) solid var(--bs=
-offcanvas-border-color); transform: translateX(-100%); }
  .offcanvas-md.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offca=
nvas-width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-o=
ffcanvas-border-color); transform: translateX(100%); }
  .offcanvas-md.offcanvas-top { top: 0px; right: 0px; left: 0px; height: va=
r(--bs-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcanv=
as-border-width) solid var(--bs-offcanvas-border-color); transform: transla=
teY(-100%); }
  .offcanvas-md.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs-=
offcanvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border-=
width) solid var(--bs-offcanvas-border-color); transform: translateY(100%);=
 }
  .offcanvas-md.show:not(.hiding), .offcanvas-md.showing { transform: none;=
 }
  .offcanvas-md.hiding, .offcanvas-md.show, .offcanvas-md.showing { visibil=
ity: visible; }
}

@media (min-width: 768px) {
  .offcanvas-md { --bs-offcanvas-height: auto; --bs-offcanvas-border-width:=
 0; background-color: transparent !important; }
  .offcanvas-md .offcanvas-header { display: none; }
  .offcanvas-md .offcanvas-body { display: flex; flex-grow: 0; padding: 0px=
; overflow-y: visible; background-color: transparent !important; }
}

@media (max-width: 991.98px) {
  .offcanvas-lg { position: fixed; bottom: 0px; z-index: var(--bs-offcanvas=
-zindex); display: flex; flex-direction: column; max-width: 100%; color: va=
r(--bs-offcanvas-color); visibility: hidden; background-color: var(--bs-off=
canvas-bg); background-clip: padding-box; outline: 0px; transition: var(--b=
s-offcanvas-transition); }
}

@media (max-width: 991.98px) and (prefers-reduced-motion: reduce) {
  .offcanvas-lg { transition: none 0s ease 0s; }
}

@media (max-width: 991.98px) {
  .offcanvas-lg.offcanvas-start { top: 0px; left: 0px; width: var(--bs-offc=
anvas-width); border-right: var(--bs-offcanvas-border-width) solid var(--bs=
-offcanvas-border-color); transform: translateX(-100%); }
  .offcanvas-lg.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offca=
nvas-width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-o=
ffcanvas-border-color); transform: translateX(100%); }
  .offcanvas-lg.offcanvas-top { top: 0px; right: 0px; left: 0px; height: va=
r(--bs-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcanv=
as-border-width) solid var(--bs-offcanvas-border-color); transform: transla=
teY(-100%); }
  .offcanvas-lg.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs-=
offcanvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border-=
width) solid var(--bs-offcanvas-border-color); transform: translateY(100%);=
 }
  .offcanvas-lg.show:not(.hiding), .offcanvas-lg.showing { transform: none;=
 }
  .offcanvas-lg.hiding, .offcanvas-lg.show, .offcanvas-lg.showing { visibil=
ity: visible; }
}

@media (min-width: 992px) {
  .offcanvas-lg { --bs-offcanvas-height: auto; --bs-offcanvas-border-width:=
 0; background-color: transparent !important; }
  .offcanvas-lg .offcanvas-header { display: none; }
  .offcanvas-lg .offcanvas-body { display: flex; flex-grow: 0; padding: 0px=
; overflow-y: visible; background-color: transparent !important; }
}

@media (max-width: 1199.98px) {
  .offcanvas-xl { position: fixed; bottom: 0px; z-index: var(--bs-offcanvas=
-zindex); display: flex; flex-direction: column; max-width: 100%; color: va=
r(--bs-offcanvas-color); visibility: hidden; background-color: var(--bs-off=
canvas-bg); background-clip: padding-box; outline: 0px; transition: var(--b=
s-offcanvas-transition); }
}

@media (max-width: 1199.98px) and (prefers-reduced-motion: reduce) {
  .offcanvas-xl { transition: none 0s ease 0s; }
}

@media (max-width: 1199.98px) {
  .offcanvas-xl.offcanvas-start { top: 0px; left: 0px; width: var(--bs-offc=
anvas-width); border-right: var(--bs-offcanvas-border-width) solid var(--bs=
-offcanvas-border-color); transform: translateX(-100%); }
  .offcanvas-xl.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offca=
nvas-width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-o=
ffcanvas-border-color); transform: translateX(100%); }
  .offcanvas-xl.offcanvas-top { top: 0px; right: 0px; left: 0px; height: va=
r(--bs-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcanv=
as-border-width) solid var(--bs-offcanvas-border-color); transform: transla=
teY(-100%); }
  .offcanvas-xl.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs-=
offcanvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border-=
width) solid var(--bs-offcanvas-border-color); transform: translateY(100%);=
 }
  .offcanvas-xl.show:not(.hiding), .offcanvas-xl.showing { transform: none;=
 }
  .offcanvas-xl.hiding, .offcanvas-xl.show, .offcanvas-xl.showing { visibil=
ity: visible; }
}

@media (min-width: 1200px) {
  .offcanvas-xl { --bs-offcanvas-height: auto; --bs-offcanvas-border-width:=
 0; background-color: transparent !important; }
  .offcanvas-xl .offcanvas-header { display: none; }
  .offcanvas-xl .offcanvas-body { display: flex; flex-grow: 0; padding: 0px=
; overflow-y: visible; background-color: transparent !important; }
}

@media (max-width: 1399.98px) {
  .offcanvas-xxl { position: fixed; bottom: 0px; z-index: var(--bs-offcanva=
s-zindex); display: flex; flex-direction: column; max-width: 100%; color: v=
ar(--bs-offcanvas-color); visibility: hidden; background-color: var(--bs-of=
fcanvas-bg); background-clip: padding-box; outline: 0px; transition: var(--=
bs-offcanvas-transition); }
}

@media (max-width: 1399.98px) and (prefers-reduced-motion: reduce) {
  .offcanvas-xxl { transition: none 0s ease 0s; }
}

@media (max-width: 1399.98px) {
  .offcanvas-xxl.offcanvas-start { top: 0px; left: 0px; width: var(--bs-off=
canvas-width); border-right: var(--bs-offcanvas-border-width) solid var(--b=
s-offcanvas-border-color); transform: translateX(-100%); }
  .offcanvas-xxl.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offc=
anvas-width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-=
offcanvas-border-color); transform: translateX(100%); }
  .offcanvas-xxl.offcanvas-top { top: 0px; right: 0px; left: 0px; height: v=
ar(--bs-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcan=
vas-border-width) solid var(--bs-offcanvas-border-color); transform: transl=
ateY(-100%); }
  .offcanvas-xxl.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs=
-offcanvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border=
-width) solid var(--bs-offcanvas-border-color); transform: translateY(100%)=
; }
  .offcanvas-xxl.show:not(.hiding), .offcanvas-xxl.showing { transform: non=
e; }
  .offcanvas-xxl.hiding, .offcanvas-xxl.show, .offcanvas-xxl.showing { visi=
bility: visible; }
}

@media (min-width: 1400px) {
  .offcanvas-xxl { --bs-offcanvas-height: auto; --bs-offcanvas-border-width=
: 0; background-color: transparent !important; }
  .offcanvas-xxl .offcanvas-header { display: none; }
  .offcanvas-xxl .offcanvas-body { display: flex; flex-grow: 0; padding: 0p=
x; overflow-y: visible; background-color: transparent !important; }
}

.offcanvas { position: fixed; bottom: 0px; z-index: var(--bs-offcanvas-zind=
ex); display: flex; flex-direction: column; max-width: 100%; color: var(--b=
s-offcanvas-color); visibility: hidden; background-color: var(--bs-offcanva=
s-bg); background-clip: padding-box; outline: 0px; transition: var(--bs-off=
canvas-transition); }

@media (prefers-reduced-motion: reduce) {
  .offcanvas { transition: none 0s ease 0s; }
}

.offcanvas.offcanvas-start { top: 0px; left: 0px; width: var(--bs-offcanvas=
-width); border-right: var(--bs-offcanvas-border-width) solid var(--bs-offc=
anvas-border-color); transform: translateX(-100%); }

.offcanvas.offcanvas-end { top: 0px; right: 0px; width: var(--bs-offcanvas-=
width); border-left: var(--bs-offcanvas-border-width) solid var(--bs-offcan=
vas-border-color); transform: translateX(100%); }

.offcanvas.offcanvas-top { top: 0px; right: 0px; left: 0px; height: var(--b=
s-offcanvas-height); max-height: 100%; border-bottom: var(--bs-offcanvas-bo=
rder-width) solid var(--bs-offcanvas-border-color); transform: translateY(-=
100%); }

.offcanvas.offcanvas-bottom { right: 0px; left: 0px; height: var(--bs-offca=
nvas-height); max-height: 100%; border-top: var(--bs-offcanvas-border-width=
) solid var(--bs-offcanvas-border-color); transform: translateY(100%); }

.offcanvas.show:not(.hiding), .offcanvas.showing { transform: none; }

.offcanvas.hiding, .offcanvas.show, .offcanvas.showing { visibility: visibl=
e; }

.offcanvas-backdrop { position: fixed; top: 0px; left: 0px; z-index: 1040; =
width: 100vw; height: 100vh; background-color: rgb(0, 0, 0); }

.offcanvas-backdrop.fade { opacity: 0; }

.offcanvas-backdrop.show { opacity: 0.5; }

.offcanvas-header { display: flex; align-items: center; justify-content: sp=
ace-between; padding: var(--bs-offcanvas-padding-y) var(--bs-offcanvas-padd=
ing-x); }

.offcanvas-header .btn-close { padding: calc(var(--bs-offcanvas-padding-y) =
* .5) calc(var(--bs-offcanvas-padding-x) * .5); margin-top: calc(-.5 * var(=
--bs-offcanvas-padding-y)); margin-right: calc(-.5 * var(--bs-offcanvas-pad=
ding-x)); margin-bottom: calc(-.5 * var(--bs-offcanvas-padding-y)); }

.offcanvas-title { margin-bottom: 0px; line-height: var(--bs-offcanvas-titl=
e-line-height); }

.offcanvas-body { flex-grow: 1; padding: var(--bs-offcanvas-padding-y) var(=
--bs-offcanvas-padding-x); overflow-y: auto; }

.placeholder { display: inline-block; min-height: 1em; vertical-align: midd=
le; cursor: wait; background-color: currentcolor; opacity: 0.5; }

.placeholder.btn::before { display: inline-block; content: ""; }

.placeholder-xs { min-height: 0.6em; }

.placeholder-sm { min-height: 0.8em; }

.placeholder-lg { min-height: 1.2em; }

.placeholder-glow .placeholder { animation: 2s ease-in-out 0s infinite norm=
al none running placeholder-glow; }

@keyframes placeholder-glow {=20
  50% { opacity: 0.2; }
}

.placeholder-wave { mask-image: linear-gradient(130deg, rgb(0, 0, 0) 55%, r=
gba(0, 0, 0, 0.8) 75%, rgb(0, 0, 0) 95%); mask-size: 200% 100%; animation: =
2s linear 0s infinite normal none running placeholder-wave; }

@keyframes placeholder-wave {=20
  100% { mask-position: -200% 0%; }
}

.clearfix::after { display: block; clear: both; content: ""; }

.text-bg-primary { color: rgb(255, 255, 255) !important; background-color: =
RGBA(var(--bs-primary-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-secondary { color: rgb(255, 255, 255) !important; background-color=
: RGBA(var(--bs-secondary-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-success { color: rgb(255, 255, 255) !important; background-color: =
RGBA(var(--bs-success-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-info { color: rgb(0, 0, 0) !important; background-color: RGBA(var(=
--bs-info-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-warning { color: rgb(0, 0, 0) !important; background-color: RGBA(v=
ar(--bs-warning-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-danger { color: rgb(255, 255, 255) !important; background-color: R=
GBA(var(--bs-danger-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-light { color: rgb(0, 0, 0) !important; background-color: RGBA(var=
(--bs-light-rgb),var(--bs-bg-opacity,1)) !important; }

.text-bg-dark { color: rgb(255, 255, 255) !important; background-color: RGB=
A(var(--bs-dark-rgb),var(--bs-bg-opacity,1)) !important; }

.link-primary { color: RGBA(var(--bs-primary-rgb),var(--bs-link-opacity,1))=
 !important; text-decoration-color: RGBA(var(--bs-primary-rgb),var(--bs-lin=
k-underline-opacity,1)) !important; }

.link-primary:focus, .link-primary:hover { color: RGBA(10,88,202,var(--bs-l=
ink-opacity,1)) !important; text-decoration-color: RGBA(10,88,202,var(--bs-=
link-underline-opacity,1)) !important; }

.link-secondary { color: RGBA(var(--bs-secondary-rgb),var(--bs-link-opacity=
,1)) !important; text-decoration-color: RGBA(var(--bs-secondary-rgb),var(--=
bs-link-underline-opacity,1)) !important; }

.link-secondary:focus, .link-secondary:hover { color: RGBA(86,94,100,var(--=
bs-link-opacity,1)) !important; text-decoration-color: RGBA(86,94,100,var(-=
-bs-link-underline-opacity,1)) !important; }

.link-success { color: RGBA(var(--bs-success-rgb),var(--bs-link-opacity,1))=
 !important; text-decoration-color: RGBA(var(--bs-success-rgb),var(--bs-lin=
k-underline-opacity,1)) !important; }

.link-success:focus, .link-success:hover { color: RGBA(20,108,67,var(--bs-l=
ink-opacity,1)) !important; text-decoration-color: RGBA(20,108,67,var(--bs-=
link-underline-opacity,1)) !important; }

.link-info { color: RGBA(var(--bs-info-rgb),var(--bs-link-opacity,1)) !impo=
rtant; text-decoration-color: RGBA(var(--bs-info-rgb),var(--bs-link-underli=
ne-opacity,1)) !important; }

.link-info:focus, .link-info:hover { color: RGBA(61,213,243,var(--bs-link-o=
pacity,1)) !important; text-decoration-color: RGBA(61,213,243,var(--bs-link=
-underline-opacity,1)) !important; }

.link-warning { color: RGBA(var(--bs-warning-rgb),var(--bs-link-opacity,1))=
 !important; text-decoration-color: RGBA(var(--bs-warning-rgb),var(--bs-lin=
k-underline-opacity,1)) !important; }

.link-warning:focus, .link-warning:hover { color: RGBA(255,205,57,var(--bs-=
link-opacity,1)) !important; text-decoration-color: RGBA(255,205,57,var(--b=
s-link-underline-opacity,1)) !important; }

.link-danger { color: RGBA(var(--bs-danger-rgb),var(--bs-link-opacity,1)) !=
important; text-decoration-color: RGBA(var(--bs-danger-rgb),var(--bs-link-u=
nderline-opacity,1)) !important; }

.link-danger:focus, .link-danger:hover { color: RGBA(176,42,55,var(--bs-lin=
k-opacity,1)) !important; text-decoration-color: RGBA(176,42,55,var(--bs-li=
nk-underline-opacity,1)) !important; }

.link-light { color: RGBA(var(--bs-light-rgb),var(--bs-link-opacity,1)) !im=
portant; text-decoration-color: RGBA(var(--bs-light-rgb),var(--bs-link-unde=
rline-opacity,1)) !important; }

.link-light:focus, .link-light:hover { color: RGBA(249,250,251,var(--bs-lin=
k-opacity,1)) !important; text-decoration-color: RGBA(249,250,251,var(--bs-=
link-underline-opacity,1)) !important; }

.link-dark { color: RGBA(var(--bs-dark-rgb),var(--bs-link-opacity,1)) !impo=
rtant; text-decoration-color: RGBA(var(--bs-dark-rgb),var(--bs-link-underli=
ne-opacity,1)) !important; }

.link-dark:focus, .link-dark:hover { color: RGBA(26,30,33,var(--bs-link-opa=
city,1)) !important; text-decoration-color: RGBA(26,30,33,var(--bs-link-und=
erline-opacity,1)) !important; }

.link-body-emphasis { color: RGBA(var(--bs-emphasis-color-rgb),var(--bs-lin=
k-opacity,1)) !important; text-decoration-color: RGBA(var(--bs-emphasis-col=
or-rgb),var(--bs-link-underline-opacity,1)) !important; }

.link-body-emphasis:focus, .link-body-emphasis:hover { color: RGBA(var(--bs=
-emphasis-color-rgb),var(--bs-link-opacity,.75)) !important; text-decoratio=
n-color: RGBA(var(--bs-emphasis-color-rgb),var(--bs-link-underline-opacity,=
0.75)) !important; }

.focus-ring:focus { outline: 0px; box-shadow: var(--bs-focus-ring-x,0) var(=
--bs-focus-ring-y,0) var(--bs-focus-ring-blur,0) var(--bs-focus-ring-width)=
 var(--bs-focus-ring-color); }

.icon-link { display: inline-flex; gap: 0.375rem; align-items: center; text=
-decoration-color: rgba(var(--bs-link-color-rgb),var(--bs-link-opacity,0.5)=
); text-underline-offset: 0.25em; backface-visibility: hidden; }

.icon-link > .bi { flex-shrink: 0; width: 1em; height: 1em; fill: currentco=
lor; transition: transform 0.2s ease-in-out 0s; }

@media (prefers-reduced-motion: reduce) {
  .icon-link > .bi { transition: none 0s ease 0s; }
}

.icon-link-hover:focus-visible > .bi, .icon-link-hover:hover > .bi { transf=
orm: var(--bs-icon-link-transform,translate3d(.25em,0,0)); }

.ratio { position: relative; width: 100%; }

.ratio::before { display: block; padding-top: var(--bs-aspect-ratio); conte=
nt: ""; }

.ratio > * { position: absolute; top: 0px; left: 0px; width: 100%; height: =
100%; }

.ratio-1x1 { --bs-aspect-ratio: 100%; }

.ratio-4x3 { --bs-aspect-ratio: 75%; }

.ratio-16x9 { --bs-aspect-ratio: 56.25%; }

.ratio-21x9 { --bs-aspect-ratio: 42.8571428571%; }

.fixed-top { position: fixed; top: 0px; right: 0px; left: 0px; z-index: 103=
0; }

.fixed-bottom { position: fixed; right: 0px; bottom: 0px; left: 0px; z-inde=
x: 1030; }

.sticky-top { position: sticky; top: 0px; z-index: 1020; }

.sticky-bottom { position: sticky; bottom: 0px; z-index: 1020; }

@media (min-width: 576px) {
  .sticky-sm-top { position: sticky; top: 0px; z-index: 1020; }
  .sticky-sm-bottom { position: sticky; bottom: 0px; z-index: 1020; }
}

@media (min-width: 768px) {
  .sticky-md-top { position: sticky; top: 0px; z-index: 1020; }
  .sticky-md-bottom { position: sticky; bottom: 0px; z-index: 1020; }
}

@media (min-width: 992px) {
  .sticky-lg-top { position: sticky; top: 0px; z-index: 1020; }
  .sticky-lg-bottom { position: sticky; bottom: 0px; z-index: 1020; }
}

@media (min-width: 1200px) {
  .sticky-xl-top { position: sticky; top: 0px; z-index: 1020; }
  .sticky-xl-bottom { position: sticky; bottom: 0px; z-index: 1020; }
}

@media (min-width: 1400px) {
  .sticky-xxl-top { position: sticky; top: 0px; z-index: 1020; }
  .sticky-xxl-bottom { position: sticky; bottom: 0px; z-index: 1020; }
}

.hstack { display: flex; flex-direction: row; align-items: center; align-se=
lf: stretch; }

.vstack { display: flex; flex: 1 1 auto; flex-direction: column; align-self=
: stretch; }

.visually-hidden, .visually-hidden-focusable:not(:focus):not(:focus-within)=
 { width: 1px !important; height: 1px !important; padding: 0px !important; =
margin: -1px !important; overflow: hidden !important; clip: rect(0px, 0px, =
0px, 0px) !important; white-space: nowrap !important; border: 0px !importan=
t; }

.visually-hidden-focusable:not(:focus):not(:focus-within):not(caption), .vi=
sually-hidden:not(caption) { position: absolute !important; }

.stretched-link::after { position: absolute; inset: 0px; z-index: 1; conten=
t: ""; }

.text-truncate { overflow: hidden; text-overflow: ellipsis; white-space: no=
wrap; }

.vr { display: inline-block; align-self: stretch; width: var(--bs-border-wi=
dth); min-height: 1em; background-color: currentcolor; opacity: 0.25; }

.align-baseline { vertical-align: baseline !important; }

.align-top { vertical-align: top !important; }

.align-middle { vertical-align: middle !important; }

.align-bottom { vertical-align: bottom !important; }

.align-text-bottom { vertical-align: text-bottom !important; }

.align-text-top { vertical-align: text-top !important; }

.float-start { float: left !important; }

.float-end { float: right !important; }

.float-none { float: none !important; }

.object-fit-contain { object-fit: contain !important; }

.object-fit-cover { object-fit: cover !important; }

.object-fit-fill { object-fit: fill !important; }

.object-fit-scale { object-fit: scale-down !important; }

.object-fit-none { object-fit: none !important; }

.opacity-0 { opacity: 0 !important; }

.opacity-25 { opacity: 0.25 !important; }

.opacity-50 { opacity: 0.5 !important; }

.opacity-75 { opacity: 0.75 !important; }

.opacity-100 { opacity: 1 !important; }

.overflow-auto { overflow: auto !important; }

.overflow-hidden { overflow: hidden !important; }

.overflow-visible { overflow: visible !important; }

.overflow-scroll { overflow: scroll !important; }

.overflow-x-auto { overflow-x: auto !important; }

.overflow-x-hidden { overflow-x: hidden !important; }

.overflow-x-visible { overflow-x: visible !important; }

.overflow-x-scroll { overflow-x: scroll !important; }

.overflow-y-auto { overflow-y: auto !important; }

.overflow-y-hidden { overflow-y: hidden !important; }

.overflow-y-visible { overflow-y: visible !important; }

.overflow-y-scroll { overflow-y: scroll !important; }

.d-inline { display: inline !important; }

.d-inline-block { display: inline-block !important; }

.d-block { display: block !important; }

.d-grid { display: grid !important; }

.d-inline-grid { display: inline-grid !important; }

.d-table { display: table !important; }

.d-table-row { display: table-row !important; }

.d-table-cell { display: table-cell !important; }

.d-flex { display: flex !important; }

.d-inline-flex { display: inline-flex !important; }

.d-none { display: none !important; }

.shadow { box-shadow: var(--bs-box-shadow) !important; }

.shadow-sm { box-shadow: var(--bs-box-shadow-sm) !important; }

.shadow-lg { box-shadow: var(--bs-box-shadow-lg) !important; }

.shadow-none { box-shadow: none !important; }

.focus-ring-primary { --bs-focus-ring-color: rgba(var(--bs-primary-rgb), va=
r(--bs-focus-ring-opacity)); }

.focus-ring-secondary { --bs-focus-ring-color: rgba(var(--bs-secondary-rgb)=
, var(--bs-focus-ring-opacity)); }

.focus-ring-success { --bs-focus-ring-color: rgba(var(--bs-success-rgb), va=
r(--bs-focus-ring-opacity)); }

.focus-ring-info { --bs-focus-ring-color: rgba(var(--bs-info-rgb), var(--bs=
-focus-ring-opacity)); }

.focus-ring-warning { --bs-focus-ring-color: rgba(var(--bs-warning-rgb), va=
r(--bs-focus-ring-opacity)); }

.focus-ring-danger { --bs-focus-ring-color: rgba(var(--bs-danger-rgb), var(=
--bs-focus-ring-opacity)); }

.focus-ring-light { --bs-focus-ring-color: rgba(var(--bs-light-rgb), var(--=
bs-focus-ring-opacity)); }

.focus-ring-dark { --bs-focus-ring-color: rgba(var(--bs-dark-rgb), var(--bs=
-focus-ring-opacity)); }

.position-static { position: static !important; }

.position-relative { position: relative !important; }

.position-absolute { position: absolute !important; }

.position-fixed { position: fixed !important; }

.position-sticky { position: sticky !important; }

.top-0 { top: 0px !important; }

.top-50 { top: 50% !important; }

.top-100 { top: 100% !important; }

.bottom-0 { bottom: 0px !important; }

.bottom-50 { bottom: 50% !important; }

.bottom-100 { bottom: 100% !important; }

.start-0 { left: 0px !important; }

.start-50 { left: 50% !important; }

.start-100 { left: 100% !important; }

.end-0 { right: 0px !important; }

.end-50 { right: 50% !important; }

.end-100 { right: 100% !important; }

.translate-middle { transform: translate(-50%, -50%) !important; }

.translate-middle-x { transform: translateX(-50%) !important; }

.translate-middle-y { transform: translateY(-50%) !important; }

.border { border: var(--bs-border-width) var(--bs-border-style) var(--bs-bo=
rder-color) !important; }

.border-0 { border: 0px !important; }

.border-top { border-top: var(--bs-border-width) var(--bs-border-style) var=
(--bs-border-color) !important; }

.border-top-0 { border-top: 0px !important; }

.border-end { border-right: var(--bs-border-width) var(--bs-border-style) v=
ar(--bs-border-color) !important; }

.border-end-0 { border-right: 0px !important; }

.border-bottom { border-bottom: var(--bs-border-width) var(--bs-border-styl=
e) var(--bs-border-color) !important; }

.border-bottom-0 { border-bottom: 0px !important; }

.border-start { border-left: var(--bs-border-width) var(--bs-border-style) =
var(--bs-border-color) !important; }

.border-start-0 { border-left: 0px !important; }

.border-primary { --bs-border-opacity: 1; border-color: rgba(var(--bs-prima=
ry-rgb),var(--bs-border-opacity)) !important; }

.border-secondary { --bs-border-opacity: 1; border-color: rgba(var(--bs-sec=
ondary-rgb),var(--bs-border-opacity)) !important; }

.border-success { --bs-border-opacity: 1; border-color: rgba(var(--bs-succe=
ss-rgb),var(--bs-border-opacity)) !important; }

.border-info { --bs-border-opacity: 1; border-color: rgba(var(--bs-info-rgb=
),var(--bs-border-opacity)) !important; }

.border-warning { --bs-border-opacity: 1; border-color: rgba(var(--bs-warni=
ng-rgb),var(--bs-border-opacity)) !important; }

.border-danger { --bs-border-opacity: 1; border-color: rgba(var(--bs-danger=
-rgb),var(--bs-border-opacity)) !important; }

.border-light { --bs-border-opacity: 1; border-color: rgba(var(--bs-light-r=
gb),var(--bs-border-opacity)) !important; }

.border-dark { --bs-border-opacity: 1; border-color: rgba(var(--bs-dark-rgb=
),var(--bs-border-opacity)) !important; }

.border-black { --bs-border-opacity: 1; border-color: rgba(var(--bs-black-r=
gb),var(--bs-border-opacity)) !important; }

.border-white { --bs-border-opacity: 1; border-color: rgba(var(--bs-white-r=
gb),var(--bs-border-opacity)) !important; }

.border-primary-subtle { border-color: var(--bs-primary-border-subtle) !imp=
ortant; }

.border-secondary-subtle { border-color: var(--bs-secondary-border-subtle) =
!important; }

.border-success-subtle { border-color: var(--bs-success-border-subtle) !imp=
ortant; }

.border-info-subtle { border-color: var(--bs-info-border-subtle) !important=
; }

.border-warning-subtle { border-color: var(--bs-warning-border-subtle) !imp=
ortant; }

.border-danger-subtle { border-color: var(--bs-danger-border-subtle) !impor=
tant; }

.border-light-subtle { border-color: var(--bs-light-border-subtle) !importa=
nt; }

.border-dark-subtle { border-color: var(--bs-dark-border-subtle) !important=
; }

.border-1 { border-width: 1px !important; }

.border-2 { border-width: 2px !important; }

.border-3 { border-width: 3px !important; }

.border-4 { border-width: 4px !important; }

.border-5 { border-width: 5px !important; }

.border-opacity-10 { --bs-border-opacity: 0.1; }

.border-opacity-25 { --bs-border-opacity: 0.25; }

.border-opacity-50 { --bs-border-opacity: 0.5; }

.border-opacity-75 { --bs-border-opacity: 0.75; }

.border-opacity-100 { --bs-border-opacity: 1; }

.w-25 { width: 25% !important; }

.w-50 { width: 50% !important; }

.w-75 { width: 75% !important; }

.w-100 { width: 100% !important; }

.w-auto { width: auto !important; }

.mw-100 { max-width: 100% !important; }

.vw-100 { width: 100vw !important; }

.min-vw-100 { min-width: 100vw !important; }

.h-25 { height: 25% !important; }

.h-50 { height: 50% !important; }

.h-75 { height: 75% !important; }

.h-100 { height: 100% !important; }

.h-auto { height: auto !important; }

.mh-100 { max-height: 100% !important; }

.vh-100 { height: 100vh !important; }

.min-vh-100 { min-height: 100vh !important; }

.flex-fill { flex: 1 1 auto !important; }

.flex-row { flex-direction: row !important; }

.flex-column { flex-direction: column !important; }

.flex-row-reverse { flex-direction: row-reverse !important; }

.flex-column-reverse { flex-direction: column-reverse !important; }

.flex-grow-0 { flex-grow: 0 !important; }

.flex-grow-1 { flex-grow: 1 !important; }

.flex-shrink-0 { flex-shrink: 0 !important; }

.flex-shrink-1 { flex-shrink: 1 !important; }

.flex-wrap { flex-wrap: wrap !important; }

.flex-nowrap { flex-wrap: nowrap !important; }

.flex-wrap-reverse { flex-wrap: wrap-reverse !important; }

.justify-content-start { justify-content: flex-start !important; }

.justify-content-end { justify-content: flex-end !important; }

.justify-content-center { justify-content: center !important; }

.justify-content-between { justify-content: space-between !important; }

.justify-content-around { justify-content: space-around !important; }

.justify-content-evenly { justify-content: space-evenly !important; }

.align-items-start { align-items: flex-start !important; }

.align-items-end { align-items: flex-end !important; }

.align-items-center { align-items: center !important; }

.align-items-baseline { align-items: baseline !important; }

.align-items-stretch { align-items: stretch !important; }

.align-content-start { align-content: flex-start !important; }

.align-content-end { align-content: flex-end !important; }

.align-content-center { align-content: center !important; }

.align-content-between { align-content: space-between !important; }

.align-content-around { align-content: space-around !important; }

.align-content-stretch { align-content: stretch !important; }

.align-self-auto { align-self: auto !important; }

.align-self-start { align-self: flex-start !important; }

.align-self-end { align-self: flex-end !important; }

.align-self-center { align-self: center !important; }

.align-self-baseline { align-self: baseline !important; }

.align-self-stretch { align-self: stretch !important; }

.order-first { order: -1 !important; }

.order-0 { order: 0 !important; }

.order-1 { order: 1 !important; }

.order-2 { order: 2 !important; }

.order-3 { order: 3 !important; }

.order-4 { order: 4 !important; }

.order-5 { order: 5 !important; }

.order-last { order: 6 !important; }

.m-0 { margin: 0px !important; }

.m-1 { margin: 0.25rem !important; }

.m-2 { margin: 0.5rem !important; }

.m-3 { margin: 1rem !important; }

.m-4 { margin: 1.5rem !important; }

.m-5 { margin: 3rem !important; }

.m-auto { margin: auto !important; }

.mx-0 { margin-right: 0px !important; margin-left: 0px !important; }

.mx-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !important; =
}

.mx-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !important; }

.mx-3 { margin-right: 1rem !important; margin-left: 1rem !important; }

.mx-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !important; }

.mx-5 { margin-right: 3rem !important; margin-left: 3rem !important; }

.mx-auto { margin-right: auto !important; margin-left: auto !important; }

.my-0 { margin-top: 0px !important; margin-bottom: 0px !important; }

.my-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !important; =
}

.my-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !important; }

.my-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; }

.my-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !important; }

.my-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; }

.my-auto { margin-top: auto !important; margin-bottom: auto !important; }

.mt-0 { margin-top: 0px !important; }

.mt-1 { margin-top: 0.25rem !important; }

.mt-2 { margin-top: 0.5rem !important; }

.mt-3 { margin-top: 1rem !important; }

.mt-4 { margin-top: 1.5rem !important; }

.mt-5 { margin-top: 3rem !important; }

.mt-auto { margin-top: auto !important; }

.me-0 { margin-right: 0px !important; }

.me-1 { margin-right: 0.25rem !important; }

.me-2 { margin-right: 0.5rem !important; }

.me-3 { margin-right: 1rem !important; }

.me-4 { margin-right: 1.5rem !important; }

.me-5 { margin-right: 3rem !important; }

.me-auto { margin-right: auto !important; }

.mb-0 { margin-bottom: 0px !important; }

.mb-1 { margin-bottom: 0.25rem !important; }

.mb-2 { margin-bottom: 0.5rem !important; }

.mb-3 { margin-bottom: 1rem !important; }

.mb-4 { margin-bottom: 1.5rem !important; }

.mb-5 { margin-bottom: 3rem !important; }

.mb-auto { margin-bottom: auto !important; }

.ms-0 { margin-left: 0px !important; }

.ms-1 { margin-left: 0.25rem !important; }

.ms-2 { margin-left: 0.5rem !important; }

.ms-3 { margin-left: 1rem !important; }

.ms-4 { margin-left: 1.5rem !important; }

.ms-5 { margin-left: 3rem !important; }

.ms-auto { margin-left: auto !important; }

.p-0 { padding: 0px !important; }

.p-1 { padding: 0.25rem !important; }

.p-2 { padding: 0.5rem !important; }

.p-3 { padding: 1rem !important; }

.p-4 { padding: 1.5rem !important; }

.p-5 { padding: 3rem !important; }

.px-0 { padding-right: 0px !important; padding-left: 0px !important; }

.px-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !important=
; }

.px-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !important; =
}

.px-3 { padding-right: 1rem !important; padding-left: 1rem !important; }

.px-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !important; =
}

.px-5 { padding-right: 3rem !important; padding-left: 3rem !important; }

.py-0 { padding-top: 0px !important; padding-bottom: 0px !important; }

.py-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !important=
; }

.py-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !important; =
}

.py-3 { padding-top: 1rem !important; padding-bottom: 1rem !important; }

.py-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !important; =
}

.py-5 { padding-top: 3rem !important; padding-bottom: 3rem !important; }

.pt-0 { padding-top: 0px !important; }

.pt-1 { padding-top: 0.25rem !important; }

.pt-2 { padding-top: 0.5rem !important; }

.pt-3 { padding-top: 1rem !important; }

.pt-4 { padding-top: 1.5rem !important; }

.pt-5 { padding-top: 3rem !important; }

.pe-0 { padding-right: 0px !important; }

.pe-1 { padding-right: 0.25rem !important; }

.pe-2 { padding-right: 0.5rem !important; }

.pe-3 { padding-right: 1rem !important; }

.pe-4 { padding-right: 1.5rem !important; }

.pe-5 { padding-right: 3rem !important; }

.pb-0 { padding-bottom: 0px !important; }

.pb-1 { padding-bottom: 0.25rem !important; }

.pb-2 { padding-bottom: 0.5rem !important; }

.pb-3 { padding-bottom: 1rem !important; }

.pb-4 { padding-bottom: 1.5rem !important; }

.pb-5 { padding-bottom: 3rem !important; }

.ps-0 { padding-left: 0px !important; }

.ps-1 { padding-left: 0.25rem !important; }

.ps-2 { padding-left: 0.5rem !important; }

.ps-3 { padding-left: 1rem !important; }

.ps-4 { padding-left: 1.5rem !important; }

.ps-5 { padding-left: 3rem !important; }

.gap-0 { gap: 0px !important; }

.gap-1 { gap: 0.25rem !important; }

.gap-2 { gap: 0.5rem !important; }

.gap-3 { gap: 1rem !important; }

.gap-4 { gap: 1.5rem !important; }

.gap-5 { gap: 3rem !important; }

.row-gap-0 { row-gap: 0px !important; }

.row-gap-1 { row-gap: 0.25rem !important; }

.row-gap-2 { row-gap: 0.5rem !important; }

.row-gap-3 { row-gap: 1rem !important; }

.row-gap-4 { row-gap: 1.5rem !important; }

.row-gap-5 { row-gap: 3rem !important; }

.column-gap-0 { column-gap: 0px !important; }

.column-gap-1 { column-gap: 0.25rem !important; }

.column-gap-2 { column-gap: 0.5rem !important; }

.column-gap-3 { column-gap: 1rem !important; }

.column-gap-4 { column-gap: 1.5rem !important; }

.column-gap-5 { column-gap: 3rem !important; }

.font-monospace { font-family: var(--bs-font-monospace) !important; }

.fs-1 { font-size: calc(1.375rem + 1.5vw) !important; }

.fs-2 { font-size: calc(1.325rem + 0.9vw) !important; }

.fs-3 { font-size: calc(1.3rem + 0.6vw) !important; }

.fs-4 { font-size: calc(1.275rem + 0.3vw) !important; }

.fs-5 { font-size: 1.25rem !important; }

.fs-6 { font-size: 1rem !important; }

.fst-italic { font-style: italic !important; }

.fst-normal { font-style: normal !important; }

.fw-lighter { font-weight: lighter !important; }

.fw-light { font-weight: 300 !important; }

.fw-normal { font-weight: 400 !important; }

.fw-medium { font-weight: 500 !important; }

.fw-semibold { font-weight: 600 !important; }

.fw-bold { font-weight: 700 !important; }

.fw-bolder { font-weight: bolder !important; }

.lh-1 { line-height: 1 !important; }

.lh-sm { line-height: 1.25 !important; }

.lh-base { line-height: 1.5 !important; }

.lh-lg { line-height: 2 !important; }

.text-start { text-align: left !important; }

.text-end { text-align: right !important; }

.text-center { text-align: center !important; }

.text-decoration-none { text-decoration: none !important; }

.text-decoration-underline { text-decoration: underline !important; }

.text-decoration-line-through { text-decoration: line-through !important; }

.text-lowercase { text-transform: lowercase !important; }

.text-uppercase { text-transform: uppercase !important; }

.text-capitalize { text-transform: capitalize !important; }

.text-wrap { white-space: normal !important; }

.text-nowrap { white-space: nowrap !important; }

.text-break { overflow-wrap: break-word !important; word-break: break-word =
!important; }

.text-primary { --bs-text-opacity: 1; color: rgba(var(--bs-primary-rgb),var=
(--bs-text-opacity)) !important; }

.text-secondary { --bs-text-opacity: 1; color: rgba(var(--bs-secondary-rgb)=
,var(--bs-text-opacity)) !important; }

.text-success { --bs-text-opacity: 1; color: rgba(var(--bs-success-rgb),var=
(--bs-text-opacity)) !important; }

.text-info { --bs-text-opacity: 1; color: rgba(var(--bs-info-rgb),var(--bs-=
text-opacity)) !important; }

.text-warning { --bs-text-opacity: 1; color: rgba(var(--bs-warning-rgb),var=
(--bs-text-opacity)) !important; }

.text-danger { --bs-text-opacity: 1; color: rgba(var(--bs-danger-rgb),var(-=
-bs-text-opacity)) !important; }

.text-light { --bs-text-opacity: 1; color: rgba(var(--bs-light-rgb),var(--b=
s-text-opacity)) !important; }

.text-dark { --bs-text-opacity: 1; color: rgba(var(--bs-dark-rgb),var(--bs-=
text-opacity)) !important; }

.text-black { --bs-text-opacity: 1; color: rgba(var(--bs-black-rgb),var(--b=
s-text-opacity)) !important; }

.text-white { --bs-text-opacity: 1; color: rgba(var(--bs-white-rgb),var(--b=
s-text-opacity)) !important; }

.text-body { --bs-text-opacity: 1; color: rgba(var(--bs-body-color-rgb),var=
(--bs-text-opacity)) !important; }

.text-muted { --bs-text-opacity: 1; color: var(--bs-secondary-color) !impor=
tant; }

.text-black-50 { --bs-text-opacity: 1; color: rgba(0, 0, 0, 0.5) !important=
; }

.text-white-50 { --bs-text-opacity: 1; color: rgba(255, 255, 255, 0.5) !imp=
ortant; }

.text-body-secondary { --bs-text-opacity: 1; color: var(--bs-secondary-colo=
r) !important; }

.text-body-tertiary { --bs-text-opacity: 1; color: var(--bs-tertiary-color)=
 !important; }

.text-body-emphasis { --bs-text-opacity: 1; color: var(--bs-emphasis-color)=
 !important; }

.text-reset { --bs-text-opacity: 1; color: inherit !important; }

.text-opacity-25 { --bs-text-opacity: 0.25; }

.text-opacity-50 { --bs-text-opacity: 0.5; }

.text-opacity-75 { --bs-text-opacity: 0.75; }

.text-opacity-100 { --bs-text-opacity: 1; }

.text-primary-emphasis { color: var(--bs-primary-text-emphasis) !important;=
 }

.text-secondary-emphasis { color: var(--bs-secondary-text-emphasis) !import=
ant; }

.text-success-emphasis { color: var(--bs-success-text-emphasis) !important;=
 }

.text-info-emphasis { color: var(--bs-info-text-emphasis) !important; }

.text-warning-emphasis { color: var(--bs-warning-text-emphasis) !important;=
 }

.text-danger-emphasis { color: var(--bs-danger-text-emphasis) !important; }

.text-light-emphasis { color: var(--bs-light-text-emphasis) !important; }

.text-dark-emphasis { color: var(--bs-dark-text-emphasis) !important; }

.link-opacity-10 { --bs-link-opacity: 0.1; }

.link-opacity-10-hover:hover { --bs-link-opacity: 0.1; }

.link-opacity-25 { --bs-link-opacity: 0.25; }

.link-opacity-25-hover:hover { --bs-link-opacity: 0.25; }

.link-opacity-50 { --bs-link-opacity: 0.5; }

.link-opacity-50-hover:hover { --bs-link-opacity: 0.5; }

.link-opacity-75 { --bs-link-opacity: 0.75; }

.link-opacity-75-hover:hover { --bs-link-opacity: 0.75; }

.link-opacity-100 { --bs-link-opacity: 1; }

.link-opacity-100-hover:hover { --bs-link-opacity: 1; }

.link-offset-1 { text-underline-offset: 0.125em !important; }

.link-offset-1-hover:hover { text-underline-offset: 0.125em !important; }

.link-offset-2 { text-underline-offset: 0.25em !important; }

.link-offset-2-hover:hover { text-underline-offset: 0.25em !important; }

.link-offset-3 { text-underline-offset: 0.375em !important; }

.link-offset-3-hover:hover { text-underline-offset: 0.375em !important; }

.link-underline-primary { --bs-link-underline-opacity: 1; text-decoration-c=
olor: rgba(var(--bs-primary-rgb),var(--bs-link-underline-opacity)) !importa=
nt; }

.link-underline-secondary { --bs-link-underline-opacity: 1; text-decoration=
-color: rgba(var(--bs-secondary-rgb),var(--bs-link-underline-opacity)) !imp=
ortant; }

.link-underline-success { --bs-link-underline-opacity: 1; text-decoration-c=
olor: rgba(var(--bs-success-rgb),var(--bs-link-underline-opacity)) !importa=
nt; }

.link-underline-info { --bs-link-underline-opacity: 1; text-decoration-colo=
r: rgba(var(--bs-info-rgb),var(--bs-link-underline-opacity)) !important; }

.link-underline-warning { --bs-link-underline-opacity: 1; text-decoration-c=
olor: rgba(var(--bs-warning-rgb),var(--bs-link-underline-opacity)) !importa=
nt; }

.link-underline-danger { --bs-link-underline-opacity: 1; text-decoration-co=
lor: rgba(var(--bs-danger-rgb),var(--bs-link-underline-opacity)) !important=
; }

.link-underline-light { --bs-link-underline-opacity: 1; text-decoration-col=
or: rgba(var(--bs-light-rgb),var(--bs-link-underline-opacity)) !important; =
}

.link-underline-dark { --bs-link-underline-opacity: 1; text-decoration-colo=
r: rgba(var(--bs-dark-rgb),var(--bs-link-underline-opacity)) !important; }

.link-underline { --bs-link-underline-opacity: 1; text-decoration-color: rg=
ba(var(--bs-link-color-rgb),var(--bs-link-underline-opacity,1)) !important;=
 }

.link-underline-opacity-0 { --bs-link-underline-opacity: 0; }

.link-underline-opacity-0-hover:hover { --bs-link-underline-opacity: 0; }

.link-underline-opacity-10 { --bs-link-underline-opacity: 0.1; }

.link-underline-opacity-10-hover:hover { --bs-link-underline-opacity: 0.1; =
}

.link-underline-opacity-25 { --bs-link-underline-opacity: 0.25; }

.link-underline-opacity-25-hover:hover { --bs-link-underline-opacity: 0.25;=
 }

.link-underline-opacity-50 { --bs-link-underline-opacity: 0.5; }

.link-underline-opacity-50-hover:hover { --bs-link-underline-opacity: 0.5; =
}

.link-underline-opacity-75 { --bs-link-underline-opacity: 0.75; }

.link-underline-opacity-75-hover:hover { --bs-link-underline-opacity: 0.75;=
 }

.link-underline-opacity-100 { --bs-link-underline-opacity: 1; }

.link-underline-opacity-100-hover:hover { --bs-link-underline-opacity: 1; }

.bg-primary { --bs-bg-opacity: 1; background-color: rgba(var(--bs-primary-r=
gb),var(--bs-bg-opacity)) !important; }

.bg-secondary { --bs-bg-opacity: 1; background-color: rgba(var(--bs-seconda=
ry-rgb),var(--bs-bg-opacity)) !important; }

.bg-success { --bs-bg-opacity: 1; background-color: rgba(var(--bs-success-r=
gb),var(--bs-bg-opacity)) !important; }

.bg-info { --bs-bg-opacity: 1; background-color: rgba(var(--bs-info-rgb),va=
r(--bs-bg-opacity)) !important; }

.bg-warning { --bs-bg-opacity: 1; background-color: rgba(var(--bs-warning-r=
gb),var(--bs-bg-opacity)) !important; }

.bg-danger { --bs-bg-opacity: 1; background-color: rgba(var(--bs-danger-rgb=
),var(--bs-bg-opacity)) !important; }

.bg-light { --bs-bg-opacity: 1; background-color: rgba(var(--bs-light-rgb),=
var(--bs-bg-opacity)) !important; }

.bg-dark { --bs-bg-opacity: 1; background-color: rgba(var(--bs-dark-rgb),va=
r(--bs-bg-opacity)) !important; }

.bg-black { --bs-bg-opacity: 1; background-color: rgba(var(--bs-black-rgb),=
var(--bs-bg-opacity)) !important; }

.bg-white { --bs-bg-opacity: 1; background-color: rgba(var(--bs-white-rgb),=
var(--bs-bg-opacity)) !important; }

.bg-body { --bs-bg-opacity: 1; background-color: rgba(var(--bs-body-bg-rgb)=
,var(--bs-bg-opacity)) !important; }

.bg-transparent { --bs-bg-opacity: 1; background-color: transparent !import=
ant; }

.bg-body-secondary { --bs-bg-opacity: 1; background-color: rgba(var(--bs-se=
condary-bg-rgb),var(--bs-bg-opacity)) !important; }

.bg-body-tertiary { --bs-bg-opacity: 1; background-color: rgba(var(--bs-ter=
tiary-bg-rgb),var(--bs-bg-opacity)) !important; }

.bg-opacity-10 { --bs-bg-opacity: 0.1; }

.bg-opacity-25 { --bs-bg-opacity: 0.25; }

.bg-opacity-50 { --bs-bg-opacity: 0.5; }

.bg-opacity-75 { --bs-bg-opacity: 0.75; }

.bg-opacity-100 { --bs-bg-opacity: 1; }

.bg-primary-subtle { background-color: var(--bs-primary-bg-subtle) !importa=
nt; }

.bg-secondary-subtle { background-color: var(--bs-secondary-bg-subtle) !imp=
ortant; }

.bg-success-subtle { background-color: var(--bs-success-bg-subtle) !importa=
nt; }

.bg-info-subtle { background-color: var(--bs-info-bg-subtle) !important; }

.bg-warning-subtle { background-color: var(--bs-warning-bg-subtle) !importa=
nt; }

.bg-danger-subtle { background-color: var(--bs-danger-bg-subtle) !important=
; }

.bg-light-subtle { background-color: var(--bs-light-bg-subtle) !important; =
}

.bg-dark-subtle { background-color: var(--bs-dark-bg-subtle) !important; }

.bg-gradient { background-image: var(--bs-gradient) !important; }

.user-select-all { user-select: all !important; }

.user-select-auto { user-select: auto !important; }

.user-select-none { user-select: none !important; }

.pe-none { pointer-events: none !important; }

.pe-auto { pointer-events: auto !important; }

.rounded { border-radius: var(--bs-border-radius) !important; }

.rounded-0 { border-radius: 0px !important; }

.rounded-1 { border-radius: var(--bs-border-radius-sm) !important; }

.rounded-2 { border-radius: var(--bs-border-radius) !important; }

.rounded-3 { border-radius: var(--bs-border-radius-lg) !important; }

.rounded-4 { border-radius: var(--bs-border-radius-xl) !important; }

.rounded-5 { border-radius: var(--bs-border-radius-xxl) !important; }

.rounded-circle { border-radius: 50% !important; }

.rounded-pill { border-radius: var(--bs-border-radius-pill) !important; }

.rounded-top { border-top-left-radius: var(--bs-border-radius) !important; =
border-top-right-radius: var(--bs-border-radius) !important; }

.rounded-top-0 { border-top-left-radius: 0px !important; border-top-right-r=
adius: 0px !important; }

.rounded-top-1 { border-top-left-radius: var(--bs-border-radius-sm) !import=
ant; border-top-right-radius: var(--bs-border-radius-sm) !important; }

.rounded-top-2 { border-top-left-radius: var(--bs-border-radius) !important=
; border-top-right-radius: var(--bs-border-radius) !important; }

.rounded-top-3 { border-top-left-radius: var(--bs-border-radius-lg) !import=
ant; border-top-right-radius: var(--bs-border-radius-lg) !important; }

.rounded-top-4 { border-top-left-radius: var(--bs-border-radius-xl) !import=
ant; border-top-right-radius: var(--bs-border-radius-xl) !important; }

.rounded-top-5 { border-top-left-radius: var(--bs-border-radius-xxl) !impor=
tant; border-top-right-radius: var(--bs-border-radius-xxl) !important; }

.rounded-top-circle { border-top-left-radius: 50% !important; border-top-ri=
ght-radius: 50% !important; }

.rounded-top-pill { border-top-left-radius: var(--bs-border-radius-pill) !i=
mportant; border-top-right-radius: var(--bs-border-radius-pill) !important;=
 }

.rounded-end { border-top-right-radius: var(--bs-border-radius) !important;=
 border-bottom-right-radius: var(--bs-border-radius) !important; }

.rounded-end-0 { border-top-right-radius: 0px !important; border-bottom-rig=
ht-radius: 0px !important; }

.rounded-end-1 { border-top-right-radius: var(--bs-border-radius-sm) !impor=
tant; border-bottom-right-radius: var(--bs-border-radius-sm) !important; }

.rounded-end-2 { border-top-right-radius: var(--bs-border-radius) !importan=
t; border-bottom-right-radius: var(--bs-border-radius) !important; }

.rounded-end-3 { border-top-right-radius: var(--bs-border-radius-lg) !impor=
tant; border-bottom-right-radius: var(--bs-border-radius-lg) !important; }

.rounded-end-4 { border-top-right-radius: var(--bs-border-radius-xl) !impor=
tant; border-bottom-right-radius: var(--bs-border-radius-xl) !important; }

.rounded-end-5 { border-top-right-radius: var(--bs-border-radius-xxl) !impo=
rtant; border-bottom-right-radius: var(--bs-border-radius-xxl) !important; =
}

.rounded-end-circle { border-top-right-radius: 50% !important; border-botto=
m-right-radius: 50% !important; }

.rounded-end-pill { border-top-right-radius: var(--bs-border-radius-pill) !=
important; border-bottom-right-radius: var(--bs-border-radius-pill) !import=
ant; }

.rounded-bottom { border-bottom-right-radius: var(--bs-border-radius) !impo=
rtant; border-bottom-left-radius: var(--bs-border-radius) !important; }

.rounded-bottom-0 { border-bottom-right-radius: 0px !important; border-bott=
om-left-radius: 0px !important; }

.rounded-bottom-1 { border-bottom-right-radius: var(--bs-border-radius-sm) =
!important; border-bottom-left-radius: var(--bs-border-radius-sm) !importan=
t; }

.rounded-bottom-2 { border-bottom-right-radius: var(--bs-border-radius) !im=
portant; border-bottom-left-radius: var(--bs-border-radius) !important; }

.rounded-bottom-3 { border-bottom-right-radius: var(--bs-border-radius-lg) =
!important; border-bottom-left-radius: var(--bs-border-radius-lg) !importan=
t; }

.rounded-bottom-4 { border-bottom-right-radius: var(--bs-border-radius-xl) =
!important; border-bottom-left-radius: var(--bs-border-radius-xl) !importan=
t; }

.rounded-bottom-5 { border-bottom-right-radius: var(--bs-border-radius-xxl)=
 !important; border-bottom-left-radius: var(--bs-border-radius-xxl) !import=
ant; }

.rounded-bottom-circle { border-bottom-right-radius: 50% !important; border=
-bottom-left-radius: 50% !important; }

.rounded-bottom-pill { border-bottom-right-radius: var(--bs-border-radius-p=
ill) !important; border-bottom-left-radius: var(--bs-border-radius-pill) !i=
mportant; }

.rounded-start { border-bottom-left-radius: var(--bs-border-radius) !import=
ant; border-top-left-radius: var(--bs-border-radius) !important; }

.rounded-start-0 { border-bottom-left-radius: 0px !important; border-top-le=
ft-radius: 0px !important; }

.rounded-start-1 { border-bottom-left-radius: var(--bs-border-radius-sm) !i=
mportant; border-top-left-radius: var(--bs-border-radius-sm) !important; }

.rounded-start-2 { border-bottom-left-radius: var(--bs-border-radius) !impo=
rtant; border-top-left-radius: var(--bs-border-radius) !important; }

.rounded-start-3 { border-bottom-left-radius: var(--bs-border-radius-lg) !i=
mportant; border-top-left-radius: var(--bs-border-radius-lg) !important; }

.rounded-start-4 { border-bottom-left-radius: var(--bs-border-radius-xl) !i=
mportant; border-top-left-radius: var(--bs-border-radius-xl) !important; }

.rounded-start-5 { border-bottom-left-radius: var(--bs-border-radius-xxl) !=
important; border-top-left-radius: var(--bs-border-radius-xxl) !important; =
}

.rounded-start-circle { border-bottom-left-radius: 50% !important; border-t=
op-left-radius: 50% !important; }

.rounded-start-pill { border-bottom-left-radius: var(--bs-border-radius-pil=
l) !important; border-top-left-radius: var(--bs-border-radius-pill) !import=
ant; }

.visible { visibility: visible !important; }

.invisible { visibility: hidden !important; }

.z-n1 { z-index: -1 !important; }

.z-0 { z-index: 0 !important; }

.z-1 { z-index: 1 !important; }

.z-2 { z-index: 2 !important; }

.z-3 { z-index: 3 !important; }

@media (min-width: 576px) {
  .float-sm-start { float: left !important; }
  .float-sm-end { float: right !important; }
  .float-sm-none { float: none !important; }
  .object-fit-sm-contain { object-fit: contain !important; }
  .object-fit-sm-cover { object-fit: cover !important; }
  .object-fit-sm-fill { object-fit: fill !important; }
  .object-fit-sm-scale { object-fit: scale-down !important; }
  .object-fit-sm-none { object-fit: none !important; }
  .d-sm-inline { display: inline !important; }
  .d-sm-inline-block { display: inline-block !important; }
  .d-sm-block { display: block !important; }
  .d-sm-grid { display: grid !important; }
  .d-sm-inline-grid { display: inline-grid !important; }
  .d-sm-table { display: table !important; }
  .d-sm-table-row { display: table-row !important; }
  .d-sm-table-cell { display: table-cell !important; }
  .d-sm-flex { display: flex !important; }
  .d-sm-inline-flex { display: inline-flex !important; }
  .d-sm-none { display: none !important; }
  .flex-sm-fill { flex: 1 1 auto !important; }
  .flex-sm-row { flex-direction: row !important; }
  .flex-sm-column { flex-direction: column !important; }
  .flex-sm-row-reverse { flex-direction: row-reverse !important; }
  .flex-sm-column-reverse { flex-direction: column-reverse !important; }
  .flex-sm-grow-0 { flex-grow: 0 !important; }
  .flex-sm-grow-1 { flex-grow: 1 !important; }
  .flex-sm-shrink-0 { flex-shrink: 0 !important; }
  .flex-sm-shrink-1 { flex-shrink: 1 !important; }
  .flex-sm-wrap { flex-wrap: wrap !important; }
  .flex-sm-nowrap { flex-wrap: nowrap !important; }
  .flex-sm-wrap-reverse { flex-wrap: wrap-reverse !important; }
  .justify-content-sm-start { justify-content: flex-start !important; }
  .justify-content-sm-end { justify-content: flex-end !important; }
  .justify-content-sm-center { justify-content: center !important; }
  .justify-content-sm-between { justify-content: space-between !important; =
}
  .justify-content-sm-around { justify-content: space-around !important; }
  .justify-content-sm-evenly { justify-content: space-evenly !important; }
  .align-items-sm-start { align-items: flex-start !important; }
  .align-items-sm-end { align-items: flex-end !important; }
  .align-items-sm-center { align-items: center !important; }
  .align-items-sm-baseline { align-items: baseline !important; }
  .align-items-sm-stretch { align-items: stretch !important; }
  .align-content-sm-start { align-content: flex-start !important; }
  .align-content-sm-end { align-content: flex-end !important; }
  .align-content-sm-center { align-content: center !important; }
  .align-content-sm-between { align-content: space-between !important; }
  .align-content-sm-around { align-content: space-around !important; }
  .align-content-sm-stretch { align-content: stretch !important; }
  .align-self-sm-auto { align-self: auto !important; }
  .align-self-sm-start { align-self: flex-start !important; }
  .align-self-sm-end { align-self: flex-end !important; }
  .align-self-sm-center { align-self: center !important; }
  .align-self-sm-baseline { align-self: baseline !important; }
  .align-self-sm-stretch { align-self: stretch !important; }
  .order-sm-first { order: -1 !important; }
  .order-sm-0 { order: 0 !important; }
  .order-sm-1 { order: 1 !important; }
  .order-sm-2 { order: 2 !important; }
  .order-sm-3 { order: 3 !important; }
  .order-sm-4 { order: 4 !important; }
  .order-sm-5 { order: 5 !important; }
  .order-sm-last { order: 6 !important; }
  .m-sm-0 { margin: 0px !important; }
  .m-sm-1 { margin: 0.25rem !important; }
  .m-sm-2 { margin: 0.5rem !important; }
  .m-sm-3 { margin: 1rem !important; }
  .m-sm-4 { margin: 1.5rem !important; }
  .m-sm-5 { margin: 3rem !important; }
  .m-sm-auto { margin: auto !important; }
  .mx-sm-0 { margin-right: 0px !important; margin-left: 0px !important; }
  .mx-sm-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !import=
ant; }
  .mx-sm-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !importan=
t; }
  .mx-sm-3 { margin-right: 1rem !important; margin-left: 1rem !important; }
  .mx-sm-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !importan=
t; }
  .mx-sm-5 { margin-right: 3rem !important; margin-left: 3rem !important; }
  .mx-sm-auto { margin-right: auto !important; margin-left: auto !important=
; }
  .my-sm-0 { margin-top: 0px !important; margin-bottom: 0px !important; }
  .my-sm-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !import=
ant; }
  .my-sm-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !importan=
t; }
  .my-sm-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; }
  .my-sm-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !importan=
t; }
  .my-sm-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; }
  .my-sm-auto { margin-top: auto !important; margin-bottom: auto !important=
; }
  .mt-sm-0 { margin-top: 0px !important; }
  .mt-sm-1 { margin-top: 0.25rem !important; }
  .mt-sm-2 { margin-top: 0.5rem !important; }
  .mt-sm-3 { margin-top: 1rem !important; }
  .mt-sm-4 { margin-top: 1.5rem !important; }
  .mt-sm-5 { margin-top: 3rem !important; }
  .mt-sm-auto { margin-top: auto !important; }
  .me-sm-0 { margin-right: 0px !important; }
  .me-sm-1 { margin-right: 0.25rem !important; }
  .me-sm-2 { margin-right: 0.5rem !important; }
  .me-sm-3 { margin-right: 1rem !important; }
  .me-sm-4 { margin-right: 1.5rem !important; }
  .me-sm-5 { margin-right: 3rem !important; }
  .me-sm-auto { margin-right: auto !important; }
  .mb-sm-0 { margin-bottom: 0px !important; }
  .mb-sm-1 { margin-bottom: 0.25rem !important; }
  .mb-sm-2 { margin-bottom: 0.5rem !important; }
  .mb-sm-3 { margin-bottom: 1rem !important; }
  .mb-sm-4 { margin-bottom: 1.5rem !important; }
  .mb-sm-5 { margin-bottom: 3rem !important; }
  .mb-sm-auto { margin-bottom: auto !important; }
  .ms-sm-0 { margin-left: 0px !important; }
  .ms-sm-1 { margin-left: 0.25rem !important; }
  .ms-sm-2 { margin-left: 0.5rem !important; }
  .ms-sm-3 { margin-left: 1rem !important; }
  .ms-sm-4 { margin-left: 1.5rem !important; }
  .ms-sm-5 { margin-left: 3rem !important; }
  .ms-sm-auto { margin-left: auto !important; }
  .p-sm-0 { padding: 0px !important; }
  .p-sm-1 { padding: 0.25rem !important; }
  .p-sm-2 { padding: 0.5rem !important; }
  .p-sm-3 { padding: 1rem !important; }
  .p-sm-4 { padding: 1.5rem !important; }
  .p-sm-5 { padding: 3rem !important; }
  .px-sm-0 { padding-right: 0px !important; padding-left: 0px !important; }
  .px-sm-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !impo=
rtant; }
  .px-sm-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !import=
ant; }
  .px-sm-3 { padding-right: 1rem !important; padding-left: 1rem !important;=
 }
  .px-sm-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !import=
ant; }
  .px-sm-5 { padding-right: 3rem !important; padding-left: 3rem !important;=
 }
  .py-sm-0 { padding-top: 0px !important; padding-bottom: 0px !important; }
  .py-sm-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !impo=
rtant; }
  .py-sm-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !import=
ant; }
  .py-sm-3 { padding-top: 1rem !important; padding-bottom: 1rem !important;=
 }
  .py-sm-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !import=
ant; }
  .py-sm-5 { padding-top: 3rem !important; padding-bottom: 3rem !important;=
 }
  .pt-sm-0 { padding-top: 0px !important; }
  .pt-sm-1 { padding-top: 0.25rem !important; }
  .pt-sm-2 { padding-top: 0.5rem !important; }
  .pt-sm-3 { padding-top: 1rem !important; }
  .pt-sm-4 { padding-top: 1.5rem !important; }
  .pt-sm-5 { padding-top: 3rem !important; }
  .pe-sm-0 { padding-right: 0px !important; }
  .pe-sm-1 { padding-right: 0.25rem !important; }
  .pe-sm-2 { padding-right: 0.5rem !important; }
  .pe-sm-3 { padding-right: 1rem !important; }
  .pe-sm-4 { padding-right: 1.5rem !important; }
  .pe-sm-5 { padding-right: 3rem !important; }
  .pb-sm-0 { padding-bottom: 0px !important; }
  .pb-sm-1 { padding-bottom: 0.25rem !important; }
  .pb-sm-2 { padding-bottom: 0.5rem !important; }
  .pb-sm-3 { padding-bottom: 1rem !important; }
  .pb-sm-4 { padding-bottom: 1.5rem !important; }
  .pb-sm-5 { padding-bottom: 3rem !important; }
  .ps-sm-0 { padding-left: 0px !important; }
  .ps-sm-1 { padding-left: 0.25rem !important; }
  .ps-sm-2 { padding-left: 0.5rem !important; }
  .ps-sm-3 { padding-left: 1rem !important; }
  .ps-sm-4 { padding-left: 1.5rem !important; }
  .ps-sm-5 { padding-left: 3rem !important; }
  .gap-sm-0 { gap: 0px !important; }
  .gap-sm-1 { gap: 0.25rem !important; }
  .gap-sm-2 { gap: 0.5rem !important; }
  .gap-sm-3 { gap: 1rem !important; }
  .gap-sm-4 { gap: 1.5rem !important; }
  .gap-sm-5 { gap: 3rem !important; }
  .row-gap-sm-0 { row-gap: 0px !important; }
  .row-gap-sm-1 { row-gap: 0.25rem !important; }
  .row-gap-sm-2 { row-gap: 0.5rem !important; }
  .row-gap-sm-3 { row-gap: 1rem !important; }
  .row-gap-sm-4 { row-gap: 1.5rem !important; }
  .row-gap-sm-5 { row-gap: 3rem !important; }
  .column-gap-sm-0 { column-gap: 0px !important; }
  .column-gap-sm-1 { column-gap: 0.25rem !important; }
  .column-gap-sm-2 { column-gap: 0.5rem !important; }
  .column-gap-sm-3 { column-gap: 1rem !important; }
  .column-gap-sm-4 { column-gap: 1.5rem !important; }
  .column-gap-sm-5 { column-gap: 3rem !important; }
  .text-sm-start { text-align: left !important; }
  .text-sm-end { text-align: right !important; }
  .text-sm-center { text-align: center !important; }
}

@media (min-width: 768px) {
  .float-md-start { float: left !important; }
  .float-md-end { float: right !important; }
  .float-md-none { float: none !important; }
  .object-fit-md-contain { object-fit: contain !important; }
  .object-fit-md-cover { object-fit: cover !important; }
  .object-fit-md-fill { object-fit: fill !important; }
  .object-fit-md-scale { object-fit: scale-down !important; }
  .object-fit-md-none { object-fit: none !important; }
  .d-md-inline { display: inline !important; }
  .d-md-inline-block { display: inline-block !important; }
  .d-md-block { display: block !important; }
  .d-md-grid { display: grid !important; }
  .d-md-inline-grid { display: inline-grid !important; }
  .d-md-table { display: table !important; }
  .d-md-table-row { display: table-row !important; }
  .d-md-table-cell { display: table-cell !important; }
  .d-md-flex { display: flex !important; }
  .d-md-inline-flex { display: inline-flex !important; }
  .d-md-none { display: none !important; }
  .flex-md-fill { flex: 1 1 auto !important; }
  .flex-md-row { flex-direction: row !important; }
  .flex-md-column { flex-direction: column !important; }
  .flex-md-row-reverse { flex-direction: row-reverse !important; }
  .flex-md-column-reverse { flex-direction: column-reverse !important; }
  .flex-md-grow-0 { flex-grow: 0 !important; }
  .flex-md-grow-1 { flex-grow: 1 !important; }
  .flex-md-shrink-0 { flex-shrink: 0 !important; }
  .flex-md-shrink-1 { flex-shrink: 1 !important; }
  .flex-md-wrap { flex-wrap: wrap !important; }
  .flex-md-nowrap { flex-wrap: nowrap !important; }
  .flex-md-wrap-reverse { flex-wrap: wrap-reverse !important; }
  .justify-content-md-start { justify-content: flex-start !important; }
  .justify-content-md-end { justify-content: flex-end !important; }
  .justify-content-md-center { justify-content: center !important; }
  .justify-content-md-between { justify-content: space-between !important; =
}
  .justify-content-md-around { justify-content: space-around !important; }
  .justify-content-md-evenly { justify-content: space-evenly !important; }
  .align-items-md-start { align-items: flex-start !important; }
  .align-items-md-end { align-items: flex-end !important; }
  .align-items-md-center { align-items: center !important; }
  .align-items-md-baseline { align-items: baseline !important; }
  .align-items-md-stretch { align-items: stretch !important; }
  .align-content-md-start { align-content: flex-start !important; }
  .align-content-md-end { align-content: flex-end !important; }
  .align-content-md-center { align-content: center !important; }
  .align-content-md-between { align-content: space-between !important; }
  .align-content-md-around { align-content: space-around !important; }
  .align-content-md-stretch { align-content: stretch !important; }
  .align-self-md-auto { align-self: auto !important; }
  .align-self-md-start { align-self: flex-start !important; }
  .align-self-md-end { align-self: flex-end !important; }
  .align-self-md-center { align-self: center !important; }
  .align-self-md-baseline { align-self: baseline !important; }
  .align-self-md-stretch { align-self: stretch !important; }
  .order-md-first { order: -1 !important; }
  .order-md-0 { order: 0 !important; }
  .order-md-1 { order: 1 !important; }
  .order-md-2 { order: 2 !important; }
  .order-md-3 { order: 3 !important; }
  .order-md-4 { order: 4 !important; }
  .order-md-5 { order: 5 !important; }
  .order-md-last { order: 6 !important; }
  .m-md-0 { margin: 0px !important; }
  .m-md-1 { margin: 0.25rem !important; }
  .m-md-2 { margin: 0.5rem !important; }
  .m-md-3 { margin: 1rem !important; }
  .m-md-4 { margin: 1.5rem !important; }
  .m-md-5 { margin: 3rem !important; }
  .m-md-auto { margin: auto !important; }
  .mx-md-0 { margin-right: 0px !important; margin-left: 0px !important; }
  .mx-md-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !import=
ant; }
  .mx-md-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !importan=
t; }
  .mx-md-3 { margin-right: 1rem !important; margin-left: 1rem !important; }
  .mx-md-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !importan=
t; }
  .mx-md-5 { margin-right: 3rem !important; margin-left: 3rem !important; }
  .mx-md-auto { margin-right: auto !important; margin-left: auto !important=
; }
  .my-md-0 { margin-top: 0px !important; margin-bottom: 0px !important; }
  .my-md-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !import=
ant; }
  .my-md-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !importan=
t; }
  .my-md-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; }
  .my-md-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !importan=
t; }
  .my-md-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; }
  .my-md-auto { margin-top: auto !important; margin-bottom: auto !important=
; }
  .mt-md-0 { margin-top: 0px !important; }
  .mt-md-1 { margin-top: 0.25rem !important; }
  .mt-md-2 { margin-top: 0.5rem !important; }
  .mt-md-3 { margin-top: 1rem !important; }
  .mt-md-4 { margin-top: 1.5rem !important; }
  .mt-md-5 { margin-top: 3rem !important; }
  .mt-md-auto { margin-top: auto !important; }
  .me-md-0 { margin-right: 0px !important; }
  .me-md-1 { margin-right: 0.25rem !important; }
  .me-md-2 { margin-right: 0.5rem !important; }
  .me-md-3 { margin-right: 1rem !important; }
  .me-md-4 { margin-right: 1.5rem !important; }
  .me-md-5 { margin-right: 3rem !important; }
  .me-md-auto { margin-right: auto !important; }
  .mb-md-0 { margin-bottom: 0px !important; }
  .mb-md-1 { margin-bottom: 0.25rem !important; }
  .mb-md-2 { margin-bottom: 0.5rem !important; }
  .mb-md-3 { margin-bottom: 1rem !important; }
  .mb-md-4 { margin-bottom: 1.5rem !important; }
  .mb-md-5 { margin-bottom: 3rem !important; }
  .mb-md-auto { margin-bottom: auto !important; }
  .ms-md-0 { margin-left: 0px !important; }
  .ms-md-1 { margin-left: 0.25rem !important; }
  .ms-md-2 { margin-left: 0.5rem !important; }
  .ms-md-3 { margin-left: 1rem !important; }
  .ms-md-4 { margin-left: 1.5rem !important; }
  .ms-md-5 { margin-left: 3rem !important; }
  .ms-md-auto { margin-left: auto !important; }
  .p-md-0 { padding: 0px !important; }
  .p-md-1 { padding: 0.25rem !important; }
  .p-md-2 { padding: 0.5rem !important; }
  .p-md-3 { padding: 1rem !important; }
  .p-md-4 { padding: 1.5rem !important; }
  .p-md-5 { padding: 3rem !important; }
  .px-md-0 { padding-right: 0px !important; padding-left: 0px !important; }
  .px-md-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !impo=
rtant; }
  .px-md-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !import=
ant; }
  .px-md-3 { padding-right: 1rem !important; padding-left: 1rem !important;=
 }
  .px-md-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !import=
ant; }
  .px-md-5 { padding-right: 3rem !important; padding-left: 3rem !important;=
 }
  .py-md-0 { padding-top: 0px !important; padding-bottom: 0px !important; }
  .py-md-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !impo=
rtant; }
  .py-md-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !import=
ant; }
  .py-md-3 { padding-top: 1rem !important; padding-bottom: 1rem !important;=
 }
  .py-md-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !import=
ant; }
  .py-md-5 { padding-top: 3rem !important; padding-bottom: 3rem !important;=
 }
  .pt-md-0 { padding-top: 0px !important; }
  .pt-md-1 { padding-top: 0.25rem !important; }
  .pt-md-2 { padding-top: 0.5rem !important; }
  .pt-md-3 { padding-top: 1rem !important; }
  .pt-md-4 { padding-top: 1.5rem !important; }
  .pt-md-5 { padding-top: 3rem !important; }
  .pe-md-0 { padding-right: 0px !important; }
  .pe-md-1 { padding-right: 0.25rem !important; }
  .pe-md-2 { padding-right: 0.5rem !important; }
  .pe-md-3 { padding-right: 1rem !important; }
  .pe-md-4 { padding-right: 1.5rem !important; }
  .pe-md-5 { padding-right: 3rem !important; }
  .pb-md-0 { padding-bottom: 0px !important; }
  .pb-md-1 { padding-bottom: 0.25rem !important; }
  .pb-md-2 { padding-bottom: 0.5rem !important; }
  .pb-md-3 { padding-bottom: 1rem !important; }
  .pb-md-4 { padding-bottom: 1.5rem !important; }
  .pb-md-5 { padding-bottom: 3rem !important; }
  .ps-md-0 { padding-left: 0px !important; }
  .ps-md-1 { padding-left: 0.25rem !important; }
  .ps-md-2 { padding-left: 0.5rem !important; }
  .ps-md-3 { padding-left: 1rem !important; }
  .ps-md-4 { padding-left: 1.5rem !important; }
  .ps-md-5 { padding-left: 3rem !important; }
  .gap-md-0 { gap: 0px !important; }
  .gap-md-1 { gap: 0.25rem !important; }
  .gap-md-2 { gap: 0.5rem !important; }
  .gap-md-3 { gap: 1rem !important; }
  .gap-md-4 { gap: 1.5rem !important; }
  .gap-md-5 { gap: 3rem !important; }
  .row-gap-md-0 { row-gap: 0px !important; }
  .row-gap-md-1 { row-gap: 0.25rem !important; }
  .row-gap-md-2 { row-gap: 0.5rem !important; }
  .row-gap-md-3 { row-gap: 1rem !important; }
  .row-gap-md-4 { row-gap: 1.5rem !important; }
  .row-gap-md-5 { row-gap: 3rem !important; }
  .column-gap-md-0 { column-gap: 0px !important; }
  .column-gap-md-1 { column-gap: 0.25rem !important; }
  .column-gap-md-2 { column-gap: 0.5rem !important; }
  .column-gap-md-3 { column-gap: 1rem !important; }
  .column-gap-md-4 { column-gap: 1.5rem !important; }
  .column-gap-md-5 { column-gap: 3rem !important; }
  .text-md-start { text-align: left !important; }
  .text-md-end { text-align: right !important; }
  .text-md-center { text-align: center !important; }
}

@media (min-width: 992px) {
  .float-lg-start { float: left !important; }
  .float-lg-end { float: right !important; }
  .float-lg-none { float: none !important; }
  .object-fit-lg-contain { object-fit: contain !important; }
  .object-fit-lg-cover { object-fit: cover !important; }
  .object-fit-lg-fill { object-fit: fill !important; }
  .object-fit-lg-scale { object-fit: scale-down !important; }
  .object-fit-lg-none { object-fit: none !important; }
  .d-lg-inline { display: inline !important; }
  .d-lg-inline-block { display: inline-block !important; }
  .d-lg-block { display: block !important; }
  .d-lg-grid { display: grid !important; }
  .d-lg-inline-grid { display: inline-grid !important; }
  .d-lg-table { display: table !important; }
  .d-lg-table-row { display: table-row !important; }
  .d-lg-table-cell { display: table-cell !important; }
  .d-lg-flex { display: flex !important; }
  .d-lg-inline-flex { display: inline-flex !important; }
  .d-lg-none { display: none !important; }
  .flex-lg-fill { flex: 1 1 auto !important; }
  .flex-lg-row { flex-direction: row !important; }
  .flex-lg-column { flex-direction: column !important; }
  .flex-lg-row-reverse { flex-direction: row-reverse !important; }
  .flex-lg-column-reverse { flex-direction: column-reverse !important; }
  .flex-lg-grow-0 { flex-grow: 0 !important; }
  .flex-lg-grow-1 { flex-grow: 1 !important; }
  .flex-lg-shrink-0 { flex-shrink: 0 !important; }
  .flex-lg-shrink-1 { flex-shrink: 1 !important; }
  .flex-lg-wrap { flex-wrap: wrap !important; }
  .flex-lg-nowrap { flex-wrap: nowrap !important; }
  .flex-lg-wrap-reverse { flex-wrap: wrap-reverse !important; }
  .justify-content-lg-start { justify-content: flex-start !important; }
  .justify-content-lg-end { justify-content: flex-end !important; }
  .justify-content-lg-center { justify-content: center !important; }
  .justify-content-lg-between { justify-content: space-between !important; =
}
  .justify-content-lg-around { justify-content: space-around !important; }
  .justify-content-lg-evenly { justify-content: space-evenly !important; }
  .align-items-lg-start { align-items: flex-start !important; }
  .align-items-lg-end { align-items: flex-end !important; }
  .align-items-lg-center { align-items: center !important; }
  .align-items-lg-baseline { align-items: baseline !important; }
  .align-items-lg-stretch { align-items: stretch !important; }
  .align-content-lg-start { align-content: flex-start !important; }
  .align-content-lg-end { align-content: flex-end !important; }
  .align-content-lg-center { align-content: center !important; }
  .align-content-lg-between { align-content: space-between !important; }
  .align-content-lg-around { align-content: space-around !important; }
  .align-content-lg-stretch { align-content: stretch !important; }
  .align-self-lg-auto { align-self: auto !important; }
  .align-self-lg-start { align-self: flex-start !important; }
  .align-self-lg-end { align-self: flex-end !important; }
  .align-self-lg-center { align-self: center !important; }
  .align-self-lg-baseline { align-self: baseline !important; }
  .align-self-lg-stretch { align-self: stretch !important; }
  .order-lg-first { order: -1 !important; }
  .order-lg-0 { order: 0 !important; }
  .order-lg-1 { order: 1 !important; }
  .order-lg-2 { order: 2 !important; }
  .order-lg-3 { order: 3 !important; }
  .order-lg-4 { order: 4 !important; }
  .order-lg-5 { order: 5 !important; }
  .order-lg-last { order: 6 !important; }
  .m-lg-0 { margin: 0px !important; }
  .m-lg-1 { margin: 0.25rem !important; }
  .m-lg-2 { margin: 0.5rem !important; }
  .m-lg-3 { margin: 1rem !important; }
  .m-lg-4 { margin: 1.5rem !important; }
  .m-lg-5 { margin: 3rem !important; }
  .m-lg-auto { margin: auto !important; }
  .mx-lg-0 { margin-right: 0px !important; margin-left: 0px !important; }
  .mx-lg-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !import=
ant; }
  .mx-lg-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !importan=
t; }
  .mx-lg-3 { margin-right: 1rem !important; margin-left: 1rem !important; }
  .mx-lg-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !importan=
t; }
  .mx-lg-5 { margin-right: 3rem !important; margin-left: 3rem !important; }
  .mx-lg-auto { margin-right: auto !important; margin-left: auto !important=
; }
  .my-lg-0 { margin-top: 0px !important; margin-bottom: 0px !important; }
  .my-lg-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !import=
ant; }
  .my-lg-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !importan=
t; }
  .my-lg-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; }
  .my-lg-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !importan=
t; }
  .my-lg-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; }
  .my-lg-auto { margin-top: auto !important; margin-bottom: auto !important=
; }
  .mt-lg-0 { margin-top: 0px !important; }
  .mt-lg-1 { margin-top: 0.25rem !important; }
  .mt-lg-2 { margin-top: 0.5rem !important; }
  .mt-lg-3 { margin-top: 1rem !important; }
  .mt-lg-4 { margin-top: 1.5rem !important; }
  .mt-lg-5 { margin-top: 3rem !important; }
  .mt-lg-auto { margin-top: auto !important; }
  .me-lg-0 { margin-right: 0px !important; }
  .me-lg-1 { margin-right: 0.25rem !important; }
  .me-lg-2 { margin-right: 0.5rem !important; }
  .me-lg-3 { margin-right: 1rem !important; }
  .me-lg-4 { margin-right: 1.5rem !important; }
  .me-lg-5 { margin-right: 3rem !important; }
  .me-lg-auto { margin-right: auto !important; }
  .mb-lg-0 { margin-bottom: 0px !important; }
  .mb-lg-1 { margin-bottom: 0.25rem !important; }
  .mb-lg-2 { margin-bottom: 0.5rem !important; }
  .mb-lg-3 { margin-bottom: 1rem !important; }
  .mb-lg-4 { margin-bottom: 1.5rem !important; }
  .mb-lg-5 { margin-bottom: 3rem !important; }
  .mb-lg-auto { margin-bottom: auto !important; }
  .ms-lg-0 { margin-left: 0px !important; }
  .ms-lg-1 { margin-left: 0.25rem !important; }
  .ms-lg-2 { margin-left: 0.5rem !important; }
  .ms-lg-3 { margin-left: 1rem !important; }
  .ms-lg-4 { margin-left: 1.5rem !important; }
  .ms-lg-5 { margin-left: 3rem !important; }
  .ms-lg-auto { margin-left: auto !important; }
  .p-lg-0 { padding: 0px !important; }
  .p-lg-1 { padding: 0.25rem !important; }
  .p-lg-2 { padding: 0.5rem !important; }
  .p-lg-3 { padding: 1rem !important; }
  .p-lg-4 { padding: 1.5rem !important; }
  .p-lg-5 { padding: 3rem !important; }
  .px-lg-0 { padding-right: 0px !important; padding-left: 0px !important; }
  .px-lg-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !impo=
rtant; }
  .px-lg-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !import=
ant; }
  .px-lg-3 { padding-right: 1rem !important; padding-left: 1rem !important;=
 }
  .px-lg-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !import=
ant; }
  .px-lg-5 { padding-right: 3rem !important; padding-left: 3rem !important;=
 }
  .py-lg-0 { padding-top: 0px !important; padding-bottom: 0px !important; }
  .py-lg-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !impo=
rtant; }
  .py-lg-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !import=
ant; }
  .py-lg-3 { padding-top: 1rem !important; padding-bottom: 1rem !important;=
 }
  .py-lg-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !import=
ant; }
  .py-lg-5 { padding-top: 3rem !important; padding-bottom: 3rem !important;=
 }
  .pt-lg-0 { padding-top: 0px !important; }
  .pt-lg-1 { padding-top: 0.25rem !important; }
  .pt-lg-2 { padding-top: 0.5rem !important; }
  .pt-lg-3 { padding-top: 1rem !important; }
  .pt-lg-4 { padding-top: 1.5rem !important; }
  .pt-lg-5 { padding-top: 3rem !important; }
  .pe-lg-0 { padding-right: 0px !important; }
  .pe-lg-1 { padding-right: 0.25rem !important; }
  .pe-lg-2 { padding-right: 0.5rem !important; }
  .pe-lg-3 { padding-right: 1rem !important; }
  .pe-lg-4 { padding-right: 1.5rem !important; }
  .pe-lg-5 { padding-right: 3rem !important; }
  .pb-lg-0 { padding-bottom: 0px !important; }
  .pb-lg-1 { padding-bottom: 0.25rem !important; }
  .pb-lg-2 { padding-bottom: 0.5rem !important; }
  .pb-lg-3 { padding-bottom: 1rem !important; }
  .pb-lg-4 { padding-bottom: 1.5rem !important; }
  .pb-lg-5 { padding-bottom: 3rem !important; }
  .ps-lg-0 { padding-left: 0px !important; }
  .ps-lg-1 { padding-left: 0.25rem !important; }
  .ps-lg-2 { padding-left: 0.5rem !important; }
  .ps-lg-3 { padding-left: 1rem !important; }
  .ps-lg-4 { padding-left: 1.5rem !important; }
  .ps-lg-5 { padding-left: 3rem !important; }
  .gap-lg-0 { gap: 0px !important; }
  .gap-lg-1 { gap: 0.25rem !important; }
  .gap-lg-2 { gap: 0.5rem !important; }
  .gap-lg-3 { gap: 1rem !important; }
  .gap-lg-4 { gap: 1.5rem !important; }
  .gap-lg-5 { gap: 3rem !important; }
  .row-gap-lg-0 { row-gap: 0px !important; }
  .row-gap-lg-1 { row-gap: 0.25rem !important; }
  .row-gap-lg-2 { row-gap: 0.5rem !important; }
  .row-gap-lg-3 { row-gap: 1rem !important; }
  .row-gap-lg-4 { row-gap: 1.5rem !important; }
  .row-gap-lg-5 { row-gap: 3rem !important; }
  .column-gap-lg-0 { column-gap: 0px !important; }
  .column-gap-lg-1 { column-gap: 0.25rem !important; }
  .column-gap-lg-2 { column-gap: 0.5rem !important; }
  .column-gap-lg-3 { column-gap: 1rem !important; }
  .column-gap-lg-4 { column-gap: 1.5rem !important; }
  .column-gap-lg-5 { column-gap: 3rem !important; }
  .text-lg-start { text-align: left !important; }
  .text-lg-end { text-align: right !important; }
  .text-lg-center { text-align: center !important; }
}

@media (min-width: 1200px) {
  .float-xl-start { float: left !important; }
  .float-xl-end { float: right !important; }
  .float-xl-none { float: none !important; }
  .object-fit-xl-contain { object-fit: contain !important; }
  .object-fit-xl-cover { object-fit: cover !important; }
  .object-fit-xl-fill { object-fit: fill !important; }
  .object-fit-xl-scale { object-fit: scale-down !important; }
  .object-fit-xl-none { object-fit: none !important; }
  .d-xl-inline { display: inline !important; }
  .d-xl-inline-block { display: inline-block !important; }
  .d-xl-block { display: block !important; }
  .d-xl-grid { display: grid !important; }
  .d-xl-inline-grid { display: inline-grid !important; }
  .d-xl-table { display: table !important; }
  .d-xl-table-row { display: table-row !important; }
  .d-xl-table-cell { display: table-cell !important; }
  .d-xl-flex { display: flex !important; }
  .d-xl-inline-flex { display: inline-flex !important; }
  .d-xl-none { display: none !important; }
  .flex-xl-fill { flex: 1 1 auto !important; }
  .flex-xl-row { flex-direction: row !important; }
  .flex-xl-column { flex-direction: column !important; }
  .flex-xl-row-reverse { flex-direction: row-reverse !important; }
  .flex-xl-column-reverse { flex-direction: column-reverse !important; }
  .flex-xl-grow-0 { flex-grow: 0 !important; }
  .flex-xl-grow-1 { flex-grow: 1 !important; }
  .flex-xl-shrink-0 { flex-shrink: 0 !important; }
  .flex-xl-shrink-1 { flex-shrink: 1 !important; }
  .flex-xl-wrap { flex-wrap: wrap !important; }
  .flex-xl-nowrap { flex-wrap: nowrap !important; }
  .flex-xl-wrap-reverse { flex-wrap: wrap-reverse !important; }
  .justify-content-xl-start { justify-content: flex-start !important; }
  .justify-content-xl-end { justify-content: flex-end !important; }
  .justify-content-xl-center { justify-content: center !important; }
  .justify-content-xl-between { justify-content: space-between !important; =
}
  .justify-content-xl-around { justify-content: space-around !important; }
  .justify-content-xl-evenly { justify-content: space-evenly !important; }
  .align-items-xl-start { align-items: flex-start !important; }
  .align-items-xl-end { align-items: flex-end !important; }
  .align-items-xl-center { align-items: center !important; }
  .align-items-xl-baseline { align-items: baseline !important; }
  .align-items-xl-stretch { align-items: stretch !important; }
  .align-content-xl-start { align-content: flex-start !important; }
  .align-content-xl-end { align-content: flex-end !important; }
  .align-content-xl-center { align-content: center !important; }
  .align-content-xl-between { align-content: space-between !important; }
  .align-content-xl-around { align-content: space-around !important; }
  .align-content-xl-stretch { align-content: stretch !important; }
  .align-self-xl-auto { align-self: auto !important; }
  .align-self-xl-start { align-self: flex-start !important; }
  .align-self-xl-end { align-self: flex-end !important; }
  .align-self-xl-center { align-self: center !important; }
  .align-self-xl-baseline { align-self: baseline !important; }
  .align-self-xl-stretch { align-self: stretch !important; }
  .order-xl-first { order: -1 !important; }
  .order-xl-0 { order: 0 !important; }
  .order-xl-1 { order: 1 !important; }
  .order-xl-2 { order: 2 !important; }
  .order-xl-3 { order: 3 !important; }
  .order-xl-4 { order: 4 !important; }
  .order-xl-5 { order: 5 !important; }
  .order-xl-last { order: 6 !important; }
  .m-xl-0 { margin: 0px !important; }
  .m-xl-1 { margin: 0.25rem !important; }
  .m-xl-2 { margin: 0.5rem !important; }
  .m-xl-3 { margin: 1rem !important; }
  .m-xl-4 { margin: 1.5rem !important; }
  .m-xl-5 { margin: 3rem !important; }
  .m-xl-auto { margin: auto !important; }
  .mx-xl-0 { margin-right: 0px !important; margin-left: 0px !important; }
  .mx-xl-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !import=
ant; }
  .mx-xl-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !importan=
t; }
  .mx-xl-3 { margin-right: 1rem !important; margin-left: 1rem !important; }
  .mx-xl-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !importan=
t; }
  .mx-xl-5 { margin-right: 3rem !important; margin-left: 3rem !important; }
  .mx-xl-auto { margin-right: auto !important; margin-left: auto !important=
; }
  .my-xl-0 { margin-top: 0px !important; margin-bottom: 0px !important; }
  .my-xl-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !import=
ant; }
  .my-xl-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !importan=
t; }
  .my-xl-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; }
  .my-xl-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !importan=
t; }
  .my-xl-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; }
  .my-xl-auto { margin-top: auto !important; margin-bottom: auto !important=
; }
  .mt-xl-0 { margin-top: 0px !important; }
  .mt-xl-1 { margin-top: 0.25rem !important; }
  .mt-xl-2 { margin-top: 0.5rem !important; }
  .mt-xl-3 { margin-top: 1rem !important; }
  .mt-xl-4 { margin-top: 1.5rem !important; }
  .mt-xl-5 { margin-top: 3rem !important; }
  .mt-xl-auto { margin-top: auto !important; }
  .me-xl-0 { margin-right: 0px !important; }
  .me-xl-1 { margin-right: 0.25rem !important; }
  .me-xl-2 { margin-right: 0.5rem !important; }
  .me-xl-3 { margin-right: 1rem !important; }
  .me-xl-4 { margin-right: 1.5rem !important; }
  .me-xl-5 { margin-right: 3rem !important; }
  .me-xl-auto { margin-right: auto !important; }
  .mb-xl-0 { margin-bottom: 0px !important; }
  .mb-xl-1 { margin-bottom: 0.25rem !important; }
  .mb-xl-2 { margin-bottom: 0.5rem !important; }
  .mb-xl-3 { margin-bottom: 1rem !important; }
  .mb-xl-4 { margin-bottom: 1.5rem !important; }
  .mb-xl-5 { margin-bottom: 3rem !important; }
  .mb-xl-auto { margin-bottom: auto !important; }
  .ms-xl-0 { margin-left: 0px !important; }
  .ms-xl-1 { margin-left: 0.25rem !important; }
  .ms-xl-2 { margin-left: 0.5rem !important; }
  .ms-xl-3 { margin-left: 1rem !important; }
  .ms-xl-4 { margin-left: 1.5rem !important; }
  .ms-xl-5 { margin-left: 3rem !important; }
  .ms-xl-auto { margin-left: auto !important; }
  .p-xl-0 { padding: 0px !important; }
  .p-xl-1 { padding: 0.25rem !important; }
  .p-xl-2 { padding: 0.5rem !important; }
  .p-xl-3 { padding: 1rem !important; }
  .p-xl-4 { padding: 1.5rem !important; }
  .p-xl-5 { padding: 3rem !important; }
  .px-xl-0 { padding-right: 0px !important; padding-left: 0px !important; }
  .px-xl-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !impo=
rtant; }
  .px-xl-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !import=
ant; }
  .px-xl-3 { padding-right: 1rem !important; padding-left: 1rem !important;=
 }
  .px-xl-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !import=
ant; }
  .px-xl-5 { padding-right: 3rem !important; padding-left: 3rem !important;=
 }
  .py-xl-0 { padding-top: 0px !important; padding-bottom: 0px !important; }
  .py-xl-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !impo=
rtant; }
  .py-xl-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !import=
ant; }
  .py-xl-3 { padding-top: 1rem !important; padding-bottom: 1rem !important;=
 }
  .py-xl-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !import=
ant; }
  .py-xl-5 { padding-top: 3rem !important; padding-bottom: 3rem !important;=
 }
  .pt-xl-0 { padding-top: 0px !important; }
  .pt-xl-1 { padding-top: 0.25rem !important; }
  .pt-xl-2 { padding-top: 0.5rem !important; }
  .pt-xl-3 { padding-top: 1rem !important; }
  .pt-xl-4 { padding-top: 1.5rem !important; }
  .pt-xl-5 { padding-top: 3rem !important; }
  .pe-xl-0 { padding-right: 0px !important; }
  .pe-xl-1 { padding-right: 0.25rem !important; }
  .pe-xl-2 { padding-right: 0.5rem !important; }
  .pe-xl-3 { padding-right: 1rem !important; }
  .pe-xl-4 { padding-right: 1.5rem !important; }
  .pe-xl-5 { padding-right: 3rem !important; }
  .pb-xl-0 { padding-bottom: 0px !important; }
  .pb-xl-1 { padding-bottom: 0.25rem !important; }
  .pb-xl-2 { padding-bottom: 0.5rem !important; }
  .pb-xl-3 { padding-bottom: 1rem !important; }
  .pb-xl-4 { padding-bottom: 1.5rem !important; }
  .pb-xl-5 { padding-bottom: 3rem !important; }
  .ps-xl-0 { padding-left: 0px !important; }
  .ps-xl-1 { padding-left: 0.25rem !important; }
  .ps-xl-2 { padding-left: 0.5rem !important; }
  .ps-xl-3 { padding-left: 1rem !important; }
  .ps-xl-4 { padding-left: 1.5rem !important; }
  .ps-xl-5 { padding-left: 3rem !important; }
  .gap-xl-0 { gap: 0px !important; }
  .gap-xl-1 { gap: 0.25rem !important; }
  .gap-xl-2 { gap: 0.5rem !important; }
  .gap-xl-3 { gap: 1rem !important; }
  .gap-xl-4 { gap: 1.5rem !important; }
  .gap-xl-5 { gap: 3rem !important; }
  .row-gap-xl-0 { row-gap: 0px !important; }
  .row-gap-xl-1 { row-gap: 0.25rem !important; }
  .row-gap-xl-2 { row-gap: 0.5rem !important; }
  .row-gap-xl-3 { row-gap: 1rem !important; }
  .row-gap-xl-4 { row-gap: 1.5rem !important; }
  .row-gap-xl-5 { row-gap: 3rem !important; }
  .column-gap-xl-0 { column-gap: 0px !important; }
  .column-gap-xl-1 { column-gap: 0.25rem !important; }
  .column-gap-xl-2 { column-gap: 0.5rem !important; }
  .column-gap-xl-3 { column-gap: 1rem !important; }
  .column-gap-xl-4 { column-gap: 1.5rem !important; }
  .column-gap-xl-5 { column-gap: 3rem !important; }
  .text-xl-start { text-align: left !important; }
  .text-xl-end { text-align: right !important; }
  .text-xl-center { text-align: center !important; }
}

@media (min-width: 1400px) {
  .float-xxl-start { float: left !important; }
  .float-xxl-end { float: right !important; }
  .float-xxl-none { float: none !important; }
  .object-fit-xxl-contain { object-fit: contain !important; }
  .object-fit-xxl-cover { object-fit: cover !important; }
  .object-fit-xxl-fill { object-fit: fill !important; }
  .object-fit-xxl-scale { object-fit: scale-down !important; }
  .object-fit-xxl-none { object-fit: none !important; }
  .d-xxl-inline { display: inline !important; }
  .d-xxl-inline-block { display: inline-block !important; }
  .d-xxl-block { display: block !important; }
  .d-xxl-grid { display: grid !important; }
  .d-xxl-inline-grid { display: inline-grid !important; }
  .d-xxl-table { display: table !important; }
  .d-xxl-table-row { display: table-row !important; }
  .d-xxl-table-cell { display: table-cell !important; }
  .d-xxl-flex { display: flex !important; }
  .d-xxl-inline-flex { display: inline-flex !important; }
  .d-xxl-none { display: none !important; }
  .flex-xxl-fill { flex: 1 1 auto !important; }
  .flex-xxl-row { flex-direction: row !important; }
  .flex-xxl-column { flex-direction: column !important; }
  .flex-xxl-row-reverse { flex-direction: row-reverse !important; }
  .flex-xxl-column-reverse { flex-direction: column-reverse !important; }
  .flex-xxl-grow-0 { flex-grow: 0 !important; }
  .flex-xxl-grow-1 { flex-grow: 1 !important; }
  .flex-xxl-shrink-0 { flex-shrink: 0 !important; }
  .flex-xxl-shrink-1 { flex-shrink: 1 !important; }
  .flex-xxl-wrap { flex-wrap: wrap !important; }
  .flex-xxl-nowrap { flex-wrap: nowrap !important; }
  .flex-xxl-wrap-reverse { flex-wrap: wrap-reverse !important; }
  .justify-content-xxl-start { justify-content: flex-start !important; }
  .justify-content-xxl-end { justify-content: flex-end !important; }
  .justify-content-xxl-center { justify-content: center !important; }
  .justify-content-xxl-between { justify-content: space-between !important;=
 }
  .justify-content-xxl-around { justify-content: space-around !important; }
  .justify-content-xxl-evenly { justify-content: space-evenly !important; }
  .align-items-xxl-start { align-items: flex-start !important; }
  .align-items-xxl-end { align-items: flex-end !important; }
  .align-items-xxl-center { align-items: center !important; }
  .align-items-xxl-baseline { align-items: baseline !important; }
  .align-items-xxl-stretch { align-items: stretch !important; }
  .align-content-xxl-start { align-content: flex-start !important; }
  .align-content-xxl-end { align-content: flex-end !important; }
  .align-content-xxl-center { align-content: center !important; }
  .align-content-xxl-between { align-content: space-between !important; }
  .align-content-xxl-around { align-content: space-around !important; }
  .align-content-xxl-stretch { align-content: stretch !important; }
  .align-self-xxl-auto { align-self: auto !important; }
  .align-self-xxl-start { align-self: flex-start !important; }
  .align-self-xxl-end { align-self: flex-end !important; }
  .align-self-xxl-center { align-self: center !important; }
  .align-self-xxl-baseline { align-self: baseline !important; }
  .align-self-xxl-stretch { align-self: stretch !important; }
  .order-xxl-first { order: -1 !important; }
  .order-xxl-0 { order: 0 !important; }
  .order-xxl-1 { order: 1 !important; }
  .order-xxl-2 { order: 2 !important; }
  .order-xxl-3 { order: 3 !important; }
  .order-xxl-4 { order: 4 !important; }
  .order-xxl-5 { order: 5 !important; }
  .order-xxl-last { order: 6 !important; }
  .m-xxl-0 { margin: 0px !important; }
  .m-xxl-1 { margin: 0.25rem !important; }
  .m-xxl-2 { margin: 0.5rem !important; }
  .m-xxl-3 { margin: 1rem !important; }
  .m-xxl-4 { margin: 1.5rem !important; }
  .m-xxl-5 { margin: 3rem !important; }
  .m-xxl-auto { margin: auto !important; }
  .mx-xxl-0 { margin-right: 0px !important; margin-left: 0px !important; }
  .mx-xxl-1 { margin-right: 0.25rem !important; margin-left: 0.25rem !impor=
tant; }
  .mx-xxl-2 { margin-right: 0.5rem !important; margin-left: 0.5rem !importa=
nt; }
  .mx-xxl-3 { margin-right: 1rem !important; margin-left: 1rem !important; =
}
  .mx-xxl-4 { margin-right: 1.5rem !important; margin-left: 1.5rem !importa=
nt; }
  .mx-xxl-5 { margin-right: 3rem !important; margin-left: 3rem !important; =
}
  .mx-xxl-auto { margin-right: auto !important; margin-left: auto !importan=
t; }
  .my-xxl-0 { margin-top: 0px !important; margin-bottom: 0px !important; }
  .my-xxl-1 { margin-top: 0.25rem !important; margin-bottom: 0.25rem !impor=
tant; }
  .my-xxl-2 { margin-top: 0.5rem !important; margin-bottom: 0.5rem !importa=
nt; }
  .my-xxl-3 { margin-top: 1rem !important; margin-bottom: 1rem !important; =
}
  .my-xxl-4 { margin-top: 1.5rem !important; margin-bottom: 1.5rem !importa=
nt; }
  .my-xxl-5 { margin-top: 3rem !important; margin-bottom: 3rem !important; =
}
  .my-xxl-auto { margin-top: auto !important; margin-bottom: auto !importan=
t; }
  .mt-xxl-0 { margin-top: 0px !important; }
  .mt-xxl-1 { margin-top: 0.25rem !important; }
  .mt-xxl-2 { margin-top: 0.5rem !important; }
  .mt-xxl-3 { margin-top: 1rem !important; }
  .mt-xxl-4 { margin-top: 1.5rem !important; }
  .mt-xxl-5 { margin-top: 3rem !important; }
  .mt-xxl-auto { margin-top: auto !important; }
  .me-xxl-0 { margin-right: 0px !important; }
  .me-xxl-1 { margin-right: 0.25rem !important; }
  .me-xxl-2 { margin-right: 0.5rem !important; }
  .me-xxl-3 { margin-right: 1rem !important; }
  .me-xxl-4 { margin-right: 1.5rem !important; }
  .me-xxl-5 { margin-right: 3rem !important; }
  .me-xxl-auto { margin-right: auto !important; }
  .mb-xxl-0 { margin-bottom: 0px !important; }
  .mb-xxl-1 { margin-bottom: 0.25rem !important; }
  .mb-xxl-2 { margin-bottom: 0.5rem !important; }
  .mb-xxl-3 { margin-bottom: 1rem !important; }
  .mb-xxl-4 { margin-bottom: 1.5rem !important; }
  .mb-xxl-5 { margin-bottom: 3rem !important; }
  .mb-xxl-auto { margin-bottom: auto !important; }
  .ms-xxl-0 { margin-left: 0px !important; }
  .ms-xxl-1 { margin-left: 0.25rem !important; }
  .ms-xxl-2 { margin-left: 0.5rem !important; }
  .ms-xxl-3 { margin-left: 1rem !important; }
  .ms-xxl-4 { margin-left: 1.5rem !important; }
  .ms-xxl-5 { margin-left: 3rem !important; }
  .ms-xxl-auto { margin-left: auto !important; }
  .p-xxl-0 { padding: 0px !important; }
  .p-xxl-1 { padding: 0.25rem !important; }
  .p-xxl-2 { padding: 0.5rem !important; }
  .p-xxl-3 { padding: 1rem !important; }
  .p-xxl-4 { padding: 1.5rem !important; }
  .p-xxl-5 { padding: 3rem !important; }
  .px-xxl-0 { padding-right: 0px !important; padding-left: 0px !important; =
}
  .px-xxl-1 { padding-right: 0.25rem !important; padding-left: 0.25rem !imp=
ortant; }
  .px-xxl-2 { padding-right: 0.5rem !important; padding-left: 0.5rem !impor=
tant; }
  .px-xxl-3 { padding-right: 1rem !important; padding-left: 1rem !important=
; }
  .px-xxl-4 { padding-right: 1.5rem !important; padding-left: 1.5rem !impor=
tant; }
  .px-xxl-5 { padding-right: 3rem !important; padding-left: 3rem !important=
; }
  .py-xxl-0 { padding-top: 0px !important; padding-bottom: 0px !important; =
}
  .py-xxl-1 { padding-top: 0.25rem !important; padding-bottom: 0.25rem !imp=
ortant; }
  .py-xxl-2 { padding-top: 0.5rem !important; padding-bottom: 0.5rem !impor=
tant; }
  .py-xxl-3 { padding-top: 1rem !important; padding-bottom: 1rem !important=
; }
  .py-xxl-4 { padding-top: 1.5rem !important; padding-bottom: 1.5rem !impor=
tant; }
  .py-xxl-5 { padding-top: 3rem !important; padding-bottom: 3rem !important=
; }
  .pt-xxl-0 { padding-top: 0px !important; }
  .pt-xxl-1 { padding-top: 0.25rem !important; }
  .pt-xxl-2 { padding-top: 0.5rem !important; }
  .pt-xxl-3 { padding-top: 1rem !important; }
  .pt-xxl-4 { padding-top: 1.5rem !important; }
  .pt-xxl-5 { padding-top: 3rem !important; }
  .pe-xxl-0 { padding-right: 0px !important; }
  .pe-xxl-1 { padding-right: 0.25rem !important; }
  .pe-xxl-2 { padding-right: 0.5rem !important; }
  .pe-xxl-3 { padding-right: 1rem !important; }
  .pe-xxl-4 { padding-right: 1.5rem !important; }
  .pe-xxl-5 { padding-right: 3rem !important; }
  .pb-xxl-0 { padding-bottom: 0px !important; }
  .pb-xxl-1 { padding-bottom: 0.25rem !important; }
  .pb-xxl-2 { padding-bottom: 0.5rem !important; }
  .pb-xxl-3 { padding-bottom: 1rem !important; }
  .pb-xxl-4 { padding-bottom: 1.5rem !important; }
  .pb-xxl-5 { padding-bottom: 3rem !important; }
  .ps-xxl-0 { padding-left: 0px !important; }
  .ps-xxl-1 { padding-left: 0.25rem !important; }
  .ps-xxl-2 { padding-left: 0.5rem !important; }
  .ps-xxl-3 { padding-left: 1rem !important; }
  .ps-xxl-4 { padding-left: 1.5rem !important; }
  .ps-xxl-5 { padding-left: 3rem !important; }
  .gap-xxl-0 { gap: 0px !important; }
  .gap-xxl-1 { gap: 0.25rem !important; }
  .gap-xxl-2 { gap: 0.5rem !important; }
  .gap-xxl-3 { gap: 1rem !important; }
  .gap-xxl-4 { gap: 1.5rem !important; }
  .gap-xxl-5 { gap: 3rem !important; }
  .row-gap-xxl-0 { row-gap: 0px !important; }
  .row-gap-xxl-1 { row-gap: 0.25rem !important; }
  .row-gap-xxl-2 { row-gap: 0.5rem !important; }
  .row-gap-xxl-3 { row-gap: 1rem !important; }
  .row-gap-xxl-4 { row-gap: 1.5rem !important; }
  .row-gap-xxl-5 { row-gap: 3rem !important; }
  .column-gap-xxl-0 { column-gap: 0px !important; }
  .column-gap-xxl-1 { column-gap: 0.25rem !important; }
  .column-gap-xxl-2 { column-gap: 0.5rem !important; }
  .column-gap-xxl-3 { column-gap: 1rem !important; }
  .column-gap-xxl-4 { column-gap: 1.5rem !important; }
  .column-gap-xxl-5 { column-gap: 3rem !important; }
  .text-xxl-start { text-align: left !important; }
  .text-xxl-end { text-align: right !important; }
  .text-xxl-center { text-align: center !important; }
}

@media (min-width: 1200px) {
  .fs-1 { font-size: 2.5rem !important; }
  .fs-2 { font-size: 2rem !important; }
  .fs-3 { font-size: 1.75rem !important; }
  .fs-4 { font-size: 1.5rem !important; }
}

@media print {
  .d-print-inline { display: inline !important; }
  .d-print-inline-block { display: inline-block !important; }
  .d-print-block { display: block !important; }
  .d-print-grid { display: grid !important; }
  .d-print-inline-grid { display: inline-grid !important; }
  .d-print-table { display: table !important; }
  .d-print-table-row { display: table-row !important; }
  .d-print-table-cell { display: table-cell !important; }
  .d-print-flex { display: flex !important; }
  .d-print-inline-flex { display: inline-flex !important; }
  .d-print-none { display: none !important; }
}
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/css
Content-Transfer-Encoding: quoted-printable
Content-Location: https://sqlfiddle.com/assets/css/sqlfiddle.min.css?v=1.0.0.33255

@charset "utf-8";

* { font-family: courier, monospace; }

html { height: 100%; }

body { margin: 0px; padding: 0px; height: 100%; }

.body-inner { height: 100%; }

.sidebar { background: rgb(245, 245, 245); height: 100%; width: 350px; }

.sidebar-resizer { background: rgb(230, 230, 230); cursor: col-resize; heig=
ht: 100%; width: 5px; }

.sidebar-toggler { width: 20px; height: 100%; }

.central { flex: 1 1 0%; overflow-y: auto; height: 100%; }

.cookie-consent { background: rgba(0, 0, 0, 0.75); color: rgb(255, 255, 255=
); width: 100%; padding: 10px; }

@media (max-width: 991.98px) {
  .sidebar, .sidebar-resizer, .sidebar-toggler { display: none !important; =
}
}

header { background: rgb(245, 245, 245); }

header .brand { background: linear-gradient(90deg, rgb(45, 45, 45) 0%, rgb(=
15, 15, 15) 30%, rgb(0, 0, 0) 50%, rgb(15, 15, 15) 70%, rgb(45, 45, 45) 100=
%); color: rgb(0, 0, 0); letter-spacing: 1px; font-size: 24px; font-weight:=
 bold; padding-top: 10px; padding-bottom: 10px; padding-left: 15px; }

header .brand .brand-name { padding-left: 10px; }

header .brand a:link, header .brand a:visited, header .brand a:hover, heade=
r .brand a:active { color: rgb(255, 255, 255); text-decoration: none; }

header .brand svg { color: rgb(204, 0, 0); }

header .account { padding-top: 5px; padding-bottom: 5px; padding-left: 20px=
; }

header .account a:link, header .account a:visited, header .account a:active=
, header .account .btn-link { color: rgb(0, 0, 0); text-decoration: none; }

header .account a:hover, header .account .btn-link:hover { color: rgb(204, =
0, 0); }

header .account .form-logout { display: inline-block; }

header .account .form-logout .btn-link { text-decoration: none; padding: 0p=
x; }

header .nav-tabs-sidebar .nav-item { width: 33.3333%; }

header .nav-tabs-sidebar .nav-item .nav-link { background-color: rgb(230, 2=
30, 230); border-bottom: 5px solid rgba(255, 255, 255, 0); border-top-left-=
radius: 0px; border-top-right-radius: 0px; border-left: 1px solid rgb(245, =
245, 245); color: rgb(0, 0, 0); padding-top: 10px; padding-bottom: 10px; wi=
dth: 100%; }

header .nav-tabs-sidebar .nav-item .nav-link svg { margin: 5px 0px; }

header .nav-tabs-sidebar .nav-item .nav-link.active { background-color: rgb=
(255, 255, 255); border-bottom: 5px solid rgb(204, 0, 0); }

.tab-pane-chat .sidebar-chat { height: 100%; }

.tab-pane-chat .chat-disabled-text { font-style: italic; padding: 20px; }

.tab-pane-chat .sidebar-chat-message { width: 100%; }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner { overflow=
: hidden auto; scrollbar-color: rgb(204, 0, 0) rgb(0, 0, 0); scrollbar-widt=
h: thin; width: 100%; font-style: normal; }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner .sidebar-c=
hat-role-user { background-color: rgb(245, 245, 245); padding: 20px; }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner .sidebar-c=
hat-role-assistant { background-color: rgb(230, 230, 230); padding: 20px; }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner pre { bord=
er-radius: 0.375rem; line-height: 1.71429; overflow-x: auto; color: rgb(255=
, 255, 255); }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner pre .bg-bl=
ack { background-color: rgb(0, 0, 0); }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner pre .pre-h=
eader { background-color: rgb(52, 53, 65); color: rgb(217, 217, 227); font-=
size: 0.85rem; line-height: 1rem; padding: 0.5rem 1rem; }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner pre .pre-h=
eader button { background-color: rgba(255, 255, 255, 0); background-image: =
none; border: 0px; color: rgb(217, 217, 227); }

.tab-pane-chat .sidebar-chat-message .sidebar-chat-message-inner pre .pre-b=
ody { padding: 5px; }

.tab-pane-chat .sidebar-chat-prompt { padding-bottom: 10px; padding-left: 2=
0px; padding-right: 20px; width: 100%; }

.tab-pane-chat .sidebar-chat-prompt .error-message { display: none; color: =
rgb(204, 0, 0); }

.tab-pane-editor { font-style: italic; padding: 20px; }

.tab-pane-editor .error-message { display: none; color: rgb(204, 0, 0); }

.tab-pane-history { font-style: italic; padding: 20px; }

.sidebar-toggler .sidebar-toggler-chevron { cursor: pointer; opacity: 0.25;=
 position: relative; height: 30px; width: 20px; }

.sidebar-toggler .sidebar-toggler-chevron div { background-color: rgb(0, 0,=
 0); left: 50%; position: absolute; transition: transform 0.3s ease 0s; hei=
ght: 50%; width: 4px; }

.sidebar-toggler .sidebar-toggler-chevron .chevron-part-top { top: 1px; bor=
der-top-left-radius: 9999px; border-top-right-radius: 9999px; }

.sidebar-toggler .sidebar-toggler-chevron .chevron-part-bottom { bottom: 1p=
x; border-bottom-left-radius: 9999px; border-bottom-right-radius: 9999px; }

.sidebar-toggler .sidebar-toggler-chevron:hover { opacity: 1; }

.sidebar-toggler .sidebar-toggler-chevron:hover .chevron-part-top { transfo=
rm: rotate(15deg); }

.sidebar-toggler .sidebar-toggler-chevron:hover .chevron-part-bottom { tran=
sform: rotate(-15deg); }

.sidebar-toggler.toggler-collapsed .sidebar-toggler-chevron .chevron-part-t=
op { transform: rotate(-15deg); }

.sidebar-toggler.toggler-collapsed .sidebar-toggler-chevron .chevron-part-b=
ottom { transform: rotate(15deg); }

.sql-editor { height: 100%; }

.sql-editor .sql-editor-header { padding-top: 10px; }

.sql-editor .sql-editor-header .sql-editor-header-inner { max-width: 90%; }

.sql-editor .sql-editor-header .sql-editor-header-inner .h2 { font-size: 18=
px; }

.sql-editor .sql-editor-header .sql-editor-header-edit { display: none; wid=
th: 800px; }

.sql-editor .sql-editor-body { padding: 20px 0px; height: 100%; }

.sql-editor .sql-editor-body .sql-editor-body-inner { border: 2px solid rgb=
(230, 230, 230); box-shadow: rgb(230, 230, 230) 0px 20px 20px 0px; height: =
100%; width: 90%; }

.sql-editor .sql-editor-body .sql-editor-input { height: 60%; }

.sql-editor .sql-editor-body .sql-editor-input .CodeMirror { height: 100%; =
}

.sql-editor .sql-editor-body .sql-editor-toolbar { background-color: rgb(23=
0, 230, 230); height: 60px; padding: 10px; }

.sql-editor .sql-editor-body .sql-editor-output { height: calc(40% - 60px);=
 overflow: auto; }

.sql-editor .sql-editor-body .sql-editor-output .nav-tabs button { color: r=
gb(150, 150, 150); }

.sql-editor .sql-editor-body .sql-editor-output .nav-tabs button.active { c=
olor: rgb(0, 0, 0); }

.sql-editor .sql-editor-body .sql-editor-output .sql-editor-output-tab-cont=
ent { padding: 20px; }

.sql-editor .sql-editor-body .sql-editor-output .section-output-description=
 { max-height: 200px; }

.modal-code-editor-share .share-free svg { color: rgb(204, 0, 0); }

.modal-code-editor-share .modal-code-editor-share-copy-box { margin: 10px 0=
px; background-color: rgb(0, 0, 0); color: rgb(255, 255, 255); border-radiu=
s: 0.375rem; line-height: 1.71429; overflow-x: auto; }

.modal-code-editor-share .modal-code-editor-share-copy-box .box-header { ba=
ckground-color: rgb(52, 53, 65); font-size: 0.85rem; line-height: 1rem; pad=
ding: 0.5rem 1rem; }

.modal-code-editor-share .modal-code-editor-share-copy-box .box-header butt=
on { background-color: transparent; background-image: none; border: 0px; co=
lor: rgb(217, 217, 227); }

.modal-code-editor-share .modal-code-editor-share-copy-box .box-body { padd=
ing: 0.5rem 1rem; font-size: 12px; }

@media (max-width: 991.98px) {
  .sql-editor .sql-editor-output { height: initial !important; overflow: in=
itial !important; }
}
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/css
Content-Transfer-Encoding: quoted-printable
Content-Location: https://cdnjs.cloudflare.com/ajax/libs/codemirror/6.65.7/codemirror.min.css

@charset "utf-8";

.CodeMirror { font-family: monospace; height: 300px; color: rgb(0, 0, 0); d=
irection: ltr; }

.CodeMirror-lines { padding: 4px 0px; }

.CodeMirror pre.CodeMirror-line, .CodeMirror pre.CodeMirror-line-like { pad=
ding: 0px 4px; }

.CodeMirror-gutter-filler, .CodeMirror-scrollbar-filler { background-color:=
 rgb(255, 255, 255); }

.CodeMirror-gutters { border-right: 1px solid rgb(221, 221, 221); backgroun=
d-color: rgb(247, 247, 247); white-space: nowrap; }

.CodeMirror-linenumber { padding: 0px 3px 0px 5px; min-width: 20px; text-al=
ign: right; color: rgb(153, 153, 153); white-space: nowrap; }

.CodeMirror-guttermarker { color: rgb(0, 0, 0); }

.CodeMirror-guttermarker-subtle { color: rgb(153, 153, 153); }

.CodeMirror-cursor { border-left: 1px solid rgb(0, 0, 0); border-right: non=
e; width: 0px; }

.CodeMirror div.CodeMirror-secondarycursor { border-left: 1px solid silver;=
 }

.cm-fat-cursor .CodeMirror-cursor { width: auto; background: rgb(119, 238, =
119); border: 0px !important; }

.cm-fat-cursor div.CodeMirror-cursors { z-index: 1; }

.cm-fat-cursor .CodeMirror-line::selection, .cm-fat-cursor .CodeMirror-line=
 > span::selection, .cm-fat-cursor .CodeMirror-line > span > span::selectio=
n { background: 0px 0px; }

.cm-fat-cursor { caret-color: transparent; }

@-webkit-keyframes blink {=20
  50% { background-color: transparent; }
}

@keyframes blink {=20
  50% { background-color: transparent; }
}

.cm-tab { display: inline-block; text-decoration: inherit; }

.CodeMirror-rulers { position: absolute; inset: -50px 0px 0px; overflow: hi=
dden; }

.CodeMirror-ruler { border-left: 1px solid rgb(204, 204, 204); top: 0px; bo=
ttom: 0px; position: absolute; }

.cm-s-default .cm-header { color: rgb(0, 0, 255); }

.cm-s-default .cm-quote { color: rgb(0, 153, 0); }

.cm-negative { color: rgb(221, 68, 68); }

.cm-positive { color: rgb(34, 153, 34); }

.cm-header, .cm-strong { font-weight: 700; }

.cm-em { font-style: italic; }

.cm-link { text-decoration: underline; }

.cm-strikethrough { text-decoration: line-through; }

.cm-s-default .cm-keyword { color: rgb(119, 0, 136); }

.cm-s-default .cm-atom { color: rgb(34, 17, 153); }

.cm-s-default .cm-number { color: rgb(17, 102, 68); }

.cm-s-default .cm-def { color: rgb(0, 0, 255); }

.cm-s-default .cm-variable-2 { color: rgb(0, 85, 170); }

.cm-s-default .cm-type, .cm-s-default .cm-variable-3 { color: rgb(0, 136, 8=
5); }

.cm-s-default .cm-comment { color: rgb(170, 85, 0); }

.cm-s-default .cm-string { color: rgb(170, 17, 17); }

.cm-s-default .cm-string-2 { color: rgb(255, 85, 0); }

.cm-s-default .cm-meta { color: rgb(85, 85, 85); }

.cm-s-default .cm-qualifier { color: rgb(85, 85, 85); }

.cm-s-default .cm-builtin { color: rgb(51, 0, 170); }

.cm-s-default .cm-bracket { color: rgb(153, 153, 119); }

.cm-s-default .cm-tag { color: rgb(17, 119, 0); }

.cm-s-default .cm-attribute { color: rgb(0, 0, 204); }

.cm-s-default .cm-hr { color: rgb(153, 153, 153); }

.cm-s-default .cm-link { color: rgb(0, 0, 204); }

.cm-s-default .cm-error { color: red; }

.cm-invalidchar { color: red; }

.CodeMirror-composing { border-bottom: 2px solid; }

div.CodeMirror span.CodeMirror-matchingbracket { color: rgb(0, 187, 0); }

div.CodeMirror span.CodeMirror-nonmatchingbracket { color: rgb(170, 34, 34)=
; }

.CodeMirror-matchingtag { background: rgba(255, 150, 0, 0.3); }

.CodeMirror-activeline-background { background: rgb(232, 242, 255); }

.CodeMirror { position: relative; overflow: hidden; background: rgb(255, 25=
5, 255); }

.CodeMirror-scroll { margin-bottom: -50px; margin-right: -50px; padding-bot=
tom: 50px; height: 100%; outline: 0px; position: relative; z-index: 0; over=
flow: scroll !important; }

.CodeMirror-sizer { position: relative; border-right: 50px solid transparen=
t; }

.CodeMirror-gutter-filler, .CodeMirror-hscrollbar, .CodeMirror-scrollbar-fi=
ller, .CodeMirror-vscrollbar { position: absolute; z-index: 6; display: non=
e; outline: 0px; }

.CodeMirror-vscrollbar { right: 0px; top: 0px; overflow: hidden scroll; }

.CodeMirror-hscrollbar { bottom: 0px; left: 0px; overflow: scroll hidden; }

.CodeMirror-scrollbar-filler { right: 0px; bottom: 0px; }

.CodeMirror-gutter-filler { left: 0px; bottom: 0px; }

.CodeMirror-gutters { position: absolute; left: 0px; top: 0px; min-height: =
100%; z-index: 3; }

.CodeMirror-gutter { white-space: normal; height: 100%; display: inline-blo=
ck; vertical-align: top; margin-bottom: -50px; }

.CodeMirror-gutter-wrapper { position: absolute; z-index: 4; background: 0p=
x 0px !important; border: none !important; }

.CodeMirror-gutter-background { position: absolute; top: 0px; bottom: 0px; =
z-index: 4; }

.CodeMirror-gutter-elt { position: absolute; cursor: default; z-index: 4; }

.CodeMirror-gutter-wrapper ::selection { background-color: transparent; }

.CodeMirror-lines { cursor: text; min-height: 1px; }

.CodeMirror pre.CodeMirror-line, .CodeMirror pre.CodeMirror-line-like { bor=
der-radius: 0px; border-width: 0px; background: 0px 0px; font-family: inher=
it; font-size: inherit; margin: 0px; white-space: pre; overflow-wrap: norma=
l; line-height: inherit; color: inherit; z-index: 2; position: relative; ov=
erflow: visible; -webkit-tap-highlight-color: transparent; font-variant-lig=
atures: contextual; }

.CodeMirror-wrap pre.CodeMirror-line, .CodeMirror-wrap pre.CodeMirror-line-=
like { overflow-wrap: break-word; white-space: pre-wrap; word-break: normal=
; }

.CodeMirror-linebackground { position: absolute; inset: 0px; z-index: 0; }

.CodeMirror-linewidget { position: relative; z-index: 2; padding: 0.1px; }

.CodeMirror-rtl pre { direction: rtl; }

.CodeMirror-code { outline: 0px; }

.CodeMirror-gutter, .CodeMirror-gutters, .CodeMirror-linenumber, .CodeMirro=
r-scroll, .CodeMirror-sizer { box-sizing: content-box; }

.CodeMirror-measure { position: absolute; width: 100%; height: 0px; overflo=
w: hidden; visibility: hidden; }

.CodeMirror-cursor { position: absolute; pointer-events: none; }

.CodeMirror-measure pre { position: static; }

div.CodeMirror-cursors { visibility: hidden; position: relative; z-index: 3=
; }

div.CodeMirror-dragcursors { visibility: visible; }

.CodeMirror-focused div.CodeMirror-cursors { visibility: visible; }

.CodeMirror-selected { background: rgb(217, 217, 217); }

.CodeMirror-focused .CodeMirror-selected { background: rgb(215, 212, 240); =
}

.CodeMirror-crosshair { cursor: crosshair; }

.CodeMirror-line::selection, .CodeMirror-line > span::selection, .CodeMirro=
r-line > span > span::selection { background: rgb(215, 212, 240); }

.cm-searching { background-color: rgba(255, 255, 0, 0.4); }

.cm-force-border { padding-right: 0.1px; }

@media print {
  .CodeMirror div.CodeMirror-cursors { visibility: hidden; }
}

.cm-tab-wrap-hack::after { content: ""; }

span.CodeMirror-selectedtext { background: 0px 0px; }
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/css
Content-Transfer-Encoding: quoted-printable
Content-Location: https://cdnjs.cloudflare.com/ajax/libs/codemirror/6.65.7/addon/hint/show-hint.min.css

@charset "utf-8";

.CodeMirror-hints { position: absolute; z-index: 10; overflow: hidden auto;=
 list-style: none; margin: 0px; padding: 2px; box-shadow: rgba(0, 0, 0, 0.2=
) 2px 3px 5px; border-radius: 3px; border: 1px solid silver; background: rg=
b(255, 255, 255); font-size: 90%; font-family: monospace; max-height: 20em;=
 }

.CodeMirror-hint { margin: 0px; padding: 0px 4px; border-radius: 2px; white=
-space: pre; color: rgb(0, 0, 0); cursor: pointer; }

li.CodeMirror-hint-active { background: rgb(0, 136, 255); color: rgb(255, 2=
55, 255); }
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/facebook.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m21.7 16.7h5v5h-5v11.6h-5v-11.6h-5v-5h5v-2.1c0-2 0.6-4.5 1.8=
-5.9 1.3-1.3 2.8-2 4.7-2h3.5v5h-3.5c-0.9 0-1.5 0.6-1.5 1.5v3.5z"></path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/twitter.svg

<svg width=3D"25" height=3D"25" viewBox=3D"0 0 25 25" fill=3D"none" xmlns=
=3D"http://www.w3.org/2000/svg">
<rect width=3D"25" height=3D"25" />
<path d=3D"M14.4821 11.6218L21.0389 4H19.4852L13.7919 10.6179L9.24467 4H4L1=
0.8763 14.0074L4 22H5.55385L11.5661 15.0113L16.3683 22H21.613L14.4821 11.62=
18ZM6.11371 5.16972H8.50031L19.4859 20.8835H17.0993L6.11371 5.16972Z" fill=
=3D"white"/>
</svg>=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/linkedin.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m13.3 31.7h-5v-16.7h5v16.7z m18.4 0h-5v-8.9c0-2.4-0.9-3.5-2.=
5-3.5-1.3 0-2.1 0.6-2.5 1.9v10.5h-5s0-15 0-16.7h3.9l0.3 3.3h0.1c1-1.6 2.7-2=
.8 4.9-2.8 1.7 0 3.1 0.5 4.2 1.7 1 1.2 1.6 2.8 1.6 5.1v9.4z m-18.3-20.9c0 1=
.4-1.1 2.5-2.6 2.5s-2.5-1.1-2.5-2.5 1.1-2.5 2.5-2.5 2.6 1.2 2.6 2.5z"></pat=
h>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/reddit.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m40 18.9q0 1.3-0.7 2.3t-1.7 1.7q0.2 1 0.2 2.1 0 3.5-2.3 6.4t=
-6.5 4.7-9 1.7-8.9-1.7-6.4-4.7-2.4-6.4q0-1.1 0.2-2.1-1.1-0.6-1.8-1.6t-0.7-2=
.4q0-1.8 1.3-3.2t3.1-1.3q1.9 0 3.3 1.4 4.8-3.3 11.5-3.6l2.6-11.6q0-0.3 0.3-=
0.5t0.6-0.1l8.2 1.8q0.4-0.8 1.2-1.3t1.8-0.5q1.4 0 2.4 1t0.9 2.3-0.9 2.4-2.4=
 1-2.4-1-0.9-2.4l-7.5-1.6-2.3 10.5q6.7 0.2 11.6 3.6 1.3-1.4 3.2-1.4 1.8 0 3=
.1 1.3t1.3 3.2z m-30.7 4.4q0 1.4 1 2.4t2.4 1 2.3-1 1-2.4-1-2.3-2.3-1q-1.4 0=
-2.4 1t-1 2.3z m18.1 8q0.3-0.3 0.3-0.6t-0.3-0.6q-0.2-0.2-0.5-0.2t-0.6 0.2q-=
0.9 0.9-2.7 1.4t-3.6 0.4-3.6-0.4-2.7-1.4q-0.2-0.2-0.5-0.2t-0.6 0.2q-0.3 0.2=
-0.3 0.6t0.3 0.6q1 0.9 2.6 1.5t2.8 0.6 2 0.1 2-0.1 2.8-0.6 2.6-1.6z m-0.1-4=
.6q1.4 0 2.4-1t1-2.4q0-1.3-1-2.3t-2.4-1q-1.3 0-2.3 1t-1 2.3 1 2.4 2.3 1z"><=
/path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/email.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m33.4 13.4v-3.4l-13.4 8.4-13.4-8.4v3.4l13.4 8.2z m0-6.8q1.3 =
0 2.3 1.1t0.9 2.3v20q0 1.3-0.9 2.3t-2.3 1.1h-26.8q-1.3 0-2.3-1.1t-0.9-2.3v-=
20q0-1.3 0.9-2.3t2.3-1.1h26.8z"></path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/sharethis.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m30 26.8c2.7 0 4.8 2.2 4.8 4.8s-2.1 5-4.8 5-4.8-2.3-4.8-5c0-=
0.3 0-0.7 0-1.1l-11.8-6.8c-0.9 0.8-2.1 1.3-3.4 1.3-2.7 0-5-2.3-5-5s2.3-5 5-=
5c1.3 0 2.5 0.5 3.4 1.3l11.8-6.8c-0.1-0.4-0.2-0.8-0.2-1.1 0-2.8 2.3-5 5-5s5=
 2.2 5 5-2.3 5-5 5c-1.3 0-2.5-0.6-3.4-1.4l-11.8 6.8c0.1 0.4 0.2 0.8 0.2 1.2=
s-0.1 0.8-0.2 1.2l11.9 6.8c0.9-0.7 2.1-1.2 3.3-1.2z"></path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/arrow_left.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m22 30.7q0 0.3-0.2 0.5l-1.1 1.1q-0.3 0.3-0.6 0.3t-0.5-0.3l-1=
0.4-10.4q-0.2-0.2-0.2-0.5t0.2-0.5l10.4-10.4q0.3-0.2 0.5-0.2t0.6 0.2l1.1 1.1=
q0.2 0.3 0.2 0.5t-0.2 0.6l-8.8 8.7 8.8 8.8q0.2 0.2 0.2 0.5z m8.6 0q0 0.3-0.=
3 0.5l-1.1 1.1q-0.2 0.3-0.5 0.3t-0.5-0.3l-10.4-10.4q-0.2-0.2-0.2-0.5t0.2-0.=
5l10.4-10.4q0.2-0.2 0.5-0.2t0.5 0.2l1.1 1.1q0.3 0.3 0.3 0.5t-0.3 0.6l-8.7 8=
.7 8.7 8.8q0.3 0.2 0.3 0.5z"></path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: image/svg+xml
Content-Transfer-Encoding: quoted-printable
Content-Location: https://platform-cdn.sharethis.com/img/arrow_right.svg

<svg xmlns=3D"http://www.w3.org/2000/svg" fill=3D"#fff" preserveAspectRatio=
=3D"xMidYMid meet" height=3D"1em" width=3D"1em" viewBox=3D"0 0 40 40">
  <g>
    <path d=3D"m22.3 21.4q0 0.3-0.2 0.5l-10.4 10.4q-0.3 0.3-0.6 0.3t-0.5-0.=
3l-1.1-1.1q-0.2-0.2-0.2-0.5t0.2-0.5l8.8-8.8-8.8-8.7q-0.2-0.3-0.2-0.6t0.2-0.=
5l1.1-1.1q0.3-0.2 0.5-0.2t0.6 0.2l10.4 10.4q0.2 0.2 0.2 0.5z m8.6 0q0 0.3-0=
.3 0.5l-10.4 10.4q-0.2 0.3-0.5 0.3t-0.5-0.3l-1.1-1.1q-0.2-0.2-0.2-0.5t0.2-0=
.5l8.8-8.8-8.8-8.7q-0.2-0.3-0.2-0.6t0.2-0.5l1.1-1.1q0.2-0.2 0.5-0.2t0.5 0.2=
l10.4 10.4q0.3 0.2 0.3 0.5z"></path>
  </g>
</svg>
=0A
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/html
Content-ID: <frame-9DACD304F8AEF21601CB48C1B442CB0E@mhtml.blink>
Content-Transfer-Encoding: quoted-printable
Content-Location: https://t.sharethis.com/a/t_.htm?ver=0.0.23387&cid=c010&cls=B#cid=c010&cls=B&dmn=sqlfiddle.com&rnd=1719787236538&tt=t.dhj&dhjLcy=48&lbl=pxcel&flbl=pxcel&ll=d&ver=0.0.23387&ell=d&cck=__stid&pn=%2Foracle%2Fonline-compiler&qs=id%3Dd484f324-2e61-49b7-afa7-00b08279fb59&rdn=sqlfiddle.com&rpn=%2Foracle%2Fonline-compiler&rqs=id%3Dd484f324-2e61-49b7-afa7-00b08279fb59&cc=BR&cont=SA&ipaddr=

<html><head><meta http-equiv=3D"Content-Type" content=3D"text/html; charset=
=3Dwindows-1252"></head><body>
<iframe id=3D"ipxcelframe" title=3D"ipxcelframe" style=3D"width: 0px; heigh=
t: 0px; left: 0px;"></iframe></body></html>
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f----
Content-Type: text/html
Content-ID: <frame-DA08077EBCAE80765457ED5CA37F93B5@mhtml.blink>
Content-Transfer-Encoding: quoted-printable
Content-Location: https://t.sharethis.com/a/t_.htm?ver=0.0.23387&cid=c010&cls=B

<html><head><meta http-equiv=3D"Content-Type" content=3D"text/html; charset=
=3DUTF-8"></head><body><img src=3D"https://t.sharethis.com/d/a.gif?cid=3Dc0=
10&amp;cls=3DB&amp;dmn=3Dsqlfiddle.com&amp;tt=3Dt.dhj&amp;dhjLcy=3D48&amp;l=
bl=3Dpxcel&amp;flbl=3Dpxcel&amp;ll=3Dd&amp;ver=3D0.0.23387&amp;ell=3Dd&amp;=
cck=3D__stid&amp;pn=3D%2Foracle%2Fonline-compiler&amp;qs=3Did%3Dd484f324-2e=
61-49b7-afa7-00b08279fb59&amp;rdn=3Dsqlfiddle.com&amp;rpn=3D%2Foracle%2Fonl=
ine-compiler&amp;rqs=3Did%3Dd484f324-2e61-49b7-afa7-00b08279fb59&amp;cc=3DB=
R&amp;cont=3DSA&amp;evid=3DG0qTrBZAyUPWcmYsVMPV&amp;urls=3D&amp;rnd=3D17197=
87236616&amp;cid=3Dc010&amp;version=3D0.0.23387&amp;cc=3DBR&amp;cont=3DSA&a=
mp;cls=3DB&amp;repeat=3D0&amp;htmLcy=3D2&amp;bcnLcy=3D12" title=3D"beacon">=
</body></html>
------MultipartBoundary--CShzBx9yfGc0idJlkw0wuxxzGp336yoWLmVIjUzk1f------