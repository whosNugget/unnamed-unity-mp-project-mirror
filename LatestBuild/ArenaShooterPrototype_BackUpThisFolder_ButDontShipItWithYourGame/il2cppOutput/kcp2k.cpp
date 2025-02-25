﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<System.Byte[],System.Int32>
struct Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA;
// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57;
// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,kcp2k.KcpServerConnection>
struct KeyCollection_t72F088BF3697AE31598DC6E2163AF8832106F125;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<kcp2k.Segment>
struct List_1_tF81DE2A837611EA0789DA9406563F11CD088612B;
// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>
struct List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<kcp2k.Segment>
struct Queue_1_t343671E76428372919D5EB07B4670B58D55E2318;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<kcp2k.Segment>
struct Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,kcp2k.KcpServerConnection>[]
struct EntryU5BU5D_t7A1887C7C63C3CF47BA6F08A3CB901F74B4400CC;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// kcp2k.Segment[]
struct SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// kcp2k.Kcp/AckItem[]
struct AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// kcp2k.Kcp
struct Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F;
// kcp2k.KcpClient
struct KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE;
// kcp2k.KcpClientConnection
struct KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877;
// kcp2k.KcpConnection
struct KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE;
// kcp2k.KcpServer
struct KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A;
// kcp2k.KcpServerConnection
struct KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// kcp2k.Segment
struct Segment_tACB68E9F98BAFBA054171073036C69BAF3688322;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000;
// kcp2k.KcpServer/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26;
// kcp2k.KcpServer/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t343671E76428372919D5EB07B4670B58D55E2318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929;
IL2CPP_EXTERN_C String_t* _stringLiteral135852F066CF53CBD8A19C82825F132F058D351E;
IL2CPP_EXTERN_C String_t* _stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C;
IL2CPP_EXTERN_C String_t* _stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A;
IL2CPP_EXTERN_C String_t* _stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166;
IL2CPP_EXTERN_C String_t* _stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5F077A941F994D78A4385F69EAB7871746026;
IL2CPP_EXTERN_C String_t* _stringLiteral28821C7AF84EF04E0EFAEB17018BD731506CD2C8;
IL2CPP_EXTERN_C String_t* _stringLiteral2BD7B8352139010CC4E5B8598BCE6534CB131DCB;
IL2CPP_EXTERN_C String_t* _stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F;
IL2CPP_EXTERN_C String_t* _stringLiteral32BC68359E266085F6EBC53739CE985C5E2AA797;
IL2CPP_EXTERN_C String_t* _stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC;
IL2CPP_EXTERN_C String_t* _stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA;
IL2CPP_EXTERN_C String_t* _stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A;
IL2CPP_EXTERN_C String_t* _stringLiteral5883BF0E0A31E086714250B31830DBBF408D5319;
IL2CPP_EXTERN_C String_t* _stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D;
IL2CPP_EXTERN_C String_t* _stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93;
IL2CPP_EXTERN_C String_t* _stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153;
IL2CPP_EXTERN_C String_t* _stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6;
IL2CPP_EXTERN_C String_t* _stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4;
IL2CPP_EXTERN_C String_t* _stringLiteral875E17CF2214503840E0994FA0066730D00689B9;
IL2CPP_EXTERN_C String_t* _stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17;
IL2CPP_EXTERN_C String_t* _stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798;
IL2CPP_EXTERN_C String_t* _stringLiteralB210B8A116A5787E3662521D6B6DFE2F1DD189F0;
IL2CPP_EXTERN_C String_t* _stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63;
IL2CPP_EXTERN_C String_t* _stringLiteralCC51440CB23A4947B45C075B06B37B770088A776;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E;
IL2CPP_EXTERN_C String_t* _stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4;
IL2CPP_EXTERN_C String_t* _stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75;
IL2CPP_EXTERN_C String_t* _stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m74472204BD978439E12CDDB5013971A61F80DD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDB3229A3C36FF01101775EC27C4598FF3FB98E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB03A727A06EB080B931F91F7687794C7AD5DC341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAE36D09E0647093D3418071CEC1D569B08200900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2E833F937AEC5CE9D954DB695828904B57ADF31A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3A820B3503F2841A7F6D137447223C8795AA9861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB9D6FC64031F10CB1B89C01CA35E2F45DDAF471A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClientConnection_Connect_m5AA1CF20A9867AB385D306BF4E92B4D6403DAB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__6_0_m9E2EBAF813518AD917EF4ADD79245456D38DA125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__6_1_m61B5C6CC6B10137ED584B88AB3A485ABCCC65C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__6_2_m174BB4E772F995BD5DB9B1C12569182B7FF868A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpConnection_RawSendReliable_m3A1CBC8E09B899B77335F2B6EC7C648014FE4081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_Receive_mB7AB17C2C4560B119837EA0A86210292DD2FCC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_SetMtu_mDB6AAE7A4C13129308C323F1040FC3235C4C6D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m66A7E50204C16321543E84D9EFFBC8E8FD6AB4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m315BF7B2008B804882527488D11C19BC3E1FABAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8F366D6B5594B34B0B8997F0301E655B1ECCCA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m66722EC86D7B03D756E656B08A0054CFA8EFE0CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mDE7FC300CD77706386924278DFDB2F5A9BA76E61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m2A1EC7556C639C246431FD8BD8307B033AA3D678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mAD555018E20E227D751821EDC95E95E340396E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mEE34699FB409F8DE850B3E7230B940376DAB6570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m0F93D084F04A62E27341785540845E5819165A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m5B0FD2C9244517726750355314A49A8EDC695F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__1_m5E8A263A81CA3E251F16BF6348CF2DB7FF08518B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__2_m3C35AFC4CAC5D234C52999F94AF80EA8506731B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_1_U3CTickIncomingU3Eb__0_m4E39A998237FBEF9658200EAF320C0B0CAD21BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t30CFC919AFAB7D83B5B3365174FAC601217A6C4C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7A1887C7C63C3CF47BA6F08A3CB901F74B4400CC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t72F088BF3697AE31598DC6E2163AF8832106F125 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___entries_1)); }
	inline EntryU5BU5D_t7A1887C7C63C3CF47BA6F08A3CB901F74B4400CC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7A1887C7C63C3CF47BA6F08A3CB901F74B4400CC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7A1887C7C63C3CF47BA6F08A3CB901F74B4400CC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___keys_7)); }
	inline KeyCollection_t72F088BF3697AE31598DC6E2163AF8832106F125 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t72F088BF3697AE31598DC6E2163AF8832106F125 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t72F088BF3697AE31598DC6E2163AF8832106F125 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ___values_8)); }
	inline ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____slots_8)); }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<kcp2k.Segment>
struct List_1_tF81DE2A837611EA0789DA9406563F11CD088612B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B, ____items_1)); }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* get__items_1() const { return ____items_1; }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_StaticFields, ____emptyArray_5)); }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>
struct List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35, ____items_1)); }
	inline AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* get__items_1() const { return ____items_1; }
	inline AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35_StaticFields, ____emptyArray_5)); }
	inline AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AckItemU5BU5D_t16E6F0F8EDCAD3760512E2474ED18BA9CF03862C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<kcp2k.Segment>
struct Queue_1_t343671E76428372919D5EB07B4670B58D55E2318  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____array_0)); }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* get__array_0() const { return ____array_0; }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<kcp2k.Segment>
struct Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B, ____array_0)); }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* get__array_0() const { return ____array_0; }
	inline SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(SegmentU5BU5D_tE4B79E2BFD37743C6419363DBE4DD0B9074873E7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A, ___dictionary_0)); }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Console
struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07  : public RuntimeObject
{
public:

public:
};

struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdout_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stderr_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdin_2)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___inputEncoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___outputEncoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// kcp2k.Kcp
struct Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F  : public RuntimeObject
{
public:
	// System.Int32 kcp2k.Kcp::state
	int32_t ___state_22;
	// System.UInt32 kcp2k.Kcp::conv
	uint32_t ___conv_23;
	// System.UInt32 kcp2k.Kcp::mtu
	uint32_t ___mtu_24;
	// System.UInt32 kcp2k.Kcp::mss
	uint32_t ___mss_25;
	// System.UInt32 kcp2k.Kcp::snd_una
	uint32_t ___snd_una_26;
	// System.UInt32 kcp2k.Kcp::snd_nxt
	uint32_t ___snd_nxt_27;
	// System.UInt32 kcp2k.Kcp::rcv_nxt
	uint32_t ___rcv_nxt_28;
	// System.UInt32 kcp2k.Kcp::ssthresh
	uint32_t ___ssthresh_29;
	// System.Int32 kcp2k.Kcp::rx_rttval
	int32_t ___rx_rttval_30;
	// System.Int32 kcp2k.Kcp::rx_srtt
	int32_t ___rx_srtt_31;
	// System.Int32 kcp2k.Kcp::rx_rto
	int32_t ___rx_rto_32;
	// System.Int32 kcp2k.Kcp::rx_minrto
	int32_t ___rx_minrto_33;
	// System.UInt32 kcp2k.Kcp::snd_wnd
	uint32_t ___snd_wnd_34;
	// System.UInt32 kcp2k.Kcp::rcv_wnd
	uint32_t ___rcv_wnd_35;
	// System.UInt32 kcp2k.Kcp::rmt_wnd
	uint32_t ___rmt_wnd_36;
	// System.UInt32 kcp2k.Kcp::cwnd
	uint32_t ___cwnd_37;
	// System.UInt32 kcp2k.Kcp::probe
	uint32_t ___probe_38;
	// System.UInt32 kcp2k.Kcp::interval
	uint32_t ___interval_39;
	// System.UInt32 kcp2k.Kcp::ts_flush
	uint32_t ___ts_flush_40;
	// System.UInt32 kcp2k.Kcp::xmit
	uint32_t ___xmit_41;
	// System.UInt32 kcp2k.Kcp::nodelay
	uint32_t ___nodelay_42;
	// System.Boolean kcp2k.Kcp::updated
	bool ___updated_43;
	// System.UInt32 kcp2k.Kcp::ts_probe
	uint32_t ___ts_probe_44;
	// System.UInt32 kcp2k.Kcp::probe_wait
	uint32_t ___probe_wait_45;
	// System.UInt32 kcp2k.Kcp::dead_link
	uint32_t ___dead_link_46;
	// System.UInt32 kcp2k.Kcp::incr
	uint32_t ___incr_47;
	// System.UInt32 kcp2k.Kcp::current
	uint32_t ___current_48;
	// System.Int32 kcp2k.Kcp::fastresend
	int32_t ___fastresend_49;
	// System.Int32 kcp2k.Kcp::fastlimit
	int32_t ___fastlimit_50;
	// System.Boolean kcp2k.Kcp::nocwnd
	bool ___nocwnd_51;
	// System.Collections.Generic.Queue`1<kcp2k.Segment> kcp2k.Kcp::snd_queue
	Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * ___snd_queue_52;
	// System.Collections.Generic.Queue`1<kcp2k.Segment> kcp2k.Kcp::rcv_queue
	Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * ___rcv_queue_53;
	// System.Collections.Generic.List`1<kcp2k.Segment> kcp2k.Kcp::snd_buf
	List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * ___snd_buf_54;
	// System.Collections.Generic.List`1<kcp2k.Segment> kcp2k.Kcp::rcv_buf
	List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * ___rcv_buf_55;
	// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem> kcp2k.Kcp::acklist
	List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * ___acklist_56;
	// System.Byte[] kcp2k.Kcp::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_57;
	// System.Action`2<System.Byte[],System.Int32> kcp2k.Kcp::output
	Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * ___output_58;

public:
	inline static int32_t get_offset_of_state_22() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___state_22)); }
	inline int32_t get_state_22() const { return ___state_22; }
	inline int32_t* get_address_of_state_22() { return &___state_22; }
	inline void set_state_22(int32_t value)
	{
		___state_22 = value;
	}

	inline static int32_t get_offset_of_conv_23() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___conv_23)); }
	inline uint32_t get_conv_23() const { return ___conv_23; }
	inline uint32_t* get_address_of_conv_23() { return &___conv_23; }
	inline void set_conv_23(uint32_t value)
	{
		___conv_23 = value;
	}

	inline static int32_t get_offset_of_mtu_24() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___mtu_24)); }
	inline uint32_t get_mtu_24() const { return ___mtu_24; }
	inline uint32_t* get_address_of_mtu_24() { return &___mtu_24; }
	inline void set_mtu_24(uint32_t value)
	{
		___mtu_24 = value;
	}

	inline static int32_t get_offset_of_mss_25() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___mss_25)); }
	inline uint32_t get_mss_25() const { return ___mss_25; }
	inline uint32_t* get_address_of_mss_25() { return &___mss_25; }
	inline void set_mss_25(uint32_t value)
	{
		___mss_25 = value;
	}

	inline static int32_t get_offset_of_snd_una_26() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___snd_una_26)); }
	inline uint32_t get_snd_una_26() const { return ___snd_una_26; }
	inline uint32_t* get_address_of_snd_una_26() { return &___snd_una_26; }
	inline void set_snd_una_26(uint32_t value)
	{
		___snd_una_26 = value;
	}

	inline static int32_t get_offset_of_snd_nxt_27() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___snd_nxt_27)); }
	inline uint32_t get_snd_nxt_27() const { return ___snd_nxt_27; }
	inline uint32_t* get_address_of_snd_nxt_27() { return &___snd_nxt_27; }
	inline void set_snd_nxt_27(uint32_t value)
	{
		___snd_nxt_27 = value;
	}

	inline static int32_t get_offset_of_rcv_nxt_28() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rcv_nxt_28)); }
	inline uint32_t get_rcv_nxt_28() const { return ___rcv_nxt_28; }
	inline uint32_t* get_address_of_rcv_nxt_28() { return &___rcv_nxt_28; }
	inline void set_rcv_nxt_28(uint32_t value)
	{
		___rcv_nxt_28 = value;
	}

	inline static int32_t get_offset_of_ssthresh_29() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___ssthresh_29)); }
	inline uint32_t get_ssthresh_29() const { return ___ssthresh_29; }
	inline uint32_t* get_address_of_ssthresh_29() { return &___ssthresh_29; }
	inline void set_ssthresh_29(uint32_t value)
	{
		___ssthresh_29 = value;
	}

	inline static int32_t get_offset_of_rx_rttval_30() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rx_rttval_30)); }
	inline int32_t get_rx_rttval_30() const { return ___rx_rttval_30; }
	inline int32_t* get_address_of_rx_rttval_30() { return &___rx_rttval_30; }
	inline void set_rx_rttval_30(int32_t value)
	{
		___rx_rttval_30 = value;
	}

	inline static int32_t get_offset_of_rx_srtt_31() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rx_srtt_31)); }
	inline int32_t get_rx_srtt_31() const { return ___rx_srtt_31; }
	inline int32_t* get_address_of_rx_srtt_31() { return &___rx_srtt_31; }
	inline void set_rx_srtt_31(int32_t value)
	{
		___rx_srtt_31 = value;
	}

	inline static int32_t get_offset_of_rx_rto_32() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rx_rto_32)); }
	inline int32_t get_rx_rto_32() const { return ___rx_rto_32; }
	inline int32_t* get_address_of_rx_rto_32() { return &___rx_rto_32; }
	inline void set_rx_rto_32(int32_t value)
	{
		___rx_rto_32 = value;
	}

	inline static int32_t get_offset_of_rx_minrto_33() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rx_minrto_33)); }
	inline int32_t get_rx_minrto_33() const { return ___rx_minrto_33; }
	inline int32_t* get_address_of_rx_minrto_33() { return &___rx_minrto_33; }
	inline void set_rx_minrto_33(int32_t value)
	{
		___rx_minrto_33 = value;
	}

	inline static int32_t get_offset_of_snd_wnd_34() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___snd_wnd_34)); }
	inline uint32_t get_snd_wnd_34() const { return ___snd_wnd_34; }
	inline uint32_t* get_address_of_snd_wnd_34() { return &___snd_wnd_34; }
	inline void set_snd_wnd_34(uint32_t value)
	{
		___snd_wnd_34 = value;
	}

	inline static int32_t get_offset_of_rcv_wnd_35() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rcv_wnd_35)); }
	inline uint32_t get_rcv_wnd_35() const { return ___rcv_wnd_35; }
	inline uint32_t* get_address_of_rcv_wnd_35() { return &___rcv_wnd_35; }
	inline void set_rcv_wnd_35(uint32_t value)
	{
		___rcv_wnd_35 = value;
	}

	inline static int32_t get_offset_of_rmt_wnd_36() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rmt_wnd_36)); }
	inline uint32_t get_rmt_wnd_36() const { return ___rmt_wnd_36; }
	inline uint32_t* get_address_of_rmt_wnd_36() { return &___rmt_wnd_36; }
	inline void set_rmt_wnd_36(uint32_t value)
	{
		___rmt_wnd_36 = value;
	}

	inline static int32_t get_offset_of_cwnd_37() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___cwnd_37)); }
	inline uint32_t get_cwnd_37() const { return ___cwnd_37; }
	inline uint32_t* get_address_of_cwnd_37() { return &___cwnd_37; }
	inline void set_cwnd_37(uint32_t value)
	{
		___cwnd_37 = value;
	}

	inline static int32_t get_offset_of_probe_38() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___probe_38)); }
	inline uint32_t get_probe_38() const { return ___probe_38; }
	inline uint32_t* get_address_of_probe_38() { return &___probe_38; }
	inline void set_probe_38(uint32_t value)
	{
		___probe_38 = value;
	}

	inline static int32_t get_offset_of_interval_39() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___interval_39)); }
	inline uint32_t get_interval_39() const { return ___interval_39; }
	inline uint32_t* get_address_of_interval_39() { return &___interval_39; }
	inline void set_interval_39(uint32_t value)
	{
		___interval_39 = value;
	}

	inline static int32_t get_offset_of_ts_flush_40() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___ts_flush_40)); }
	inline uint32_t get_ts_flush_40() const { return ___ts_flush_40; }
	inline uint32_t* get_address_of_ts_flush_40() { return &___ts_flush_40; }
	inline void set_ts_flush_40(uint32_t value)
	{
		___ts_flush_40 = value;
	}

	inline static int32_t get_offset_of_xmit_41() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___xmit_41)); }
	inline uint32_t get_xmit_41() const { return ___xmit_41; }
	inline uint32_t* get_address_of_xmit_41() { return &___xmit_41; }
	inline void set_xmit_41(uint32_t value)
	{
		___xmit_41 = value;
	}

	inline static int32_t get_offset_of_nodelay_42() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___nodelay_42)); }
	inline uint32_t get_nodelay_42() const { return ___nodelay_42; }
	inline uint32_t* get_address_of_nodelay_42() { return &___nodelay_42; }
	inline void set_nodelay_42(uint32_t value)
	{
		___nodelay_42 = value;
	}

	inline static int32_t get_offset_of_updated_43() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___updated_43)); }
	inline bool get_updated_43() const { return ___updated_43; }
	inline bool* get_address_of_updated_43() { return &___updated_43; }
	inline void set_updated_43(bool value)
	{
		___updated_43 = value;
	}

	inline static int32_t get_offset_of_ts_probe_44() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___ts_probe_44)); }
	inline uint32_t get_ts_probe_44() const { return ___ts_probe_44; }
	inline uint32_t* get_address_of_ts_probe_44() { return &___ts_probe_44; }
	inline void set_ts_probe_44(uint32_t value)
	{
		___ts_probe_44 = value;
	}

	inline static int32_t get_offset_of_probe_wait_45() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___probe_wait_45)); }
	inline uint32_t get_probe_wait_45() const { return ___probe_wait_45; }
	inline uint32_t* get_address_of_probe_wait_45() { return &___probe_wait_45; }
	inline void set_probe_wait_45(uint32_t value)
	{
		___probe_wait_45 = value;
	}

	inline static int32_t get_offset_of_dead_link_46() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___dead_link_46)); }
	inline uint32_t get_dead_link_46() const { return ___dead_link_46; }
	inline uint32_t* get_address_of_dead_link_46() { return &___dead_link_46; }
	inline void set_dead_link_46(uint32_t value)
	{
		___dead_link_46 = value;
	}

	inline static int32_t get_offset_of_incr_47() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___incr_47)); }
	inline uint32_t get_incr_47() const { return ___incr_47; }
	inline uint32_t* get_address_of_incr_47() { return &___incr_47; }
	inline void set_incr_47(uint32_t value)
	{
		___incr_47 = value;
	}

	inline static int32_t get_offset_of_current_48() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___current_48)); }
	inline uint32_t get_current_48() const { return ___current_48; }
	inline uint32_t* get_address_of_current_48() { return &___current_48; }
	inline void set_current_48(uint32_t value)
	{
		___current_48 = value;
	}

	inline static int32_t get_offset_of_fastresend_49() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___fastresend_49)); }
	inline int32_t get_fastresend_49() const { return ___fastresend_49; }
	inline int32_t* get_address_of_fastresend_49() { return &___fastresend_49; }
	inline void set_fastresend_49(int32_t value)
	{
		___fastresend_49 = value;
	}

	inline static int32_t get_offset_of_fastlimit_50() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___fastlimit_50)); }
	inline int32_t get_fastlimit_50() const { return ___fastlimit_50; }
	inline int32_t* get_address_of_fastlimit_50() { return &___fastlimit_50; }
	inline void set_fastlimit_50(int32_t value)
	{
		___fastlimit_50 = value;
	}

	inline static int32_t get_offset_of_nocwnd_51() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___nocwnd_51)); }
	inline bool get_nocwnd_51() const { return ___nocwnd_51; }
	inline bool* get_address_of_nocwnd_51() { return &___nocwnd_51; }
	inline void set_nocwnd_51(bool value)
	{
		___nocwnd_51 = value;
	}

	inline static int32_t get_offset_of_snd_queue_52() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___snd_queue_52)); }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * get_snd_queue_52() const { return ___snd_queue_52; }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 ** get_address_of_snd_queue_52() { return &___snd_queue_52; }
	inline void set_snd_queue_52(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * value)
	{
		___snd_queue_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snd_queue_52), (void*)value);
	}

	inline static int32_t get_offset_of_rcv_queue_53() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rcv_queue_53)); }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * get_rcv_queue_53() const { return ___rcv_queue_53; }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 ** get_address_of_rcv_queue_53() { return &___rcv_queue_53; }
	inline void set_rcv_queue_53(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * value)
	{
		___rcv_queue_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rcv_queue_53), (void*)value);
	}

	inline static int32_t get_offset_of_snd_buf_54() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___snd_buf_54)); }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * get_snd_buf_54() const { return ___snd_buf_54; }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B ** get_address_of_snd_buf_54() { return &___snd_buf_54; }
	inline void set_snd_buf_54(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * value)
	{
		___snd_buf_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snd_buf_54), (void*)value);
	}

	inline static int32_t get_offset_of_rcv_buf_55() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___rcv_buf_55)); }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * get_rcv_buf_55() const { return ___rcv_buf_55; }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B ** get_address_of_rcv_buf_55() { return &___rcv_buf_55; }
	inline void set_rcv_buf_55(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * value)
	{
		___rcv_buf_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rcv_buf_55), (void*)value);
	}

	inline static int32_t get_offset_of_acklist_56() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___acklist_56)); }
	inline List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * get_acklist_56() const { return ___acklist_56; }
	inline List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 ** get_address_of_acklist_56() { return &___acklist_56; }
	inline void set_acklist_56(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * value)
	{
		___acklist_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___acklist_56), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_57() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___buffer_57)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_57() const { return ___buffer_57; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_57() { return &___buffer_57; }
	inline void set_buffer_57(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_57), (void*)value);
	}

	inline static int32_t get_offset_of_output_58() { return static_cast<int32_t>(offsetof(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F, ___output_58)); }
	inline Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * get_output_58() const { return ___output_58; }
	inline Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA ** get_address_of_output_58() { return &___output_58; }
	inline void set_output_58(Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * value)
	{
		___output_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_58), (void*)value);
	}
};


// kcp2k.KcpClient
struct KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE  : public RuntimeObject
{
public:
	// System.Action kcp2k.KcpClient::OnConnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnConnected_0;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpClient::OnData
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___OnData_1;
	// System.Action kcp2k.KcpClient::OnDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnected_2;
	// kcp2k.KcpClientConnection kcp2k.KcpClient::connection
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * ___connection_3;
	// System.Boolean kcp2k.KcpClient::connected
	bool ___connected_4;

public:
	inline static int32_t get_offset_of_OnConnected_0() { return static_cast<int32_t>(offsetof(KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE, ___OnConnected_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnConnected_0() const { return ___OnConnected_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnConnected_0() { return &___OnConnected_0; }
	inline void set_OnConnected_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnConnected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_1() { return static_cast<int32_t>(offsetof(KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE, ___OnData_1)); }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * get_OnData_1() const { return ___OnData_1; }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC ** get_address_of_OnData_1() { return &___OnData_1; }
	inline void set_OnData_1(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * value)
	{
		___OnData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_2() { return static_cast<int32_t>(offsetof(KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE, ___OnDisconnected_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisconnected_2() const { return ___OnDisconnected_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisconnected_2() { return &___OnDisconnected_2; }
	inline void set_OnDisconnected_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisconnected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_2), (void*)value);
	}

	inline static int32_t get_offset_of_connection_3() { return static_cast<int32_t>(offsetof(KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE, ___connection_3)); }
	inline KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * get_connection_3() const { return ___connection_3; }
	inline KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 ** get_address_of_connection_3() { return &___connection_3; }
	inline void set_connection_3(KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * value)
	{
		___connection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connection_3), (void*)value);
	}

	inline static int32_t get_offset_of_connected_4() { return static_cast<int32_t>(offsetof(KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE, ___connected_4)); }
	inline bool get_connected_4() const { return ___connected_4; }
	inline bool* get_address_of_connected_4() { return &___connected_4; }
	inline void set_connected_4(bool value)
	{
		___connected_4 = value;
	}
};


// kcp2k.KcpServer
struct KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A  : public RuntimeObject
{
public:
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnConnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnConnected_0;
	// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>> kcp2k.KcpServer::OnData
	Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * ___OnData_1;
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnDisconnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnDisconnected_2;
	// System.Boolean kcp2k.KcpServer::NoDelay
	bool ___NoDelay_3;
	// System.UInt32 kcp2k.KcpServer::Interval
	uint32_t ___Interval_4;
	// System.Int32 kcp2k.KcpServer::FastResend
	int32_t ___FastResend_5;
	// System.Boolean kcp2k.KcpServer::CongestionWindow
	bool ___CongestionWindow_6;
	// System.UInt32 kcp2k.KcpServer::SendWindowSize
	uint32_t ___SendWindowSize_7;
	// System.UInt32 kcp2k.KcpServer::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_8;
	// System.Net.Sockets.Socket kcp2k.KcpServer::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_9;
	// System.Net.EndPoint kcp2k.KcpServer::newClientEP
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___newClientEP_10;
	// System.Byte[] kcp2k.KcpServer::rawReceiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawReceiveBuffer_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection> kcp2k.KcpServer::connections
	Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * ___connections_12;
	// System.Collections.Generic.HashSet`1<System.Int32> kcp2k.KcpServer::connectionsToRemove
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___connectionsToRemove_13;

public:
	inline static int32_t get_offset_of_OnConnected_0() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___OnConnected_0)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnConnected_0() const { return ___OnConnected_0; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnConnected_0() { return &___OnConnected_0; }
	inline void set_OnConnected_0(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnConnected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnected_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_1() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___OnData_1)); }
	inline Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * get_OnData_1() const { return ___OnData_1; }
	inline Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 ** get_address_of_OnData_1() { return &___OnData_1; }
	inline void set_OnData_1(Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * value)
	{
		___OnData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_2() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___OnDisconnected_2)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnDisconnected_2() const { return ___OnDisconnected_2; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnDisconnected_2() { return &___OnDisconnected_2; }
	inline void set_OnDisconnected_2(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnDisconnected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_2), (void*)value);
	}

	inline static int32_t get_offset_of_NoDelay_3() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___NoDelay_3)); }
	inline bool get_NoDelay_3() const { return ___NoDelay_3; }
	inline bool* get_address_of_NoDelay_3() { return &___NoDelay_3; }
	inline void set_NoDelay_3(bool value)
	{
		___NoDelay_3 = value;
	}

	inline static int32_t get_offset_of_Interval_4() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___Interval_4)); }
	inline uint32_t get_Interval_4() const { return ___Interval_4; }
	inline uint32_t* get_address_of_Interval_4() { return &___Interval_4; }
	inline void set_Interval_4(uint32_t value)
	{
		___Interval_4 = value;
	}

	inline static int32_t get_offset_of_FastResend_5() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___FastResend_5)); }
	inline int32_t get_FastResend_5() const { return ___FastResend_5; }
	inline int32_t* get_address_of_FastResend_5() { return &___FastResend_5; }
	inline void set_FastResend_5(int32_t value)
	{
		___FastResend_5 = value;
	}

	inline static int32_t get_offset_of_CongestionWindow_6() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___CongestionWindow_6)); }
	inline bool get_CongestionWindow_6() const { return ___CongestionWindow_6; }
	inline bool* get_address_of_CongestionWindow_6() { return &___CongestionWindow_6; }
	inline void set_CongestionWindow_6(bool value)
	{
		___CongestionWindow_6 = value;
	}

	inline static int32_t get_offset_of_SendWindowSize_7() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___SendWindowSize_7)); }
	inline uint32_t get_SendWindowSize_7() const { return ___SendWindowSize_7; }
	inline uint32_t* get_address_of_SendWindowSize_7() { return &___SendWindowSize_7; }
	inline void set_SendWindowSize_7(uint32_t value)
	{
		___SendWindowSize_7 = value;
	}

	inline static int32_t get_offset_of_ReceiveWindowSize_8() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___ReceiveWindowSize_8)); }
	inline uint32_t get_ReceiveWindowSize_8() const { return ___ReceiveWindowSize_8; }
	inline uint32_t* get_address_of_ReceiveWindowSize_8() { return &___ReceiveWindowSize_8; }
	inline void set_ReceiveWindowSize_8(uint32_t value)
	{
		___ReceiveWindowSize_8 = value;
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___socket_9)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_9() const { return ___socket_9; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_9), (void*)value);
	}

	inline static int32_t get_offset_of_newClientEP_10() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___newClientEP_10)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_newClientEP_10() const { return ___newClientEP_10; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_newClientEP_10() { return &___newClientEP_10; }
	inline void set_newClientEP_10(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___newClientEP_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newClientEP_10), (void*)value);
	}

	inline static int32_t get_offset_of_rawReceiveBuffer_11() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___rawReceiveBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawReceiveBuffer_11() const { return ___rawReceiveBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawReceiveBuffer_11() { return &___rawReceiveBuffer_11; }
	inline void set_rawReceiveBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawReceiveBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawReceiveBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of_connections_12() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___connections_12)); }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * get_connections_12() const { return ___connections_12; }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 ** get_address_of_connections_12() { return &___connections_12; }
	inline void set_connections_12(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * value)
	{
		___connections_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_12), (void*)value);
	}

	inline static int32_t get_offset_of_connectionsToRemove_13() { return static_cast<int32_t>(offsetof(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A, ___connectionsToRemove_13)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_connectionsToRemove_13() const { return ___connectionsToRemove_13; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_connectionsToRemove_13() { return &___connectionsToRemove_13; }
	inline void set_connectionsToRemove_13(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___connectionsToRemove_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionsToRemove_13), (void*)value);
	}
};


// kcp2k.Log
struct Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76  : public RuntimeObject
{
public:

public:
};

struct Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields
{
public:
	// System.Action`1<System.String> kcp2k.Log::Info
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Info_0;
	// System.Action`1<System.String> kcp2k.Log::Warning
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Warning_1;
	// System.Action`1<System.String> kcp2k.Log::Error
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Error_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields, ___Info_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Info_0() const { return ___Info_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_Warning_1() { return static_cast<int32_t>(offsetof(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields, ___Warning_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Warning_1() const { return ___Warning_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Warning_1() { return &___Warning_1; }
	inline void set_Warning_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Warning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warning_1), (void*)value);
	}

	inline static int32_t get_offset_of_Error_2() { return static_cast<int32_t>(offsetof(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields, ___Error_2)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Error_2() const { return ___Error_2; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Error_2() { return &___Error_2; }
	inline void set_Error_2(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_2), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// kcp2k.Segment
struct Segment_tACB68E9F98BAFBA054171073036C69BAF3688322  : public RuntimeObject
{
public:
	// System.UInt32 kcp2k.Segment::conv
	uint32_t ___conv_0;
	// System.UInt32 kcp2k.Segment::cmd
	uint32_t ___cmd_1;
	// System.UInt32 kcp2k.Segment::frg
	uint32_t ___frg_2;
	// System.UInt32 kcp2k.Segment::wnd
	uint32_t ___wnd_3;
	// System.UInt32 kcp2k.Segment::ts
	uint32_t ___ts_4;
	// System.UInt32 kcp2k.Segment::sn
	uint32_t ___sn_5;
	// System.UInt32 kcp2k.Segment::una
	uint32_t ___una_6;
	// System.UInt32 kcp2k.Segment::resendts
	uint32_t ___resendts_7;
	// System.Int32 kcp2k.Segment::rto
	int32_t ___rto_8;
	// System.UInt32 kcp2k.Segment::fastack
	uint32_t ___fastack_9;
	// System.UInt32 kcp2k.Segment::xmit
	uint32_t ___xmit_10;
	// System.IO.MemoryStream kcp2k.Segment::data
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___data_11;

public:
	inline static int32_t get_offset_of_conv_0() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___conv_0)); }
	inline uint32_t get_conv_0() const { return ___conv_0; }
	inline uint32_t* get_address_of_conv_0() { return &___conv_0; }
	inline void set_conv_0(uint32_t value)
	{
		___conv_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___cmd_1)); }
	inline uint32_t get_cmd_1() const { return ___cmd_1; }
	inline uint32_t* get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(uint32_t value)
	{
		___cmd_1 = value;
	}

	inline static int32_t get_offset_of_frg_2() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___frg_2)); }
	inline uint32_t get_frg_2() const { return ___frg_2; }
	inline uint32_t* get_address_of_frg_2() { return &___frg_2; }
	inline void set_frg_2(uint32_t value)
	{
		___frg_2 = value;
	}

	inline static int32_t get_offset_of_wnd_3() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___wnd_3)); }
	inline uint32_t get_wnd_3() const { return ___wnd_3; }
	inline uint32_t* get_address_of_wnd_3() { return &___wnd_3; }
	inline void set_wnd_3(uint32_t value)
	{
		___wnd_3 = value;
	}

	inline static int32_t get_offset_of_ts_4() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___ts_4)); }
	inline uint32_t get_ts_4() const { return ___ts_4; }
	inline uint32_t* get_address_of_ts_4() { return &___ts_4; }
	inline void set_ts_4(uint32_t value)
	{
		___ts_4 = value;
	}

	inline static int32_t get_offset_of_sn_5() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___sn_5)); }
	inline uint32_t get_sn_5() const { return ___sn_5; }
	inline uint32_t* get_address_of_sn_5() { return &___sn_5; }
	inline void set_sn_5(uint32_t value)
	{
		___sn_5 = value;
	}

	inline static int32_t get_offset_of_una_6() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___una_6)); }
	inline uint32_t get_una_6() const { return ___una_6; }
	inline uint32_t* get_address_of_una_6() { return &___una_6; }
	inline void set_una_6(uint32_t value)
	{
		___una_6 = value;
	}

	inline static int32_t get_offset_of_resendts_7() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___resendts_7)); }
	inline uint32_t get_resendts_7() const { return ___resendts_7; }
	inline uint32_t* get_address_of_resendts_7() { return &___resendts_7; }
	inline void set_resendts_7(uint32_t value)
	{
		___resendts_7 = value;
	}

	inline static int32_t get_offset_of_rto_8() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___rto_8)); }
	inline int32_t get_rto_8() const { return ___rto_8; }
	inline int32_t* get_address_of_rto_8() { return &___rto_8; }
	inline void set_rto_8(int32_t value)
	{
		___rto_8 = value;
	}

	inline static int32_t get_offset_of_fastack_9() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___fastack_9)); }
	inline uint32_t get_fastack_9() const { return ___fastack_9; }
	inline uint32_t* get_address_of_fastack_9() { return &___fastack_9; }
	inline void set_fastack_9(uint32_t value)
	{
		___fastack_9 = value;
	}

	inline static int32_t get_offset_of_xmit_10() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___xmit_10)); }
	inline uint32_t get_xmit_10() const { return ___xmit_10; }
	inline uint32_t* get_address_of_xmit_10() { return &___xmit_10; }
	inline void set_xmit_10(uint32_t value)
	{
		___xmit_10 = value;
	}

	inline static int32_t get_offset_of_data_11() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322, ___data_11)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_data_11() const { return ___data_11; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_data_11() { return &___data_11; }
	inline void set_data_11(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___data_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_11), (void*)value);
	}
};

struct Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<kcp2k.Segment> kcp2k.Segment::Pool
	Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * ___Pool_12;

public:
	inline static int32_t get_offset_of_Pool_12() { return static_cast<int32_t>(offsetof(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields, ___Pool_12)); }
	inline Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * get_Pool_12() const { return ___Pool_12; }
	inline Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B ** get_address_of_Pool_12() { return &___Pool_12; }
	inline void set_Pool_12(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * value)
	{
		___Pool_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pool_12), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// kcp2k.Utils
struct Utils_t1140F1585929A56AD3CC54A874EA1C13DEA3EE78  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// kcp2k.KcpServer/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26  : public RuntimeObject
{
public:
	// System.Int32 kcp2k.KcpServer/<>c__DisplayClass20_0::connectionId
	int32_t ___connectionId_0;
	// kcp2k.KcpServer kcp2k.KcpServer/<>c__DisplayClass20_0::<>4__this
	KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * ___U3CU3E4__this_1;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpServer/<>c__DisplayClass20_0::<>9__1
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___U3CU3E9__1_2;
	// System.Action kcp2k.KcpServer/<>c__DisplayClass20_0::<>9__2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__2_3;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26, ___U3CU3E4__this_1)); }
	inline KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26, ___U3CU3E9__1_2)); }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26, ___U3CU3E9__2_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__2_3() const { return ___U3CU3E9__2_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__2_3() { return &___U3CU3E9__2_3; }
	inline void set_U3CU3E9__2_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3), (void*)value);
	}
};


// kcp2k.KcpServer/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10  : public RuntimeObject
{
public:
	// kcp2k.KcpServerConnection kcp2k.KcpServer/<>c__DisplayClass20_1::connection
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___connection_0;
	// kcp2k.KcpServer/<>c__DisplayClass20_0 kcp2k.KcpServer/<>c__DisplayClass20_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_connection_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10, ___connection_0)); }
	inline KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * get_connection_0() const { return ___connection_0; }
	inline KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 ** get_address_of_connection_0() { return &___connection_0; }
	inline void set_connection_0(KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * value)
	{
		___connection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connection_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
struct Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844, ____set_0)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get__set_0() const { return ____set_0; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____q_0)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get__q_0() const { return ____q_0; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C, ____currentElement_3)); }
	inline RuntimeObject * get__currentElement_3() const { return ____currentElement_3; }
	inline RuntimeObject ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(RuntimeObject * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>
struct Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550, ___list_0)); }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * get_list_0() const { return ___list_0; }
	inline List_1_tF81DE2A837611EA0789DA9406563F11CD088612B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550, ___current_3)); }
	inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * get_current_3() const { return ___current_3; }
	inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>
struct Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2, ____q_0)); }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * get__q_0() const { return ____q_0; }
	inline Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2, ____currentElement_3)); }
	inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * get__currentElement_3() const { return ____currentElement_3; }
	inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>
struct Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5, ___dictionary_0)); }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5, ___currentValue_3)); }
	inline KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * get_currentValue_3() const { return ___currentValue_3; }
	inline KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// kcp2k.Kcp/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F 
{
public:
	// System.Int32 kcp2k.Kcp/<>c__DisplayClass79_0::offset
	int32_t ___offset_0;
	// kcp2k.Kcp kcp2k.Kcp/<>c__DisplayClass79_0::<>4__this
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F, ___U3CU3E4__this_1)); }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// kcp2k.Kcp/AckItem
struct AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 
{
public:
	// System.UInt32 kcp2k.Kcp/AckItem::serialNumber
	uint32_t ___serialNumber_0;
	// System.UInt32 kcp2k.Kcp/AckItem::timestamp
	uint32_t ___timestamp_1;

public:
	inline static int32_t get_offset_of_serialNumber_0() { return static_cast<int32_t>(offsetof(AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475, ___serialNumber_0)); }
	inline uint32_t get_serialNumber_0() const { return ___serialNumber_0; }
	inline uint32_t* get_address_of_serialNumber_0() { return &___serialNumber_0; }
	inline void set_serialNumber_0(uint32_t value)
	{
		___serialNumber_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475, ___timestamp_1)); }
	inline uint32_t get_timestamp_1() const { return ___timestamp_1; }
	inline uint32_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(uint32_t value)
	{
		___timestamp_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>
struct Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0, ___list_0)); }
	inline List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * get_list_0() const { return ___list_0; }
	inline List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0, ___current_3)); }
	inline AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  get_current_3() const { return ___current_3; }
	inline AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  value)
	{
		___current_3 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// kcp2k.KcpChannel
struct KcpChannel_t3F751201613E324210056406516E2570793B0A22 
{
public:
	// System.Byte kcp2k.KcpChannel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpChannel_t3F751201613E324210056406516E2570793B0A22, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// kcp2k.KcpHeader
struct KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4 
{
public:
	// System.Byte kcp2k.KcpHeader::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// kcp2k.KcpState
struct KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D 
{
public:
	// System.Int32 kcp2k.KcpState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SelectMode
struct SelectMode_t7D3ECD1A1B4A1E90B7F847C52E4E8580E2112189 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t7D3ECD1A1B4A1E90B7F847C52E4E8580E2112189, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// kcp2k.KcpConnection
struct KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket kcp2k.KcpConnection::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_0;
	// System.Net.EndPoint kcp2k.KcpConnection::remoteEndpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndpoint_1;
	// kcp2k.Kcp kcp2k.KcpConnection::kcp
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * ___kcp_2;
	// kcp2k.KcpState kcp2k.KcpConnection::state
	int32_t ___state_3;
	// System.Action kcp2k.KcpConnection::OnAuthenticated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnAuthenticated_4;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpConnection::OnData
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___OnData_5;
	// System.Action kcp2k.KcpConnection::OnDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnected_6;
	// System.Boolean kcp2k.KcpConnection::paused
	bool ___paused_7;
	// System.UInt32 kcp2k.KcpConnection::lastReceiveTime
	uint32_t ___lastReceiveTime_9;
	// System.Diagnostics.Stopwatch kcp2k.KcpConnection::refTime
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___refTime_10;
	// System.Byte[] kcp2k.KcpConnection::kcpMessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___kcpMessageBuffer_14;
	// System.Byte[] kcp2k.KcpConnection::kcpSendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___kcpSendBuffer_15;
	// System.Byte[] kcp2k.KcpConnection::rawSendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawSendBuffer_16;
	// System.UInt32 kcp2k.KcpConnection::lastPingTime
	uint32_t ___lastPingTime_18;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___socket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_0() const { return ___socket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpoint_1() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___remoteEndpoint_1)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_remoteEndpoint_1() const { return ___remoteEndpoint_1; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_remoteEndpoint_1() { return &___remoteEndpoint_1; }
	inline void set_remoteEndpoint_1(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___remoteEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpoint_1), (void*)value);
	}

	inline static int32_t get_offset_of_kcp_2() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcp_2)); }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * get_kcp_2() const { return ___kcp_2; }
	inline Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F ** get_address_of_kcp_2() { return &___kcp_2; }
	inline void set_kcp_2(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * value)
	{
		___kcp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcp_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_OnAuthenticated_4() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnAuthenticated_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnAuthenticated_4() const { return ___OnAuthenticated_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnAuthenticated_4() { return &___OnAuthenticated_4; }
	inline void set_OnAuthenticated_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnData_5() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnData_5)); }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * get_OnData_5() const { return ___OnData_5; }
	inline Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC ** get_address_of_OnData_5() { return &___OnData_5; }
	inline void set_OnData_5(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * value)
	{
		___OnData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnData_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnected_6() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___OnDisconnected_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisconnected_6() const { return ___OnDisconnected_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisconnected_6() { return &___OnDisconnected_6; }
	inline void set_OnDisconnected_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisconnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_paused_7() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___paused_7)); }
	inline bool get_paused_7() const { return ___paused_7; }
	inline bool* get_address_of_paused_7() { return &___paused_7; }
	inline void set_paused_7(bool value)
	{
		___paused_7 = value;
	}

	inline static int32_t get_offset_of_lastReceiveTime_9() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___lastReceiveTime_9)); }
	inline uint32_t get_lastReceiveTime_9() const { return ___lastReceiveTime_9; }
	inline uint32_t* get_address_of_lastReceiveTime_9() { return &___lastReceiveTime_9; }
	inline void set_lastReceiveTime_9(uint32_t value)
	{
		___lastReceiveTime_9 = value;
	}

	inline static int32_t get_offset_of_refTime_10() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___refTime_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_refTime_10() const { return ___refTime_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_refTime_10() { return &___refTime_10; }
	inline void set_refTime_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___refTime_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refTime_10), (void*)value);
	}

	inline static int32_t get_offset_of_kcpMessageBuffer_14() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcpMessageBuffer_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_kcpMessageBuffer_14() const { return ___kcpMessageBuffer_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_kcpMessageBuffer_14() { return &___kcpMessageBuffer_14; }
	inline void set_kcpMessageBuffer_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___kcpMessageBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpMessageBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_kcpSendBuffer_15() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___kcpSendBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_kcpSendBuffer_15() const { return ___kcpSendBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_kcpSendBuffer_15() { return &___kcpSendBuffer_15; }
	inline void set_kcpSendBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___kcpSendBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kcpSendBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_rawSendBuffer_16() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___rawSendBuffer_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawSendBuffer_16() const { return ___rawSendBuffer_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawSendBuffer_16() { return &___rawSendBuffer_16; }
	inline void set_rawSendBuffer_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawSendBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawSendBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingTime_18() { return static_cast<int32_t>(offsetof(KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE, ___lastPingTime_18)); }
	inline uint32_t get_lastPingTime_18() const { return ___lastPingTime_18; }
	inline uint32_t* get_address_of_lastPingTime_18() { return &___lastPingTime_18; }
	inline void set_lastPingTime_18(uint32_t value)
	{
		___lastPingTime_18 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_26;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_17)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_18)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_19)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_20)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}

	inline static int32_t get_offset_of_ID_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_26)); }
	inline int32_t get_ID_26() const { return ___ID_26; }
	inline int32_t* get_address_of_ID_26() { return &___ID_26; }
	inline void set_ID_26(int32_t value)
	{
		___ID_26 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_41;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_27)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_27() const { return ___AcceptAsyncCallback_27; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_27() { return &___AcceptAsyncCallback_27; }
	inline void set_AcceptAsyncCallback_27(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_28)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_28() const { return ___BeginAcceptCallback_28; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_28() { return &___BeginAcceptCallback_28; }
	inline void set_BeginAcceptCallback_28(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_29() const { return ___BeginAcceptReceiveCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_29() { return &___BeginAcceptReceiveCallback_29; }
	inline void set_BeginAcceptReceiveCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_30() const { return ___ConnectAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_30() { return &___ConnectAsyncCallback_30; }
	inline void set_ConnectAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_31() const { return ___BeginConnectCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_31() { return &___BeginConnectCallback_31; }
	inline void set_BeginConnectCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_32)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_32() const { return ___DisconnectAsyncCallback_32; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_32() { return &___DisconnectAsyncCallback_32; }
	inline void set_DisconnectAsyncCallback_32(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_33)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_33() const { return ___BeginDisconnectCallback_33; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_33() { return &___BeginDisconnectCallback_33; }
	inline void set_BeginDisconnectCallback_33(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_34)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_34() const { return ___ReceiveAsyncCallback_34; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_34() { return &___ReceiveAsyncCallback_34; }
	inline void set_ReceiveAsyncCallback_34(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_35)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_35() const { return ___BeginReceiveCallback_35; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_35() { return &___BeginReceiveCallback_35; }
	inline void set_BeginReceiveCallback_35(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_36() const { return ___BeginReceiveGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_36() { return &___BeginReceiveGenericCallback_36; }
	inline void set_BeginReceiveGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_37() const { return ___ReceiveFromAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_37() { return &___ReceiveFromAsyncCallback_37; }
	inline void set_ReceiveFromAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_38() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_38)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_38() const { return ___BeginReceiveFromCallback_38; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_38() { return &___BeginReceiveFromCallback_38; }
	inline void set_BeginReceiveFromCallback_38(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_39() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_39)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_39() const { return ___SendAsyncCallback_39; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_39() { return &___SendAsyncCallback_39; }
	inline void set_SendAsyncCallback_39(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_40() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_40)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_40() const { return ___BeginSendGenericCallback_40; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_40() { return &___BeginSendGenericCallback_40; }
	inline void set_BeginSendGenericCallback_40(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_40), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_41() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_41)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_41() const { return ___SendToAsyncCallback_41; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_41() { return &___SendToAsyncCallback_41; }
	inline void set_SendToAsyncCallback_41(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_41), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Byte[],System.Int32>
struct Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// kcp2k.KcpClientConnection
struct KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877  : public KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE
{
public:
	// System.Byte[] kcp2k.KcpClientConnection::rawReceiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawReceiveBuffer_20;

public:
	inline static int32_t get_offset_of_rawReceiveBuffer_20() { return static_cast<int32_t>(offsetof(KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877, ___rawReceiveBuffer_20)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_rawReceiveBuffer_20() const { return ___rawReceiveBuffer_20; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_rawReceiveBuffer_20() { return &___rawReceiveBuffer_20; }
	inline void set_rawReceiveBuffer_20(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___rawReceiveBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawReceiveBuffer_20), (void*)value);
	}
};


// kcp2k.KcpServerConnection
struct KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5  : public KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B_gshared (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m68EC2DECAF6CF6D92F2E2BDB5AD1CD84EB52AFC2_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m569423674869D1BC83C295B8D0F156855406FA4E_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_mFD34B526C2E152735833C2A9BA0C63248AAD8B1A_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C  Queue_1_GetEnumerator_m0A2D0CB499E67870A0F7049947F958A7C8B7F4D3_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m2735F03B97A5F6B6933BE5DDF1C9D458A0EE3AD2_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m021EA477154DFEF16C293069BAA564C75FE058BA_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAC863B8783E18A16FEAE03EF6B53E216A0D8A154_gshared (Enumerator_t7AA6AE94A0D53334AA15EFC74FE63FF525189B8C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD_gshared (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mAF0CC2EDCA42FFDA178E720B4D907F19DBF91D11_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0  List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2_gshared (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_gshared_inline (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94_gshared (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3_gshared (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C_gshared (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mAA2FFFC084F845E770473201F3F4DD6805F0F3FE_gshared (Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57 * __this, RuntimeObject * ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_gshared (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_gshared (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared (Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m17490CDFCBD13F99815D7B3EB5F15C4077EF046E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m116498B20BFCD224B871BC8DA02275D603476790_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_mFFEB92C4990FE08EFE0F5FEEA32516477CE4A393_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mA813BDE3D37661127262F8BAA8D45A43351A9D17_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844  HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_gshared_inline (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5373547512F4309721CEAA8DF32428929E8887BC_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404_gshared (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17_gshared (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m8FFF613733BF88B54FCD4498B1E97DE296E27757_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A_gshared (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5C6C3AD7291F4771E4AE045CE128CD59395E6A45_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Int32 System.Collections.Generic.List`1<kcp2k.Segment>::get_Count()
inline int32_t List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<kcp2k.Segment>::get_Count()
inline int32_t Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::.ctor(System.Int32)
inline void Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::.ctor(System.Int32)
inline void List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60 (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::.ctor(System.Int32)
inline void List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 *, int32_t, const RuntimeMethod*))List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// kcp2k.Segment kcp2k.Segment::Take()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Segment_Take_mA4221F2958E30468C63EB2C0799CF62B8C8BC534 (const RuntimeMethod* method);
// System.Void kcp2k.Segment::Return(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Return_m9602E873C29E7DA9E42793A01527506229B9C8B4 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___seg0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 kcp2k.Kcp::PeekSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_PeekSize_m89D4AEC809F235DE2F6159ADAF20B68F7FF85D32 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<kcp2k.Segment>::Dequeue()
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, const RuntimeMethod*))Queue_1_Dequeue_m68EC2DECAF6CF6D92F2E2BDB5AD1CD84EB52AFC2_gshared)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::SegmentDelete(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___seg0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<kcp2k.Segment>::GetEnumerator()
inline Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754 (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::get_Current()
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 * __this, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::Enqueue(!0)
inline void Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99 (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 *, const RuntimeMethod*))Queue_1_Enqueue_m569423674869D1BC83C295B8D0F156855406FA4E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::MoveNext()
inline bool Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6 (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::Dispose()
inline void Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7 (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// !0 System.Collections.Generic.Queue`1<kcp2k.Segment>::Peek()
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Queue_1_Peek_m2A1EC7556C639C246431FD8BD8307B033AA3D678 (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, const RuntimeMethod*))Queue_1_Peek_mFD34B526C2E152735833C2A9BA0C63248AAD8B1A_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<kcp2k.Segment>::GetEnumerator()
inline Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2  Queue_1_GetEnumerator_mDE7FC300CD77706386924278DFDB2F5A9BA76E61 (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2  (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, const RuntimeMethod*))Queue_1_GetEnumerator_m0A2D0CB499E67870A0F7049947F958A7C8B7F4D3_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::get_Current()
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Enumerator_get_Current_mB9D6FC64031F10CB1B89C01CA35E2F45DDAF471A (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 * __this, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *, const RuntimeMethod*))Enumerator_get_Current_m2735F03B97A5F6B6933BE5DDF1C9D458A0EE3AD2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::MoveNext()
inline bool Enumerator_MoveNext_m3A820B3503F2841A7F6D137447223C8795AA9861 (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *, const RuntimeMethod*))Enumerator_MoveNext_m021EA477154DFEF16C293069BAA564C75FE058BA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::Dispose()
inline void Enumerator_Dispose_m2E833F937AEC5CE9D954DB695828904B57ADF31A (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *, const RuntimeMethod*))Enumerator_Dispose_mAC863B8783E18A16FEAE03EF6B53E216A0D8A154_gshared)(__this, method);
}
// kcp2k.Segment kcp2k.Kcp::SegmentNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Kcp_SegmentNew_m21B61522D5844011591FB83201D4E29F94F28F4F (const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 kcp2k.Utils::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Clamp_m7BFD0C83FDB7D2577B203264F958E62B3B9B5EF2 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<kcp2k.Segment>::get_Item(System.Int32)
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_inline (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Int32 kcp2k.Utils::TimeDiff(System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8F366D6B5594B34B0B8997F0301E655B1ECCCA0D (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Add(!0)
inline void List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 *, AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 , const RuntimeMethod*))List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD_gshared)(__this, ___item0, method);
}
// System.Void kcp2k.Kcp::InsertSegmentInReceiveBuffer(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_InsertSegmentInReceiveBuffer_mD085B88818B00514D3C7183FA086A288630A5B33 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___newseg0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::MoveReceiveBufferDataToReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_MoveReceiveBufferDataToReceiveQueue_m198BE83610C75469BF3F2CD3851292EF2B0CD77D (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::Insert(System.Int32,!0)
inline void List_1_Insert_m315BF7B2008B804882527488D11C19BC3E1FABAE (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, int32_t ___index0, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, int32_t, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 *, const RuntimeMethod*))List_1_Insert_mAF0CC2EDCA42FFDA178E720B4D907F19DBF91D11_gshared)(__this, ___index0, ___item1, method);
}
// System.Int32 kcp2k.Utils::Decode32U(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint32_t* ___c2, const RuntimeMethod* method);
// System.Int32 kcp2k.Utils::Decode8u(System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode8u_mB486148B241E3B12D3986E53C56705BA2BBB94CC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint8_t* ___c2, const RuntimeMethod* method);
// System.Int32 kcp2k.Utils::Decode16U(System.Byte[],System.Int32,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode16U_mC8E36D79D8F4E4816F616DCA416943EADDAB5B36 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint16_t* ___c2, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::ParseUna(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseUna_mB56435037E1AF765832C80AC92B7B329DF6485F8 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___una0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::ShrinkBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ShrinkBuf_m6333E4CF35774844FDDBA89B4A6E3364D2F28188 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::UpdateAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_UpdateAck_m68CA8F939A97585CDE22748EDCFBDD384BB30D1C (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, int32_t ___rtt0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::ParseAck(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseAck_mD2DCE81F0B5896F2A3EF1DDAE283C55C03775D16 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::AckPush(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_AckPush_m74B1EF3FE76ED716261F8EF93FA29DAE125B8BD9 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::ParseData(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseData_mF85224D64E587597A7B48DEB157B7AC26E0C0B0C (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___newseg0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::ParseFastack(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseFastack_m98965177281C998ABA5DBE7D331DDF3F61A2E0F1 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method);
// System.UInt32 kcp2k.Kcp::WndUnused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_WndUnused_m60ED894EB09E1159F4611DE9040675948C698E72 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::GetEnumerator()
inline Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0  List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2 (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0  (*) (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 *, const RuntimeMethod*))List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::get_Current()
inline AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_inline (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method)
{
	return ((  AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  (*) (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *, const RuntimeMethod*))Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_gshared_inline)(__this, method);
}
// System.Void kcp2k.Kcp::<Flush>g__MakeSpace|79_0(System.Int32,kcp2k.Kcp/<>c__DisplayClass79_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, int32_t ___space0, U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * p1, const RuntimeMethod* method);
// System.Int32 kcp2k.Segment::Encode(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::MoveNext()
inline bool Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94 (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *, const RuntimeMethod*))Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::Dispose()
inline void Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3 (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *, const RuntimeMethod*))Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Clear()
inline void List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 *, const RuntimeMethod*))List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C_gshared)(__this, method);
}
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m3BB35DED062E0E5D1FC72D9B9B142C92B4476F3E (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::Add(!0)
inline void List_1_Add_m66A7E50204C16321543E84D9EFFBC8E8FD6AB4C5 (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void kcp2k.Kcp::<Flush>g__FlushBuffer|79_1(kcp2k.Kcp/<>c__DisplayClass79_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__FlushBufferU7C79_1_m99167B0B8B29A3971187C318A871DE07C1A4F874 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * p0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Flush_m17D4470AB4D93CF4CB563E6A8F97B4B007F9D8F6 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m096393525927B8729DFA97FB940339E3E2B1D617 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Byte[],System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75 (Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, const RuntimeMethod*))Action_2_Invoke_mAA2FFFC084F845E770473201F3F4DD6805F0F3FE_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Void kcp2k.KcpClientConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection__ctor_mC41067BCA660E2A82B2C6FE88B2AF226B88F5C3D (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpClientConnection::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Connect_m5AA1CF20A9867AB385D306BF4E92B4D6403DAB0D (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, String_t* ___host0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendData_m24D07F10B63A5AAB0B3F790B68A64CF65315352E (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data0, uint8_t ___channel1, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpClientConnection::RawReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawReceive_m30A98A1139AB82C2BAA90D3668EA998333659EAF (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_m1168543349D36BA8D653049B01103ED7F751B3DF (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickOutgoing_m769489C1E59DCB54E674E99BF9FEBBE023BBB11A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_mF81EA11E791062950332AD2F5ECBDED1B9B688E9 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_m54C831D926B50A22517C28B0CA4BDF70F2F1AF5B (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Pause_m0F9C043A78EEF608D0B496B86DC8392B4C54E02E (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Unpause_m28E563C4321305F7BCAEE0D60D4437577AA9A565 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::Invoke(!0)
inline void Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_gshared)(__this, ___obj0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* Dns_GetHostAddresses_m8973842AF0FE11D76AC9D4FFE28908F1B974F164 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_mA047E173F3E1082B396D018585E0B0B2D6E8E5A8 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEP0, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SetupKcp(System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SetupKcp_m2E1E9222D461392F1908FB353492FBCCBC4C1FA3 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, bool ___noDelay0, uint32_t ___interval1, int32_t ___fastResend2, bool ___congestionWindow3, uint32_t ___sendWindowSize4, uint32_t ___receiveWindowSize5, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendHandshake_m0B0D7CDD558BFF8EB2CB9C7D47A5B9EC96F02726 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m782E046F6ADDAB2218711650A04550BB917E534C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** ___remoteEP1, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::RawInput(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawInput_mEB2AEB7C32A9FC2017F5EDBDD789A76860686B1C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___msgLength1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_m592EB818087DF2148B638330373601E67A7882AC (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___size1, int32_t ___socketFlags2, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection__ctor_m8081E2BFE4C85011056E2B5147D439841A2F797C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Byte[],System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m74472204BD978439E12CDDB5013971A61F80DD9E (Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.Kcp::.ctor(System.UInt32,System.Action`2<System.Byte[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp__ctor_m70FDB08F89B2C655BD31401E43C1FC48A3A6FEAA (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___conv0, Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * ___output1, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::SetNoDelay(System.UInt32,System.UInt32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetNoDelay_m032171F27E169C6A3B97E75D919AF5C92377C8EC (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___nodelay0, uint32_t ___interval1, int32_t ___resend2, bool ___nocwnd3, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::SetWindowSize(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetWindowSize_mAB1107A07BEFDAE8D6E0EDDAA240C01F2CFF0B49 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sendWindow0, uint32_t ___receiveWindow1, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::SetMtu(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetMtu_mDB6AAE7A4C13129308C323F1040FC3235C4C6D46 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___mtu0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendPing_mF3CD4D31D5E8383A9F61C805C47474888846AD59 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::Clear()
inline void Queue_1_Clear_m66722EC86D7B03D756E656B08A0054CFA8EFE0CB (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Int32 kcp2k.Kcp::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Receive_mB7AB17C2C4560B119837EA0A86210292DD2FCC6D (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___len1, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1 (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::HandleTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleTimeout_m74ADD2BD44CAE3AE9AD85674500D706168EC619A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::HandleDeadLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleDeadLink_mF58E8A9AE22B9D29B73D2523366126C5B6DB7E2D (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::HandlePing(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandlePing_m36B1DDCB4FE49397196CF9CEE5E17771BFEF812C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::HandleChoked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleChoked_mCABC04153FDA9617FEDA2A52606E5F3692A96606 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Boolean kcp2k.KcpConnection::ReceiveNextReliable(kcp2k.KcpHeader&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpConnection_ReceiveNextReliable_m6269630DCB3D7AC8B6C1CBB636F397143F0F136A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint8_t* ___header0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___message1, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void kcp2k.KcpConnection::TickIncoming_Connected(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Connected_mE4F8EA557301DDC7F400C1C223DE9583FD1FD8B4 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::TickIncoming_Authenticated(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Authenticated_mC862A397697A847EDC9236785F9191C3791669F4 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method);
// System.Void kcp2k.Kcp::Update(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Update_m4FB232073ED815EE09C486D1426086DA8D042EAB (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___currentTimeMilliSeconds0, const RuntimeMethod* method);
// System.Int32 kcp2k.Kcp::Input(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Input_mA9471F901A98DB2195D35C1828E97880CFA80CAD (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___size2, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 kcp2k.Kcp::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Send_mB033062378ED70EB9E8A252C4E9A69EB0456FDCC (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendReliable(kcp2k.KcpHeader,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint8_t ___header0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___content1, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendUnreliable(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendUnreliable_m46A3579B678CD493797D297DE45432A08836C1C6 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpConnection::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendDisconnect_m7B45AE325FD5FD0199D6333FC9DB8582FA292159 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::.ctor()
inline void Dictionary_2__ctor_mAE36D09E0647093D3418071CEC1D569B08200900 (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, const RuntimeMethod*))HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEP0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518 (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * __this, int32_t ___key0, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *, int32_t, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m17490CDFCBD13F99815D7B3EB5F15C4077EF046E_gshared)(__this, ___key0, ___value1, method);
}
// System.Net.EndPoint kcp2k.KcpConnection::GetRemoteEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * KcpConnection_GetRemoteEndPoint_m43EE2B7D6C176A08CCDF2AC80D528FAE6DC2EC1E_inline (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m77DBB865D8B267D9030D79F62A2EB8F7967F85B7 (U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_mB129CBAABDBEFED42431F891B1F62D99E8CED928 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** ___remoteEP4, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_m9C94BFB0C9F5447ED9EFDC8523EABC700542E03B (U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpServerConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection__ctor_mA93846D377BC8A9D50891584FCF8EA4E3B7B4FA0 (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndpoint1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_m41349C01206C779BEE9A117A266965534DECFED0 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, int32_t ___connectionId0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
inline ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695 (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * (*) (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *, const RuntimeMethod*))Dictionary_2_get_Values_m116498B20BFCD224B871BC8DA02275D603476790_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>::GetEnumerator()
inline Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F (ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  (*) (ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A *, const RuntimeMethod*))ValueCollection_GetEnumerator_mFFEB92C4990FE08EFE0F5FEEA32516477CE4A393_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::get_Current()
inline KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_inline (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 * __this, const RuntimeMethod* method)
{
	return ((  KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * (*) (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *, const RuntimeMethod*))Enumerator_get_Current_mA813BDE3D37661127262F8BAA8D45A43351A9D17_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::MoveNext()
inline bool Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701 (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *, const RuntimeMethod*))Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::Dispose()
inline void Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45 (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *, const RuntimeMethod*))Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
inline Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844  HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844  (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_inline (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *, const RuntimeMethod*))Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::Remove(!0)
inline bool Dictionary_2_Remove_mB03A727A06EB080B931F91F7687794C7AD5DC341 (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m5373547512F4309721CEAA8DF32428929E8887BC_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404 (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *, const RuntimeMethod*))Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17 (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *, const RuntimeMethod*))Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
inline void HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, const RuntimeMethod*))HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4_gshared)(__this, method);
}
// System.Void kcp2k.KcpServer::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickIncoming_m20F7729AEC617241C0DFFE6D0A7D84595C3BEC4E (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method);
// System.Void kcp2k.KcpServer::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickOutgoing_mFA26D57EDD952954BE68E2AD5CEBCC496D2CE2A1 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_mA760EDC1FC1F6525A3ABF526A7951274D9DE83EF (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEP4, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<kcp2k.Segment>::get_Count()
inline int32_t Stack_1_get_Count_m5B0FD2C9244517726750355314A49A8EDC695F2E_inline (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<kcp2k.Segment>::Pop()
inline Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Stack_1_Pop_mAD555018E20E227D751821EDC95E95E340396E09 (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * __this, const RuntimeMethod* method)
{
	return ((  Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * (*) (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B *, const RuntimeMethod*))Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared)(__this, method);
}
// System.Void kcp2k.Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mCBD1CC28A33F5557D4D1BA480C6D73C9DB88FC21 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, const RuntimeMethod* method);
// System.Void kcp2k.Segment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Reset_m2CC2BC1DD7E10D3C7FBE5E331825A02E4E51F064 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<kcp2k.Segment>::Push(!0)
inline void Stack_1_Push_mEE34699FB409F8DE850B3E7230B940376DAB6570 (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B *, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 *, const RuntimeMethod*))Stack_1_Push_m8FFF613733BF88B54FCD4498B1E97DE296E27757_gshared)(__this, ___item0, method);
}
// System.Int32 kcp2k.Utils::Encode32U(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint32_t ___l2, const RuntimeMethod* method);
// System.Int32 kcp2k.Utils::Encode8u(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode8u_m53EB9499B3D86FA797F4893B7E8BC6BE368C3947 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint8_t ___c2, const RuntimeMethod* method);
// System.Int32 kcp2k.Utils::Encode16U(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode16U_m31E78506468026A63F3B23AE9E704BF75DEE13E1 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint16_t ___w2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<kcp2k.Segment>::.ctor(System.Int32)
inline void Stack_1__ctor_m0F93D084F04A62E27341785540845E5819165A2B (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B *, int32_t, const RuntimeMethod*))Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared)(__this, ___capacity0, method);
}
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::Invoke(!0,!1)
inline void Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * __this, int32_t ___arg10, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 *, int32_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
inline bool HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, int32_t, const RuntimeMethod*))HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1_gshared)(__this, ___item0, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::Add(!0,!1)
inline void Dictionary_2_Add_mDB3229A3C36FF01101775EC27C4598FF3FB98E02 (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * __this, int32_t ___key0, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *, int32_t, KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 *, const RuntimeMethod*))Dictionary_2_Add_m5C6C3AD7291F4771E4AE045CE128CD59395E6A45_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 kcp2k.Kcp::get_WaitSnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_get_WaitSnd_m57E2B51D7EA8583711696D5311EC4212EA918E01 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int WaitSnd => snd_buf.Count + snd_queue.Count;
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_0 = __this->get_snd_buf_54();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_0, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_2 = __this->get_snd_queue_52();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_2, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Void kcp2k.Kcp::.ctor(System.UInt32,System.Action`2<System.Byte[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp__ctor_m70FDB08F89B2C655BD31401E43C1FC48A3A6FEAA (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___conv0, Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t343671E76428372919D5EB07B4670B58D55E2318_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal readonly Queue<Segment> snd_queue = new Queue<Segment>(16); // send queue
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_0 = (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *)il2cpp_codegen_object_new(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318_il2cpp_TypeInfo_var);
		Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A(L_0, ((int32_t)16), /*hidden argument*/Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A_RuntimeMethod_var);
		__this->set_snd_queue_52(L_0);
		// internal readonly Queue<Segment> rcv_queue = new Queue<Segment>(16); // receive queue
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_1 = (Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 *)il2cpp_codegen_object_new(Queue_1_t343671E76428372919D5EB07B4670B58D55E2318_il2cpp_TypeInfo_var);
		Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A(L_1, ((int32_t)16), /*hidden argument*/Queue_1__ctor_m13BED4366518844E188C7C341825483722CE9D9A_RuntimeMethod_var);
		__this->set_rcv_queue_53(L_1);
		// internal readonly List<Segment> snd_buf = new List<Segment>(16);   // send buffer
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_2 = (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *)il2cpp_codegen_object_new(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60(L_2, ((int32_t)16), /*hidden argument*/List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60_RuntimeMethod_var);
		__this->set_snd_buf_54(L_2);
		// internal readonly List<Segment> rcv_buf = new List<Segment>(16);   // receive buffer
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_3 = (List_1_tF81DE2A837611EA0789DA9406563F11CD088612B *)il2cpp_codegen_object_new(List_1_tF81DE2A837611EA0789DA9406563F11CD088612B_il2cpp_TypeInfo_var);
		List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60(L_3, ((int32_t)16), /*hidden argument*/List_1__ctor_mAEFE7A0FFFF46FEB0F11162076718D3904C3DB60_RuntimeMethod_var);
		__this->set_rcv_buf_55(L_3);
		// internal readonly List<AckItem> acklist = new List<AckItem>(16);
		List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * L_4 = (List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 *)il2cpp_codegen_object_new(List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35_il2cpp_TypeInfo_var);
		List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B(L_4, ((int32_t)16), /*hidden argument*/List_1__ctor_mC09164DC78D6719FD792EE8381487CCBE97ABC4B_RuntimeMethod_var);
		__this->set_acklist_56(L_4);
		// public Kcp(uint conv, Action<byte[], int> output)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.conv = conv;
		uint32_t L_5 = ___conv0;
		__this->set_conv_23(L_5);
		// this.output = output;
		Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * L_6 = ___output1;
		__this->set_output_58(L_6);
		// snd_wnd = WND_SND;
		__this->set_snd_wnd_34(((int32_t)32));
		// rcv_wnd = WND_RCV;
		__this->set_rcv_wnd_35(((int32_t)128));
		// rmt_wnd = WND_RCV;
		__this->set_rmt_wnd_36(((int32_t)128));
		// mtu = MTU_DEF;
		__this->set_mtu_24(((int32_t)1200));
		// mss = mtu - OVERHEAD;
		uint32_t L_7 = __this->get_mtu_24();
		__this->set_mss_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)24))));
		// rx_rto = RTO_DEF;
		__this->set_rx_rto_32(((int32_t)200));
		// rx_minrto = RTO_MIN;
		__this->set_rx_minrto_33(((int32_t)100));
		// interval = INTERVAL;
		__this->set_interval_39(((int32_t)100));
		// ts_flush = INTERVAL;
		__this->set_ts_flush_40(((int32_t)100));
		// ssthresh = THRESH_INIT;
		__this->set_ssthresh_29(2);
		// fastlimit = FASTACK_LIMIT;
		__this->set_fastlimit_50(5);
		// dead_link = DEADLINK;
		__this->set_dead_link_46(((int32_t)20));
		// buffer = new byte[(mtu + OVERHEAD) * 3];
		uint32_t L_8 = __this->get_mtu_24();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)24))), (int32_t)3)));
		__this->set_buffer_57(L_9);
		// }
		return;
	}
}
// kcp2k.Segment kcp2k.Kcp::SegmentNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Kcp_SegmentNew_m21B61522D5844011591FB83201D4E29F94F28F4F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_0 = NULL;
	{
		// return Segment.Take();
		IL2CPP_RUNTIME_CLASS_INIT(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_0;
		L_0 = Segment_Take_mA4221F2958E30468C63EB2C0799CF62B8C8BC534(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_1 = V_0;
		return L_1;
	}
}
// System.Void kcp2k.Kcp::SegmentDelete(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___seg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Segment.Return(seg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_0 = ___seg0;
		IL2CPP_RUNTIME_CLASS_INIT(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Segment_Return_m9602E873C29E7DA9E42793A01527506229B9C8B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 kcp2k.Kcp::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Receive_mB7AB17C2C4560B119837EA0A86210292DD2FCC6D (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___len1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_10 = NULL;
	uint32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B20_0 = 0;
	{
		// if (len < 0)
		int32_t L_0 = ___len1;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// throw new NotSupportedException("Receive ispeek for negative len is not supported!");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5883BF0E0A31E086714250B31830DBBF408D5319)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_Receive_mB7AB17C2C4560B119837EA0A86210292DD2FCC6D_RuntimeMethod_var)));
	}

IL_0016:
	{
		// if (rcv_queue.Count == 0)
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_3 = __this->get_rcv_queue_53();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_3, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_01df;
	}

IL_0032:
	{
		// if (len < 0) len = -len;
		int32_t L_6 = ___len1;
		V_7 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// if (len < 0) len = -len;
		int32_t L_8 = ___len1;
		___len1 = ((-L_8));
	}

IL_0040:
	{
		// int peeksize = PeekSize();
		int32_t L_9;
		L_9 = Kcp_PeekSize_m89D4AEC809F235DE2F6159ADAF20B68F7FF85D32(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (peeksize < 0)
		int32_t L_10 = V_0;
		V_8 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// return -2;
		V_6 = ((int32_t)-2);
		goto IL_01df;
	}

IL_005a:
	{
		// if (peeksize > len)
		int32_t L_12 = V_0;
		int32_t L_13 = ___len1;
		V_9 = (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// return -3;
		V_6 = ((int32_t)-3);
		goto IL_01df;
	}

IL_006d:
	{
		// bool recover = rcv_queue.Count >= rcv_wnd;
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_15 = __this->get_rcv_queue_53();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_15, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		uint32_t L_17 = __this->get_rcv_wnd_35();
		V_1 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_16))) < ((int64_t)((int64_t)((uint64_t)L_17))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// int offset = 0;
		V_2 = 0;
		// len = 0;
		___len1 = 0;
		goto IL_00fd;
	}

IL_008d:
	{
		// Segment seg = rcv_queue.Dequeue();
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_18 = __this->get_rcv_queue_53();
		NullCheck(L_18);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_19;
		L_19 = Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE(L_18, /*hidden argument*/Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE_RuntimeMethod_var);
		V_10 = L_19;
		// Buffer.BlockCopy(seg.data.GetBuffer(), 0, buffer, offset, (int)seg.data.Position);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_20 = V_10;
		NullCheck(L_20);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = L_20->get_data_11();
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = VirtualFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ___buffer0;
		int32_t L_24 = V_2;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_25 = V_10;
		NullCheck(L_25);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_26 = L_25->get_data_11();
		NullCheck(L_26);
		int64_t L_27;
		L_27 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_26);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_22, 0, (RuntimeArray *)(RuntimeArray *)L_23, L_24, ((int32_t)((int32_t)L_27)), /*hidden argument*/NULL);
		// offset += (int)seg.data.Position;
		int32_t L_28 = V_2;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_29 = V_10;
		NullCheck(L_29);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_30 = L_29->get_data_11();
		NullCheck(L_30);
		int64_t L_31;
		L_31 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_30);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)((int32_t)L_31))));
		// len += (int)seg.data.Position;
		int32_t L_32 = ___len1;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_33 = V_10;
		NullCheck(L_33);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_34 = L_33->get_data_11();
		NullCheck(L_34);
		int64_t L_35;
		L_35 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_34);
		___len1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)((int32_t)((int32_t)L_35))));
		// uint fragment = seg.frg;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_36 = V_10;
		NullCheck(L_36);
		uint32_t L_37 = L_36->get_frg_2();
		V_11 = L_37;
		// SegmentDelete(seg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_38 = V_10;
		Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_38, /*hidden argument*/NULL);
		// if (fragment == 0)
		uint32_t L_39 = V_11;
		V_12 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_12;
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		// break;
		goto IL_0114;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		// while (rcv_queue.Count > 0)
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_41 = __this->get_rcv_queue_53();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_41, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		bool L_43 = V_13;
		if (L_43)
		{
			goto IL_008d;
		}
	}

IL_0114:
	{
		// int removed = 0;
		V_3 = 0;
		// foreach (Segment seg in rcv_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_44 = __this->get_rcv_buf_55();
		NullCheck(L_44);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_45;
		L_45 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_44, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_14 = L_45;
	}

IL_0124:
	try
	{// begin try (depth: 1)
		{
			goto IL_0185;
		}

IL_0126:
		{
			// foreach (Segment seg in rcv_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_46;
			L_46 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_14), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_15 = L_46;
			// if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_47 = V_15;
			NullCheck(L_47);
			uint32_t L_48 = L_47->get_sn_5();
			uint32_t L_49 = __this->get_rcv_nxt_28();
			if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
			{
				goto IL_0156;
			}
		}

IL_013f:
		{
			Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_50 = __this->get_rcv_queue_53();
			NullCheck(L_50);
			int32_t L_51;
			L_51 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_50, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
			uint32_t L_52 = __this->get_rcv_wnd_35();
			G_B20_0 = ((((int64_t)((int64_t)((int64_t)L_51))) < ((int64_t)((int64_t)((uint64_t)L_52))))? 1 : 0);
			goto IL_0157;
		}

IL_0156:
		{
			G_B20_0 = 0;
		}

IL_0157:
		{
			V_16 = (bool)G_B20_0;
			bool L_53 = V_16;
			if (!L_53)
			{
				goto IL_0181;
			}
		}

IL_015d:
		{
			// ++removed;
			int32_t L_54 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
			// rcv_queue.Enqueue(seg);
			Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_55 = __this->get_rcv_queue_53();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_56 = V_15;
			NullCheck(L_55);
			Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99(L_55, L_56, /*hidden argument*/Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
			// rcv_nxt++;
			uint32_t L_57 = __this->get_rcv_nxt_28();
			__this->set_rcv_nxt_28(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)));
			goto IL_0184;
		}

IL_0181:
		{
			// break;
			goto IL_018e;
		}

IL_0184:
		{
		}

IL_0185:
		{
			// foreach (Segment seg in rcv_buf)
			bool L_58;
			L_58 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_14), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_0126;
			}
		}

IL_018e:
		{
			IL2CPP_LEAVE(0x19F, FINALLY_0190);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0190;
	}

FINALLY_0190:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_14), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(400)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19F, IL_019f)
	}

IL_019f:
	{
		// rcv_buf.RemoveRange(0, removed);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_59 = __this->get_rcv_buf_55();
		int32_t L_60 = V_3;
		NullCheck(L_59);
		List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F(L_59, 0, L_60, /*hidden argument*/List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		// if (rcv_queue.Count < rcv_wnd && recover)
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_61 = __this->get_rcv_queue_53();
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_61, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		uint32_t L_63 = __this->get_rcv_wnd_35();
		bool L_64 = V_1;
		V_17 = (bool)((int32_t)((int32_t)((((int64_t)((int64_t)((int64_t)L_62))) < ((int64_t)((int64_t)((uint64_t)L_63))))? 1 : 0)&(int32_t)L_64));
		bool L_65 = V_17;
		if (!L_65)
		{
			goto IL_01da;
		}
	}
	{
		// probe |= ASK_TELL;
		uint32_t L_66 = __this->get_probe_38();
		__this->set_probe_38(((int32_t)((int32_t)L_66|(int32_t)2)));
	}

IL_01da:
	{
		// return len;
		int32_t L_67 = ___len1;
		V_6 = L_67;
		goto IL_01df;
	}

IL_01df:
	{
		// }
		int32_t L_68 = V_6;
		return L_68;
	}
}
// System.Int32 kcp2k.Kcp::PeekSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_PeekSize_m89D4AEC809F235DE2F6159ADAF20B68F7FF85D32 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2E833F937AEC5CE9D954DB695828904B57ADF31A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3A820B3503F2841A7F6D137447223C8795AA9861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB9D6FC64031F10CB1B89C01CA35E2F45DDAF471A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_mDE7FC300CD77706386924278DFDB2F5A9BA76E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m2A1EC7556C639C246431FD8BD8307B033AA3D678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_7 = NULL;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int length = 0;
		V_0 = 0;
		// if (rcv_queue.Count == 0) return -1;
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_0 = __this->get_rcv_queue_53();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_0, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (rcv_queue.Count == 0) return -1;
		V_3 = (-1);
		goto IL_00c2;
	}

IL_001c:
	{
		// Segment seq = rcv_queue.Peek();
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_3 = __this->get_rcv_queue_53();
		NullCheck(L_3);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_4;
		L_4 = Queue_1_Peek_m2A1EC7556C639C246431FD8BD8307B033AA3D678(L_3, /*hidden argument*/Queue_1_Peek_m2A1EC7556C639C246431FD8BD8307B033AA3D678_RuntimeMethod_var);
		V_1 = L_4;
		// if (seq.frg == 0) return (int)seq.data.Position;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_5 = V_1;
		NullCheck(L_5);
		uint32_t L_6 = L_5->get_frg_2();
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (seq.frg == 0) return (int)seq.data.Position;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_8 = V_1;
		NullCheck(L_8);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = L_8->get_data_11();
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
		V_3 = ((int32_t)((int32_t)L_10));
		goto IL_00c2;
	}

IL_0046:
	{
		// if (rcv_queue.Count < seq.frg + 1) return -1;
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_11 = __this->get_rcv_queue_53();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_11, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_13 = V_1;
		NullCheck(L_13);
		uint32_t L_14 = L_13->get_frg_2();
		V_5 = (bool)((((int64_t)((int64_t)((int64_t)L_12))) < ((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))))))))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// if (rcv_queue.Count < seq.frg + 1) return -1;
		V_3 = (-1);
		goto IL_00c2;
	}

IL_0067:
	{
		// foreach (Segment seg in rcv_queue)
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_16 = __this->get_rcv_queue_53();
		NullCheck(L_16);
		Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2  L_17;
		L_17 = Queue_1_GetEnumerator_mDE7FC300CD77706386924278DFDB2F5A9BA76E61(L_16, /*hidden argument*/Queue_1_GetEnumerator_mDE7FC300CD77706386924278DFDB2F5A9BA76E61_RuntimeMethod_var);
		V_6 = L_17;
	}

IL_0075:
	try
	{// begin try (depth: 1)
		{
			goto IL_00a4;
		}

IL_0077:
		{
			// foreach (Segment seg in rcv_queue)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_18;
			L_18 = Enumerator_get_Current_mB9D6FC64031F10CB1B89C01CA35E2F45DDAF471A((Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *)(&V_6), /*hidden argument*/Enumerator_get_Current_mB9D6FC64031F10CB1B89C01CA35E2F45DDAF471A_RuntimeMethod_var);
			V_7 = L_18;
			// length += (int)seg.data.Position;
			int32_t L_19 = V_0;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_20 = V_7;
			NullCheck(L_20);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = L_20->get_data_11();
			NullCheck(L_21);
			int64_t L_22;
			L_22 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_21);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)((int32_t)((int32_t)L_22))));
			// if (seg.frg == 0) break;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_23 = V_7;
			NullCheck(L_23);
			uint32_t L_24 = L_23->get_frg_2();
			V_8 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_00a3;
			}
		}

IL_00a1:
		{
			// if (seg.frg == 0) break;
			goto IL_00ad;
		}

IL_00a3:
		{
		}

IL_00a4:
		{
			// foreach (Segment seg in rcv_queue)
			bool L_26;
			L_26 = Enumerator_MoveNext_m3A820B3503F2841A7F6D137447223C8795AA9861((Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3A820B3503F2841A7F6D137447223C8795AA9861_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0077;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00af);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m2E833F937AEC5CE9D954DB695828904B57ADF31A((Enumerator_tE732B79DC2106D2E7E8ECE6DDB7EDBD11FDC8FC2 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m2E833F937AEC5CE9D954DB695828904B57ADF31A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(175)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// return length;
		int32_t L_27 = V_0;
		V_3 = L_27;
		goto IL_00c2;
	}

IL_00c2:
	{
		// }
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Int32 kcp2k.Kcp::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Send_mB033062378ED70EB9E8A252C4E9A69EB0456FDCC (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	uint32_t G_B13_0 = 0;
	{
		// if (len < 0) return -1;
		int32_t L_0 = ___len2;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (len < 0) return -1;
		V_2 = (-1);
		goto IL_00de;
	}

IL_0010:
	{
		// if (len <= mss) count = 1;
		int32_t L_2 = ___len2;
		uint32_t L_3 = __this->get_mss_25();
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_2))) > ((int64_t)((int64_t)((uint64_t)L_3))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// if (len <= mss) count = 1;
		V_0 = 1;
		goto IL_003d;
	}

IL_0026:
	{
		// else count = (int)((len + mss - 1) / mss);
		int32_t L_5 = ___len2;
		uint32_t L_6 = __this->get_mss_25();
		uint32_t L_7 = __this->get_mss_25();
		V_0 = ((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_5)), (int64_t)((int64_t)((uint64_t)L_6)))), (int64_t)((int64_t)((int64_t)1))))/(int64_t)((int64_t)((uint64_t)L_7))))));
	}

IL_003d:
	{
		// if (count >= WND_RCV) return -2;
		int32_t L_8 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)((int32_t)128)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// if (count >= WND_RCV) return -2;
		V_2 = ((int32_t)-2);
		goto IL_00de;
	}

IL_0056:
	{
		// if (count == 0) count = 1;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// if (count == 0) count = 1;
		V_0 = 1;
	}

IL_0062:
	{
		// for (int i = 0; i < count; i++)
		V_6 = 0;
		goto IL_00cf;
	}

IL_0067:
	{
		// int size = len > (int)mss ? (int)mss : len;
		int32_t L_12 = ___len2;
		uint32_t L_13 = __this->get_mss_25();
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = ___len2;
		G_B13_0 = ((uint32_t)(L_14));
		goto IL_007a;
	}

IL_0074:
	{
		uint32_t L_15 = __this->get_mss_25();
		G_B13_0 = L_15;
	}

IL_007a:
	{
		V_7 = G_B13_0;
		// Segment seg = SegmentNew();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_16;
		L_16 = Kcp_SegmentNew_m21B61522D5844011591FB83201D4E29F94F28F4F(/*hidden argument*/NULL);
		V_8 = L_16;
		// if (len > 0)
		int32_t L_17 = ___len2;
		V_9 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// seg.data.Write(buffer, offset, size);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_19 = V_8;
		NullCheck(L_19);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = L_19->get_data_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___buffer0;
		int32_t L_22 = ___offset1;
		int32_t L_23 = V_7;
		NullCheck(L_20);
		VirtualActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, L_22, L_23);
	}

IL_00a0:
	{
		// seg.frg = (byte)(count - i - 1);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_24 = V_8;
		int32_t L_25 = V_0;
		int32_t L_26 = V_6;
		NullCheck(L_24);
		L_24->set_frg_2(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)), (int32_t)1)))));
		// snd_queue.Enqueue(seg);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_27 = __this->get_snd_queue_52();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_28 = V_8;
		NullCheck(L_27);
		Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99(L_27, L_28, /*hidden argument*/Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
		// offset += size;
		int32_t L_29 = ___offset1;
		int32_t L_30 = V_7;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		// len -= size;
		int32_t L_31 = ___len2;
		int32_t L_32 = V_7;
		___len2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32));
		// for (int i = 0; i < count; i++)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00cf:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_34 = V_6;
		int32_t L_35 = V_0;
		V_10 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0067;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		int32_t L_37 = V_2;
		return L_37;
	}
}
// System.Void kcp2k.Kcp::UpdateAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_UpdateAck_m68CA8F939A97585CDE22748EDCFBDD384BB30D1C (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, int32_t ___rtt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (rx_srtt == 0)
		int32_t L_0 = __this->get_rx_srtt_31();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// rx_srtt = rtt;
		int32_t L_2 = ___rtt0;
		__this->set_rx_srtt_31(L_2);
		// rx_rttval = rtt / 2;
		int32_t L_3 = ___rtt0;
		__this->set_rx_rttval_30(((int32_t)((int32_t)L_3/(int32_t)2)));
		goto IL_0072;
	}

IL_0022:
	{
		// int delta = rtt - rx_srtt;
		int32_t L_4 = ___rtt0;
		int32_t L_5 = __this->get_rx_srtt_31();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		// if (delta < 0) delta = -delta;
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// if (delta < 0) delta = -delta;
		int32_t L_8 = V_2;
		V_2 = ((-L_8));
	}

IL_0037:
	{
		// rx_rttval = (3 * rx_rttval + delta) / 4;
		int32_t L_9 = __this->get_rx_rttval_30();
		int32_t L_10 = V_2;
		__this->set_rx_rttval_30(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_9)), (int32_t)L_10))/(int32_t)4)));
		// rx_srtt = (7 * rx_srtt + rtt) / 8;
		int32_t L_11 = __this->get_rx_srtt_31();
		int32_t L_12 = ___rtt0;
		__this->set_rx_srtt_31(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)7, (int32_t)L_11)), (int32_t)L_12))/(int32_t)8)));
		// if (rx_srtt < 1) rx_srtt = 1;
		int32_t L_13 = __this->get_rx_srtt_31();
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)1))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		// if (rx_srtt < 1) rx_srtt = 1;
		__this->set_rx_srtt_31(1);
	}

IL_0071:
	{
	}

IL_0072:
	{
		// int rto = rx_srtt + Math.Max((int)interval, 4 * rx_rttval);
		int32_t L_15 = __this->get_rx_srtt_31();
		uint32_t L_16 = __this->get_interval_39();
		int32_t L_17 = __this->get_rx_rttval_30();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_17)), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_18));
		// rx_rto = Utils.Clamp(rto, rx_minrto, RTO_MAX);
		int32_t L_19 = V_0;
		int32_t L_20 = __this->get_rx_minrto_33();
		int32_t L_21;
		L_21 = Utils_Clamp_m7BFD0C83FDB7D2577B203264F958E62B3B9B5EF2(L_19, L_20, ((int32_t)60000), /*hidden argument*/NULL);
		__this->set_rx_rto_32(L_21);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ShrinkBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ShrinkBuf_m6333E4CF35774844FDDBA89B4A6E3364D2F28188 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_1 = NULL;
	{
		// if (snd_buf.Count > 0)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_0 = __this->get_snd_buf_54();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_0, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Segment seg = snd_buf[0];
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_3 = __this->get_snd_buf_54();
		NullCheck(L_3);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_4;
		L_4 = List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		V_1 = L_4;
		// snd_una = seg.sn;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_5 = V_1;
		NullCheck(L_5);
		uint32_t L_6 = L_5->get_sn_5();
		__this->set_snd_una_26(L_6);
		goto IL_003e;
	}

IL_0030:
	{
		// snd_una = snd_nxt;
		uint32_t L_7 = __this->get_snd_nxt_27();
		__this->set_snd_una_26(L_7);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseAck(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseAck_mD2DCE81F0B5896F2A3EF1DDAE283C55C03775D16 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8F366D6B5594B34B0B8997F0301E655B1ECCCA0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Utils.TimeDiff(sn, snd_una) < 0 || Utils.TimeDiff(sn, snd_nxt) >= 0)
		uint32_t L_0 = ___sn0;
		uint32_t L_1 = __this->get_snd_una_26();
		int32_t L_2;
		L_2 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_3 = ___sn0;
		uint32_t L_4 = __this->get_snd_nxt_27();
		int32_t L_5;
		L_5 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		goto IL_0092;
	}

IL_002b:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		V_1 = 0;
		goto IL_007e;
	}

IL_002f:
	{
		// Segment seg = snd_buf[i];
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_7 = __this->get_snd_buf_54();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_9;
		L_9 = List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		V_2 = L_9;
		// if (sn == seg.sn)
		uint32_t L_10 = ___sn0;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_11 = V_2;
		NullCheck(L_11);
		uint32_t L_12 = L_11->get_sn_5();
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// snd_buf.RemoveAt(i);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_14 = __this->get_snd_buf_54();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		List_1_RemoveAt_m8F366D6B5594B34B0B8997F0301E655B1ECCCA0D(L_14, L_15, /*hidden argument*/List_1_RemoveAt_m8F366D6B5594B34B0B8997F0301E655B1ECCCA0D_RuntimeMethod_var);
		// SegmentDelete(seg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_16 = V_2;
		Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_16, /*hidden argument*/NULL);
		// break;
		goto IL_0092;
	}

IL_0061:
	{
		// if (Utils.TimeDiff(sn, seg.sn) < 0)
		uint32_t L_17 = ___sn0;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_18 = V_2;
		NullCheck(L_18);
		uint32_t L_19 = L_18->get_sn_5();
		int32_t L_20;
		L_20 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_17, L_19, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		// break;
		goto IL_0092;
	}

IL_0079:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007e:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		int32_t L_23 = V_1;
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_24 = __this->get_snd_buf_54();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_24, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_002f;
		}
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseUna(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseUna_mB56435037E1AF765832C80AC92B7B329DF6485F8 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___una0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int removed = 0;
		V_0 = 0;
		// foreach (Segment seg in snd_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_0 = __this->get_snd_buf_54();
		NullCheck(L_0);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_1;
		L_1 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_0, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{// begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0012:
		{
			// foreach (Segment seg in snd_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_2;
			L_2 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_2 = L_2;
			// if (Utils.TimeDiff(una, seg.sn) > 0)
			uint32_t L_3 = ___una0;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_4 = V_2;
			NullCheck(L_4);
			uint32_t L_5 = L_4->get_sn_5();
			int32_t L_6;
			L_6 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_3, L_5, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_003d;
			}
		}

IL_002e:
		{
			// ++removed;
			int32_t L_8 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			// SegmentDelete(seg);
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_9 = V_2;
			Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_9, /*hidden argument*/NULL);
			goto IL_0040;
		}

IL_003d:
		{
			// break;
			goto IL_004a;
		}

IL_0040:
		{
		}

IL_0041:
		{
			// foreach (Segment seg in snd_buf)
			bool L_10;
			L_10 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0012;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004c);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// snd_buf.RemoveRange(0, removed);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_11 = __this->get_snd_buf_54();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F(L_11, 0, L_12, /*hidden argument*/List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseFastack(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseFastack_m98965177281C998ABA5DBE7D331DDF3F61A2E0F1 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		// if (Utils.TimeDiff(sn, snd_una) < 0 || Utils.TimeDiff(sn, snd_nxt) >= 0)
		uint32_t L_0 = ___sn0;
		uint32_t L_1 = __this->get_snd_una_26();
		int32_t L_2;
		L_2 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_3 = ___sn0;
		uint32_t L_4 = __this->get_snd_nxt_27();
		int32_t L_5;
		L_5 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		goto IL_0096;
	}

IL_002b:
	{
		// foreach (Segment seg in snd_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_7 = __this->get_snd_buf_54();
		NullCheck(L_7);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_8;
		L_8 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_7, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0038:
	try
	{// begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_003a:
		{
			// foreach (Segment seg in snd_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_9;
			L_9 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_2 = L_9;
			// if (Utils.TimeDiff(sn, seg.sn) < 0)
			uint32_t L_10 = ___sn0;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_11 = V_2;
			NullCheck(L_11);
			uint32_t L_12 = L_11->get_sn_5();
			int32_t L_13;
			L_13 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_10, L_12, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
			bool L_14 = V_3;
			if (!L_14)
			{
				goto IL_0059;
			}
		}

IL_0056:
		{
			// break;
			goto IL_0085;
		}

IL_0059:
		{
			// else if (sn != seg.sn)
			uint32_t L_15 = ___sn0;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_16 = V_2;
			NullCheck(L_16);
			uint32_t L_17 = L_16->get_sn_5();
			V_4 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_4;
			if (!L_18)
			{
				goto IL_007b;
			}
		}

IL_006b:
		{
			// seg.fastack++;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_19 = V_2;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_20 = L_19;
			NullCheck(L_20);
			uint32_t L_21 = L_20->get_fastack_9();
			NullCheck(L_20);
			L_20->set_fastack_9(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		}

IL_007b:
		{
		}

IL_007c:
		{
			// foreach (Segment seg in snd_buf)
			bool L_22;
			L_22 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_003a;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0087);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(135)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::AckPush(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_AckPush_m74B1EF3FE76ED716261F8EF93FA29DAE125B8BD9 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// acklist.Add(new AckItem{ serialNumber = sn, timestamp = ts });
		List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * L_0 = __this->get_acklist_56();
		il2cpp_codegen_initobj((&V_0), sizeof(AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 ));
		uint32_t L_1 = ___sn0;
		(&V_0)->set_serialNumber_0(L_1);
		uint32_t L_2 = ___ts1;
		(&V_0)->set_timestamp_1(L_2);
		AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  L_3 = V_0;
		NullCheck(L_0);
		List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD(L_0, L_3, /*hidden argument*/List_1_Add_mE6F76B7A99E63CA767FCA50445BAE818E579C2CD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseData(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseData_mF85224D64E587597A7B48DEB157B7AC26E0C0B0C (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___newseg0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// uint sn = newseg.sn;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_0 = ___newseg0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_sn_5();
		V_0 = L_1;
		// if (Utils.TimeDiff(sn, rcv_nxt + rcv_wnd) >= 0 ||
		//     Utils.TimeDiff(sn, rcv_nxt) < 0)
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->get_rcv_nxt_28();
		uint32_t L_4 = __this->get_rcv_wnd_35();
		int32_t L_5;
		L_5 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->get_rcv_nxt_28();
		int32_t L_8;
		L_8 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_6, L_7, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// SegmentDelete(newseg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_10 = ___newseg0;
		Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_10, /*hidden argument*/NULL);
		// return;
		goto IL_004d;
	}

IL_003e:
	{
		// InsertSegmentInReceiveBuffer(newseg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_11 = ___newseg0;
		Kcp_InsertSegmentInReceiveBuffer_mD085B88818B00514D3C7183FA086A288630A5B33(__this, L_11, /*hidden argument*/NULL);
		// MoveReceiveBufferDataToReceiveQueue();
		Kcp_MoveReceiveBufferDataToReceiveQueue_m198BE83610C75469BF3F2CD3851292EF2B0CD77D(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::InsertSegmentInReceiveBuffer(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_InsertSegmentInReceiveBuffer_mD085B88818B00514D3C7183FA086A288630A5B33 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___newseg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m315BF7B2008B804882527488D11C19BC3E1FABAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// bool repeat = false; // 'duplicate'
		V_0 = (bool)0;
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_0 = __this->get_rcv_buf_55();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_0, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_005a;
	}

IL_0013:
	{
		// Segment seg = rcv_buf[i];
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_2 = __this->get_rcv_buf_55();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_4;
		L_4 = List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m86668F36324132ECE62B232636226708EECEC070_RuntimeMethod_var);
		V_2 = L_4;
		// if (seg.sn == newseg.sn)
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_5 = V_2;
		NullCheck(L_5);
		uint32_t L_6 = L_5->get_sn_5();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_7 = ___newseg0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->get_sn_5();
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// repeat = true;
		V_0 = (bool)1;
		// break;
		goto IL_0067;
	}

IL_0038:
	{
		// if (Utils.TimeDiff(newseg.sn, seg.sn) > 0)
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_10 = ___newseg0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_sn_5();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_12 = V_2;
		NullCheck(L_12);
		uint32_t L_13 = L_12->get_sn_5();
		int32_t L_14;
		L_14 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_11, L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// break;
		goto IL_0067;
	}

IL_0055:
	{
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_005a:
	{
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		int32_t L_17 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0013;
		}
	}

IL_0067:
	{
		// if (!repeat)
		bool L_19 = V_0;
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		// rcv_buf.Insert(i + 1, newseg);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_21 = __this->get_rcv_buf_55();
		int32_t L_22 = V_1;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_23 = ___newseg0;
		NullCheck(L_21);
		List_1_Insert_m315BF7B2008B804882527488D11C19BC3E1FABAE(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), L_23, /*hidden argument*/List_1_Insert_m315BF7B2008B804882527488D11C19BC3E1FABAE_RuntimeMethod_var);
		goto IL_008e;
	}

IL_0085:
	{
		// SegmentDelete(newseg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_24 = ___newseg0;
		Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_24, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::MoveReceiveBufferDataToReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_MoveReceiveBufferDataToReceiveQueue_m198BE83610C75469BF3F2CD3851292EF2B0CD77D (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	{
		// int removed = 0;
		V_0 = 0;
		// foreach (Segment seg in rcv_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_0 = __this->get_rcv_buf_55();
		NullCheck(L_0);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_1;
		L_1 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_0, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0010:
	try
	{// begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0012:
		{
			// foreach (Segment seg in rcv_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_2;
			L_2 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_2 = L_2;
			// if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_3 = V_2;
			NullCheck(L_3);
			uint32_t L_4 = L_3->get_sn_5();
			uint32_t L_5 = __this->get_rcv_nxt_28();
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0040;
			}
		}

IL_0029:
		{
			Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_6 = __this->get_rcv_queue_53();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_6, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
			uint32_t L_8 = __this->get_rcv_wnd_35();
			G_B5_0 = ((((int64_t)((int64_t)((int64_t)L_7))) < ((int64_t)((int64_t)((uint64_t)L_8))))? 1 : 0);
			goto IL_0041;
		}

IL_0040:
		{
			G_B5_0 = 0;
		}

IL_0041:
		{
			V_3 = (bool)G_B5_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0068;
			}
		}

IL_0045:
		{
			// ++removed;
			int32_t L_10 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
			// rcv_queue.Enqueue(seg);
			Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_11 = __this->get_rcv_queue_53();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_12 = V_2;
			NullCheck(L_11);
			Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99(L_11, L_12, /*hidden argument*/Queue_1_Enqueue_m5540C07B598EEA69A47E84C450C349B025583E99_RuntimeMethod_var);
			// rcv_nxt++;
			uint32_t L_13 = __this->get_rcv_nxt_28();
			__this->set_rcv_nxt_28(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
			goto IL_006b;
		}

IL_0068:
		{
			// break;
			goto IL_0075;
		}

IL_006b:
		{
		}

IL_006c:
		{
			// foreach (Segment seg in rcv_buf)
			bool L_14;
			L_14 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0012;
			}
		}

IL_0075:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0077);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(119)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
	}

IL_0086:
	{
		// rcv_buf.RemoveRange(0, removed);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_15 = __this->get_rcv_buf_55();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F(L_15, 0, L_16, /*hidden argument*/List_1_RemoveRange_m1AE7BF81753A651CEB24D1A68BFC120F13E38B0F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 kcp2k.Kcp::Input(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Input_mA9471F901A98DB2195D35C1828E97880CFA80CAD (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___size2, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint8_t V_12 = 0x0;
	uint8_t V_13 = 0x0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B57_0 = 0;
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B57_1 = NULL;
	int32_t G_B56_0 = 0;
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B56_1 = NULL;
	uint32_t G_B58_0 = 0;
	int32_t G_B58_1 = 0;
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B58_2 = NULL;
	{
		// uint prev_una = snd_una;
		uint32_t L_0 = __this->get_snd_una_26();
		V_0 = L_0;
		// uint maxack = 0;
		V_1 = 0;
		// uint latest_ts = 0;
		V_2 = 0;
		// int flag = 0;
		V_3 = 0;
		// if (data == null || size < OVERHEAD) return -1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___size2;
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)((int32_t)24)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_4 = (bool)G_B3_0;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (data == null || size < OVERHEAD) return -1;
		V_5 = (-1);
		goto IL_042e;
	}

IL_0027:
	{
		goto IL_02d1;
	}

IL_002c:
	{
		// uint ts = 0;
		V_6 = 0;
		// uint sn = 0;
		V_7 = 0;
		// uint len = 0;
		V_8 = 0;
		// uint una = 0;
		V_9 = 0;
		// uint conv_ = 0;
		V_10 = 0;
		// ushort wnd = 0;
		V_11 = (uint16_t)0;
		// byte cmd = 0;
		V_12 = (uint8_t)0;
		// byte frg = 0;
		V_13 = (uint8_t)0;
		// if (size < OVERHEAD) break;
		int32_t L_4 = ___size2;
		V_14 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)24)))? 1 : 0);
		bool L_5 = V_14;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (size < OVERHEAD) break;
		goto IL_02d9;
	}

IL_0055:
	{
		// offset += Utils.Decode32U(data, offset, ref conv_);
		int32_t L_6 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data0;
		int32_t L_8 = ___offset1;
		int32_t L_9;
		L_9 = Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7(L_7, L_8, (uint32_t*)(&V_10), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_9));
		// if (conv_ != conv) return -1;
		uint32_t L_10 = V_10;
		uint32_t L_11 = __this->get_conv_23();
		V_15 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_15;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (conv_ != conv) return -1;
		V_5 = (-1);
		goto IL_042e;
	}

IL_007d:
	{
		// offset += Utils.Decode8u(data, offset, ref cmd);
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___data0;
		int32_t L_15 = ___offset1;
		int32_t L_16;
		L_16 = Utils_Decode8u_mB486148B241E3B12D3986E53C56705BA2BBB94CC(L_14, L_15, (uint8_t*)(&V_12), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_16));
		// offset += Utils.Decode8u(data, offset, ref frg);
		int32_t L_17 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___data0;
		int32_t L_19 = ___offset1;
		int32_t L_20;
		L_20 = Utils_Decode8u_mB486148B241E3B12D3986E53C56705BA2BBB94CC(L_18, L_19, (uint8_t*)(&V_13), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_20));
		// offset += Utils.Decode16U(data, offset, ref wnd);
		int32_t L_21 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___data0;
		int32_t L_23 = ___offset1;
		int32_t L_24;
		L_24 = Utils_Decode16U_mC8E36D79D8F4E4816F616DCA416943EADDAB5B36(L_22, L_23, (uint16_t*)(&V_11), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_24));
		// offset += Utils.Decode32U(data, offset, ref ts);
		int32_t L_25 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___data0;
		int32_t L_27 = ___offset1;
		int32_t L_28;
		L_28 = Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7(L_26, L_27, (uint32_t*)(&V_6), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_28));
		// offset += Utils.Decode32U(data, offset, ref sn);
		int32_t L_29 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ___data0;
		int32_t L_31 = ___offset1;
		int32_t L_32;
		L_32 = Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7(L_30, L_31, (uint32_t*)(&V_7), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_32));
		// offset += Utils.Decode32U(data, offset, ref una);
		int32_t L_33 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___data0;
		int32_t L_35 = ___offset1;
		int32_t L_36;
		L_36 = Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7(L_34, L_35, (uint32_t*)(&V_9), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_36));
		// offset += Utils.Decode32U(data, offset, ref len);
		int32_t L_37 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___data0;
		int32_t L_39 = ___offset1;
		int32_t L_40;
		L_40 = Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7(L_38, L_39, (uint32_t*)(&V_8), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_40));
		// size -= OVERHEAD;
		int32_t L_41 = ___size2;
		___size2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)((int32_t)24)));
		// if (size < len || len < 0) return -2;
		int32_t L_42 = ___size2;
		uint32_t L_43 = V_8;
		if ((((int64_t)((int64_t)((int64_t)L_42))) < ((int64_t)((int64_t)((uint64_t)L_43)))))
		{
			goto IL_00ec;
		}
	}
	{
		uint32_t L_44 = V_8;
		G_B13_0 = (false? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B13_0 = 1;
	}

IL_00ed:
	{
		V_16 = (bool)G_B13_0;
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00fc;
		}
	}
	{
		// if (size < len || len < 0) return -2;
		V_5 = ((int32_t)-2);
		goto IL_042e;
	}

IL_00fc:
	{
		// if (cmd != CMD_PUSH && cmd != CMD_ACK &&
		//     cmd != CMD_WASK && cmd != CMD_WINS)
		uint8_t L_46 = V_12;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)81))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_47 = V_12;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)82))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_48 = V_12;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)83))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_49 = V_12;
		G_B20_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)((int32_t)84)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B20_0 = 0;
	}

IL_011a:
	{
		V_17 = (bool)G_B20_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_0129;
		}
	}
	{
		// return -3;
		V_5 = ((int32_t)-3);
		goto IL_042e;
	}

IL_0129:
	{
		// rmt_wnd = wnd;
		uint16_t L_51 = V_11;
		__this->set_rmt_wnd_36(L_51);
		// ParseUna(una);
		uint32_t L_52 = V_9;
		Kcp_ParseUna_mB56435037E1AF765832C80AC92B7B329DF6485F8(__this, L_52, /*hidden argument*/NULL);
		// ShrinkBuf();
		Kcp_ShrinkBuf_m6333E4CF35774844FDDBA89B4A6E3364D2F28188(__this, /*hidden argument*/NULL);
		// if (cmd == CMD_ACK)
		uint8_t L_53 = V_12;
		V_18 = (bool)((((int32_t)L_53) == ((int32_t)((int32_t)82)))? 1 : 0);
		bool L_54 = V_18;
		if (!L_54)
		{
			goto IL_01c4;
		}
	}
	{
		// if (Utils.TimeDiff(current, ts) >= 0)
		uint32_t L_55 = __this->get_current_48();
		uint32_t L_56 = V_6;
		int32_t L_57;
		L_57 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_55, L_56, /*hidden argument*/NULL);
		V_19 = (bool)((((int32_t)((((int32_t)L_57) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_017d;
		}
	}
	{
		// UpdateAck(Utils.TimeDiff(current, ts));
		uint32_t L_59 = __this->get_current_48();
		uint32_t L_60 = V_6;
		int32_t L_61;
		L_61 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_59, L_60, /*hidden argument*/NULL);
		Kcp_UpdateAck_m68CA8F939A97585CDE22748EDCFBDD384BB30D1C(__this, L_61, /*hidden argument*/NULL);
	}

IL_017d:
	{
		// ParseAck(sn);
		uint32_t L_62 = V_7;
		Kcp_ParseAck_mD2DCE81F0B5896F2A3EF1DDAE283C55C03775D16(__this, L_62, /*hidden argument*/NULL);
		// ShrinkBuf();
		Kcp_ShrinkBuf_m6333E4CF35774844FDDBA89B4A6E3364D2F28188(__this, /*hidden argument*/NULL);
		// if (flag == 0)
		int32_t L_63 = V_3;
		V_20 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_20;
		if (!L_64)
		{
			goto IL_01a3;
		}
	}
	{
		// flag = 1;
		V_3 = 1;
		// maxack = sn;
		uint32_t L_65 = V_7;
		V_1 = L_65;
		// latest_ts = ts;
		uint32_t L_66 = V_6;
		V_2 = L_66;
		goto IL_01be;
	}

IL_01a3:
	{
		// if (Utils.TimeDiff(sn, maxack) > 0)
		uint32_t L_67 = V_7;
		uint32_t L_68 = V_1;
		int32_t L_69;
		L_69 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_67, L_68, /*hidden argument*/NULL);
		V_21 = (bool)((((int32_t)L_69) > ((int32_t)0))? 1 : 0);
		bool L_70 = V_21;
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		// maxack = sn;
		uint32_t L_71 = V_7;
		V_1 = L_71;
		// latest_ts = ts;
		uint32_t L_72 = V_6;
		V_2 = L_72;
	}

IL_01bd:
	{
	}

IL_01be:
	{
		goto IL_02c4;
	}

IL_01c4:
	{
		// else if (cmd == CMD_PUSH)
		uint8_t L_73 = V_12;
		V_22 = (bool)((((int32_t)L_73) == ((int32_t)((int32_t)81)))? 1 : 0);
		bool L_74 = V_22;
		if (!L_74)
		{
			goto IL_028c;
		}
	}
	{
		// if (Utils.TimeDiff(sn, rcv_nxt + rcv_wnd) < 0)
		uint32_t L_75 = V_7;
		uint32_t L_76 = __this->get_rcv_nxt_28();
		uint32_t L_77 = __this->get_rcv_wnd_35();
		int32_t L_78;
		L_78 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_75, ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77)), /*hidden argument*/NULL);
		V_23 = (bool)((((int32_t)L_78) < ((int32_t)0))? 1 : 0);
		bool L_79 = V_23;
		if (!L_79)
		{
			goto IL_0289;
		}
	}
	{
		// AckPush(sn, ts);
		uint32_t L_80 = V_7;
		uint32_t L_81 = V_6;
		Kcp_AckPush_m74B1EF3FE76ED716261F8EF93FA29DAE125B8BD9(__this, L_80, L_81, /*hidden argument*/NULL);
		// if (Utils.TimeDiff(sn, rcv_nxt) >= 0)
		uint32_t L_82 = V_7;
		uint32_t L_83 = __this->get_rcv_nxt_28();
		int32_t L_84;
		L_84 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_82, L_83, /*hidden argument*/NULL);
		V_24 = (bool)((((int32_t)((((int32_t)L_84) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_24;
		if (!L_85)
		{
			goto IL_0288;
		}
	}
	{
		// Segment seg = SegmentNew();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_86;
		L_86 = Kcp_SegmentNew_m21B61522D5844011591FB83201D4E29F94F28F4F(/*hidden argument*/NULL);
		V_25 = L_86;
		// seg.conv = conv_;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_87 = V_25;
		uint32_t L_88 = V_10;
		NullCheck(L_87);
		L_87->set_conv_0(L_88);
		// seg.cmd = cmd;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_89 = V_25;
		uint8_t L_90 = V_12;
		NullCheck(L_89);
		L_89->set_cmd_1(L_90);
		// seg.frg = frg;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_91 = V_25;
		uint8_t L_92 = V_13;
		NullCheck(L_91);
		L_91->set_frg_2(L_92);
		// seg.wnd = wnd;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_93 = V_25;
		uint16_t L_94 = V_11;
		NullCheck(L_93);
		L_93->set_wnd_3(L_94);
		// seg.ts = ts;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_95 = V_25;
		uint32_t L_96 = V_6;
		NullCheck(L_95);
		L_95->set_ts_4(L_96);
		// seg.sn = sn;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_97 = V_25;
		uint32_t L_98 = V_7;
		NullCheck(L_97);
		L_97->set_sn_5(L_98);
		// seg.una = una;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_99 = V_25;
		uint32_t L_100 = V_9;
		NullCheck(L_99);
		L_99->set_una_6(L_100);
		// if (len > 0)
		uint32_t L_101 = V_8;
		V_26 = (bool)((!(((uint32_t)L_101) <= ((uint32_t)0)))? 1 : 0);
		bool L_102 = V_26;
		if (!L_102)
		{
			goto IL_027e;
		}
	}
	{
		// seg.data.Write(data, offset, (int)len);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_103 = V_25;
		NullCheck(L_103);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_104 = L_103->get_data_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105 = ___data0;
		int32_t L_106 = ___offset1;
		uint32_t L_107 = V_8;
		NullCheck(L_104);
		VirtualActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_104, L_105, L_106, L_107);
	}

IL_027e:
	{
		// ParseData(seg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_108 = V_25;
		Kcp_ParseData_mF85224D64E587597A7B48DEB157B7AC26E0C0B0C(__this, L_108, /*hidden argument*/NULL);
	}

IL_0288:
	{
	}

IL_0289:
	{
		goto IL_02c4;
	}

IL_028c:
	{
		// else if (cmd == CMD_WASK)
		uint8_t L_109 = V_12;
		V_27 = (bool)((((int32_t)L_109) == ((int32_t)((int32_t)83)))? 1 : 0);
		bool L_110 = V_27;
		if (!L_110)
		{
			goto IL_02aa;
		}
	}
	{
		// probe |= ASK_TELL;
		uint32_t L_111 = __this->get_probe_38();
		__this->set_probe_38(((int32_t)((int32_t)L_111|(int32_t)2)));
		goto IL_02c4;
	}

IL_02aa:
	{
		// else if (cmd == CMD_WINS)
		uint8_t L_112 = V_12;
		V_28 = (bool)((((int32_t)L_112) == ((int32_t)((int32_t)84)))? 1 : 0);
		bool L_113 = V_28;
		if (!L_113)
		{
			goto IL_02ba;
		}
	}
	{
		goto IL_02c4;
	}

IL_02ba:
	{
		// return -3;
		V_5 = ((int32_t)-3);
		goto IL_042e;
	}

IL_02c4:
	{
		// offset += (int)len;
		int32_t L_114 = ___offset1;
		uint32_t L_115 = V_8;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		// size -= (int)len;
		int32_t L_116 = ___size2;
		uint32_t L_117 = V_8;
		___size2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)L_117));
	}

IL_02d1:
	{
		// while (true)
		V_29 = (bool)1;
		goto IL_002c;
	}

IL_02d9:
	{
		// if (flag != 0)
		int32_t L_118 = V_3;
		V_30 = (bool)((!(((uint32_t)L_118) <= ((uint32_t)0)))? 1 : 0);
		bool L_119 = V_30;
		if (!L_119)
		{
			goto IL_02ee;
		}
	}
	{
		// ParseFastack(maxack, latest_ts);
		uint32_t L_120 = V_1;
		uint32_t L_121 = V_2;
		Kcp_ParseFastack_m98965177281C998ABA5DBE7D331DDF3F61A2E0F1(__this, L_120, L_121, /*hidden argument*/NULL);
	}

IL_02ee:
	{
		// if (Utils.TimeDiff(snd_una, prev_una) > 0)
		uint32_t L_122 = __this->get_snd_una_26();
		uint32_t L_123 = V_0;
		int32_t L_124;
		L_124 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_122, L_123, /*hidden argument*/NULL);
		V_31 = (bool)((((int32_t)L_124) > ((int32_t)0))? 1 : 0);
		bool L_125 = V_31;
		if (!L_125)
		{
			goto IL_0429;
		}
	}
	{
		// if (cwnd < rmt_wnd)
		uint32_t L_126 = __this->get_cwnd_37();
		uint32_t L_127 = __this->get_rmt_wnd_36();
		V_32 = (bool)((!(((uint32_t)L_126) >= ((uint32_t)L_127)))? 1 : 0);
		bool L_128 = V_32;
		if (!L_128)
		{
			goto IL_0428;
		}
	}
	{
		// if (cwnd < ssthresh)
		uint32_t L_129 = __this->get_cwnd_37();
		uint32_t L_130 = __this->get_ssthresh_29();
		V_33 = (bool)((!(((uint32_t)L_129) >= ((uint32_t)L_130)))? 1 : 0);
		bool L_131 = V_33;
		if (!L_131)
		{
			goto IL_035b;
		}
	}
	{
		// cwnd++;
		uint32_t L_132 = __this->get_cwnd_37();
		__this->set_cwnd_37(((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1)));
		// incr += mss;
		uint32_t L_133 = __this->get_incr_47();
		uint32_t L_134 = __this->get_mss_25();
		__this->set_incr_47(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)L_134)));
		goto IL_03f2;
	}

IL_035b:
	{
		// if (incr < mss) incr = mss;
		uint32_t L_135 = __this->get_incr_47();
		uint32_t L_136 = __this->get_mss_25();
		V_34 = (bool)((!(((uint32_t)L_135) >= ((uint32_t)L_136)))? 1 : 0);
		bool L_137 = V_34;
		if (!L_137)
		{
			goto IL_037c;
		}
	}
	{
		// if (incr < mss) incr = mss;
		uint32_t L_138 = __this->get_mss_25();
		__this->set_incr_47(L_138);
	}

IL_037c:
	{
		// incr += (mss * mss) / incr + (mss / 16);
		uint32_t L_139 = __this->get_incr_47();
		uint32_t L_140 = __this->get_mss_25();
		uint32_t L_141 = __this->get_mss_25();
		uint32_t L_142 = __this->get_incr_47();
		uint32_t L_143 = __this->get_mss_25();
		__this->set_incr_47(((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_140, (int32_t)L_141))/(uint32_t)(int32_t)L_142)), (int32_t)((int32_t)((uint32_t)(int32_t)L_143/(uint32_t)(int32_t)((int32_t)16))))))));
		// if ((cwnd + 1) * mss <= incr)
		uint32_t L_144 = __this->get_cwnd_37();
		uint32_t L_145 = __this->get_mss_25();
		uint32_t L_146 = __this->get_incr_47();
		V_35 = (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1)), (int32_t)L_145))) <= ((uint32_t)L_146)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_35;
		if (!L_147)
		{
			goto IL_03f1;
		}
	}
	{
		// cwnd = (incr + mss - 1) / ((mss > 0) ? mss : 1);
		uint32_t L_148 = __this->get_incr_47();
		uint32_t L_149 = __this->get_mss_25();
		uint32_t L_150 = __this->get_mss_25();
		G_B56_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)), (int32_t)1));
		G_B56_1 = __this;
		if ((!(((uint32_t)L_150) <= ((uint32_t)0))))
		{
			G_B57_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)), (int32_t)1));
			G_B57_1 = __this;
			goto IL_03e4;
		}
	}
	{
		G_B58_0 = ((uint32_t)(1));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		goto IL_03ea;
	}

IL_03e4:
	{
		uint32_t L_151 = __this->get_mss_25();
		G_B58_0 = L_151;
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
	}

IL_03ea:
	{
		NullCheck(G_B58_2);
		G_B58_2->set_cwnd_37(((int32_t)((uint32_t)(int32_t)G_B58_1/(uint32_t)(int32_t)G_B58_0)));
	}

IL_03f1:
	{
	}

IL_03f2:
	{
		// if (cwnd > rmt_wnd)
		uint32_t L_152 = __this->get_cwnd_37();
		uint32_t L_153 = __this->get_rmt_wnd_36();
		V_36 = (bool)((!(((uint32_t)L_152) <= ((uint32_t)L_153)))? 1 : 0);
		bool L_154 = V_36;
		if (!L_154)
		{
			goto IL_0427;
		}
	}
	{
		// cwnd = rmt_wnd;
		uint32_t L_155 = __this->get_rmt_wnd_36();
		__this->set_cwnd_37(L_155);
		// incr = rmt_wnd * mss;
		uint32_t L_156 = __this->get_rmt_wnd_36();
		uint32_t L_157 = __this->get_mss_25();
		__this->set_incr_47(((int32_t)il2cpp_codegen_multiply((int32_t)L_156, (int32_t)L_157)));
	}

IL_0427:
	{
	}

IL_0428:
	{
	}

IL_0429:
	{
		// return 0;
		V_5 = 0;
		goto IL_042e;
	}

IL_042e:
	{
		// }
		int32_t L_158 = V_5;
		return L_158;
	}
}
// System.UInt32 kcp2k.Kcp::WndUnused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_WndUnused_m60ED894EB09E1159F4611DE9040675948C698E72 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// if (rcv_queue.Count < rcv_wnd)
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_0 = __this->get_rcv_queue_53();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_0, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		uint32_t L_2 = __this->get_rcv_wnd_35();
		V_0 = (bool)((((int64_t)((int64_t)((int64_t)L_1))) < ((int64_t)((int64_t)((uint64_t)L_2))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// return rcv_wnd - (uint)rcv_queue.Count;
		uint32_t L_4 = __this->get_rcv_wnd_35();
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_5 = __this->get_rcv_queue_53();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_5, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_6));
		goto IL_0033;
	}

IL_002f:
	{
		// return 0;
		V_1 = 0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		uint32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void kcp2k.Kcp::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Flush_m17D4470AB4D93CF4CB563E6A8F97B4B007F9D8F6 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m66A7E50204C16321543E84D9EFFBC8E8FD6AB4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0  V_8;
	memset((&V_8), 0, sizeof(V_8));
	AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_18 = NULL;
	bool V_19 = false;
	uint32_t V_20 = 0;
	bool V_21 = false;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	int32_t V_32 = 0;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	uint32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B34_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B53_0 = 0;
	{
		(&V_0)->set_U3CU3E4__this_1(__this);
		// int offset = 0;    // buffer ptr in original C
		(&V_0)->set_offset_0(0);
		// bool lost = false; // lost segments
		V_1 = (bool)0;
		// if (!updated) return;
		bool L_0 = __this->get_updated_43();
		V_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (!updated) return;
		goto IL_0712;
	}

IL_0029:
	{
		// Segment seg = SegmentNew();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_2;
		L_2 = Kcp_SegmentNew_m21B61522D5844011591FB83201D4E29F94F28F4F(/*hidden argument*/NULL);
		V_2 = L_2;
		// seg.conv = conv;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_3 = V_2;
		uint32_t L_4 = __this->get_conv_23();
		NullCheck(L_3);
		L_3->set_conv_0(L_4);
		// seg.cmd = CMD_ACK;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_5 = V_2;
		NullCheck(L_5);
		L_5->set_cmd_1(((int32_t)82));
		// seg.wnd = WndUnused();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_6 = V_2;
		uint32_t L_7;
		L_7 = Kcp_WndUnused_m60ED894EB09E1159F4611DE9040675948C698E72(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_wnd_3(L_7);
		// seg.una = rcv_nxt;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_8 = V_2;
		uint32_t L_9 = __this->get_rcv_nxt_28();
		NullCheck(L_8);
		L_8->set_una_6(L_9);
		// foreach (AckItem ack in acklist)
		List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * L_10 = __this->get_acklist_56();
		NullCheck(L_10);
		Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0  L_11;
		L_11 = List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2(L_10, /*hidden argument*/List_1_GetEnumerator_mADD14790CF8D2EC821E8E3A463B2DC3AA44C43D2_RuntimeMethod_var);
		V_8 = L_11;
	}

IL_0069:
	try
	{// begin try (depth: 1)
		{
			goto IL_00bb;
		}

IL_006b:
		{
			// foreach (AckItem ack in acklist)
			AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  L_12;
			L_12 = Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_inline((Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_RuntimeMethod_var);
			V_9 = L_12;
			// MakeSpace(OVERHEAD);
			Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E(__this, ((int32_t)24), (U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F *)(&V_0), /*hidden argument*/NULL);
			// seg.sn = ack.serialNumber;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_13 = V_2;
			AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  L_14 = V_9;
			uint32_t L_15 = L_14.get_serialNumber_0();
			NullCheck(L_13);
			L_13->set_sn_5(L_15);
			// seg.ts = ack.timestamp;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_16 = V_2;
			AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  L_17 = V_9;
			uint32_t L_18 = L_17.get_timestamp_1();
			NullCheck(L_16);
			L_16->set_ts_4(L_18);
			// offset += seg.Encode(buffer, offset);
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_19 = V_0;
			int32_t L_20 = L_19.get_offset_0();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_21 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_buffer_57();
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_23 = V_0;
			int32_t L_24 = L_23.get_offset_0();
			NullCheck(L_21);
			int32_t L_25;
			L_25 = Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820(L_21, L_22, L_24, /*hidden argument*/NULL);
			(&V_0)->set_offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_25)));
		}

IL_00bb:
		{
			// foreach (AckItem ack in acklist)
			bool L_26;
			L_26 = Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94((Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m0E0163F56F42D1D0E66D12BE8537A5E890EFBD94_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_006b;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c6);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3((Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m24DAC81F7745DA23C5810AABE890415EC88867E3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(198)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
	}

IL_00d5:
	{
		// acklist.Clear();
		List_1_t2DB9B7314D41FB8C9F99391E55195E3865AB0C35 * L_27 = __this->get_acklist_56();
		NullCheck(L_27);
		List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C(L_27, /*hidden argument*/List_1_Clear_m945B56183AB22249B7F15EF93CB8B0F2900B448C_RuntimeMethod_var);
		// if (rmt_wnd == 0)
		uint32_t L_28 = __this->get_rmt_wnd_36();
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_01be;
		}
	}
	{
		// if (probe_wait == 0)
		uint32_t L_30 = __this->get_probe_wait_45();
		V_11 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_0128;
		}
	}
	{
		// probe_wait = PROBE_INIT;
		__this->set_probe_wait_45(((int32_t)7000));
		// ts_probe = current + probe_wait;
		uint32_t L_32 = __this->get_current_48();
		uint32_t L_33 = __this->get_probe_wait_45();
		__this->set_ts_probe_44(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)));
		goto IL_01bb;
	}

IL_0128:
	{
		// if (Utils.TimeDiff(current, ts_probe) >= 0)
		uint32_t L_34 = __this->get_current_48();
		uint32_t L_35 = __this->get_ts_probe_44();
		int32_t L_36;
		L_36 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_34, L_35, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_36) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_01ba;
		}
	}
	{
		// if (probe_wait < PROBE_INIT)
		uint32_t L_38 = __this->get_probe_wait_45();
		V_13 = (bool)((!(((uint32_t)L_38) >= ((uint32_t)((int32_t)7000))))? 1 : 0);
		bool L_39 = V_13;
		if (!L_39)
		{
			goto IL_0165;
		}
	}
	{
		// probe_wait = PROBE_INIT;
		__this->set_probe_wait_45(((int32_t)7000));
	}

IL_0165:
	{
		// probe_wait += probe_wait / 2;
		uint32_t L_40 = __this->get_probe_wait_45();
		uint32_t L_41 = __this->get_probe_wait_45();
		__this->set_probe_wait_45(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)((int32_t)((uint32_t)(int32_t)L_41/(uint32_t)(int32_t)2)))));
		// if (probe_wait > PROBE_LIMIT)
		uint32_t L_42 = __this->get_probe_wait_45();
		V_14 = (bool)((!(((uint32_t)L_42) <= ((uint32_t)((int32_t)120000))))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_0198;
		}
	}
	{
		// probe_wait = PROBE_LIMIT;
		__this->set_probe_wait_45(((int32_t)120000));
	}

IL_0198:
	{
		// ts_probe = current + probe_wait;
		uint32_t L_44 = __this->get_current_48();
		uint32_t L_45 = __this->get_probe_wait_45();
		__this->set_ts_probe_44(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)));
		// probe |= ASK_SEND;
		uint32_t L_46 = __this->get_probe_38();
		__this->set_probe_38(((int32_t)((int32_t)L_46|(int32_t)1)));
	}

IL_01ba:
	{
	}

IL_01bb:
	{
		goto IL_01ce;
	}

IL_01be:
	{
		// ts_probe = 0;
		__this->set_ts_probe_44(0);
		// probe_wait = 0;
		__this->set_probe_wait_45(0);
	}

IL_01ce:
	{
		// if ((probe & ASK_SEND) != 0)
		uint32_t L_47 = __this->get_probe_38();
		V_15 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_47&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_48 = V_15;
		if (!L_48)
		{
			goto IL_0214;
		}
	}
	{
		// seg.cmd = CMD_WASK;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_49 = V_2;
		NullCheck(L_49);
		L_49->set_cmd_1(((int32_t)83));
		// MakeSpace(OVERHEAD);
		Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E(__this, ((int32_t)24), (U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F *)(&V_0), /*hidden argument*/NULL);
		// offset += seg.Encode(buffer, offset);
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_50 = V_0;
		int32_t L_51 = L_50.get_offset_0();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_52 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = __this->get_buffer_57();
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_54 = V_0;
		int32_t L_55 = L_54.get_offset_0();
		NullCheck(L_52);
		int32_t L_56;
		L_56 = Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820(L_52, L_53, L_55, /*hidden argument*/NULL);
		(&V_0)->set_offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_56)));
	}

IL_0214:
	{
		// if ((probe & ASK_TELL) != 0)
		uint32_t L_57 = __this->get_probe_38();
		V_16 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_025a;
		}
	}
	{
		// seg.cmd = CMD_WINS;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_59 = V_2;
		NullCheck(L_59);
		L_59->set_cmd_1(((int32_t)84));
		// MakeSpace(OVERHEAD);
		Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E(__this, ((int32_t)24), (U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F *)(&V_0), /*hidden argument*/NULL);
		// offset += seg.Encode(buffer, offset);
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_60 = V_0;
		int32_t L_61 = L_60.get_offset_0();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_62 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = __this->get_buffer_57();
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_64 = V_0;
		int32_t L_65 = L_64.get_offset_0();
		NullCheck(L_62);
		int32_t L_66;
		L_66 = Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820(L_62, L_63, L_65, /*hidden argument*/NULL);
		(&V_0)->set_offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_66)));
	}

IL_025a:
	{
		// probe = 0;
		__this->set_probe_38(0);
		// uint cwnd_ = Math.Min(snd_wnd, rmt_wnd);
		uint32_t L_67 = __this->get_snd_wnd_34();
		uint32_t L_68 = __this->get_rmt_wnd_36();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint32_t L_69;
		L_69 = Math_Min_m3BB35DED062E0E5D1FC72D9B9B142C92B4476F3E(L_67, L_68, /*hidden argument*/NULL);
		V_3 = L_69;
		// if (!nocwnd) cwnd_ = Math.Min(cwnd, cwnd_);
		bool L_70 = __this->get_nocwnd_51();
		V_17 = (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_17;
		if (!L_71)
		{
			goto IL_028f;
		}
	}
	{
		// if (!nocwnd) cwnd_ = Math.Min(cwnd, cwnd_);
		uint32_t L_72 = __this->get_cwnd_37();
		uint32_t L_73 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint32_t L_74;
		L_74 = Math_Min_m3BB35DED062E0E5D1FC72D9B9B142C92B4476F3E(L_72, L_73, /*hidden argument*/NULL);
		V_3 = L_74;
	}

IL_028f:
	{
		goto IL_034c;
	}

IL_0294:
	{
		// if (snd_queue.Count == 0) break;
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_75 = __this->get_snd_queue_52();
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_75, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_19;
		if (!L_77)
		{
			goto IL_02ae;
		}
	}
	{
		// if (snd_queue.Count == 0) break;
		goto IL_036b;
	}

IL_02ae:
	{
		// Segment newseg = snd_queue.Dequeue();
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_78 = __this->get_snd_queue_52();
		NullCheck(L_78);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_79;
		L_79 = Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE(L_78, /*hidden argument*/Queue_1_Dequeue_m70D0E3733BF157191FEA7FD480658F48FA3A84DE_RuntimeMethod_var);
		V_18 = L_79;
		// newseg.conv = conv;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_80 = V_18;
		uint32_t L_81 = __this->get_conv_23();
		NullCheck(L_80);
		L_80->set_conv_0(L_81);
		// newseg.cmd = CMD_PUSH;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_82 = V_18;
		NullCheck(L_82);
		L_82->set_cmd_1(((int32_t)81));
		// newseg.wnd = seg.wnd;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_83 = V_18;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_84 = V_2;
		NullCheck(L_84);
		uint32_t L_85 = L_84->get_wnd_3();
		NullCheck(L_83);
		L_83->set_wnd_3(L_85);
		// newseg.ts = current;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_86 = V_18;
		uint32_t L_87 = __this->get_current_48();
		NullCheck(L_86);
		L_86->set_ts_4(L_87);
		// newseg.sn = snd_nxt++;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_88 = V_18;
		uint32_t L_89 = __this->get_snd_nxt_27();
		V_20 = L_89;
		uint32_t L_90 = V_20;
		__this->set_snd_nxt_27(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
		uint32_t L_91 = V_20;
		NullCheck(L_88);
		L_88->set_sn_5(L_91);
		// newseg.una = rcv_nxt;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_92 = V_18;
		uint32_t L_93 = __this->get_rcv_nxt_28();
		NullCheck(L_92);
		L_92->set_una_6(L_93);
		// newseg.resendts = current;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_94 = V_18;
		uint32_t L_95 = __this->get_current_48();
		NullCheck(L_94);
		L_94->set_resendts_7(L_95);
		// newseg.rto = rx_rto;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_96 = V_18;
		int32_t L_97 = __this->get_rx_rto_32();
		NullCheck(L_96);
		L_96->set_rto_8(L_97);
		// newseg.fastack = 0;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_98 = V_18;
		NullCheck(L_98);
		L_98->set_fastack_9(0);
		// newseg.xmit = 0;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_99 = V_18;
		NullCheck(L_99);
		L_99->set_xmit_10(0);
		// snd_buf.Add(newseg);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_100 = __this->get_snd_buf_54();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_101 = V_18;
		NullCheck(L_100);
		List_1_Add_m66A7E50204C16321543E84D9EFFBC8E8FD6AB4C5(L_100, L_101, /*hidden argument*/List_1_Add_m66A7E50204C16321543E84D9EFFBC8E8FD6AB4C5_RuntimeMethod_var);
	}

IL_034c:
	{
		// while (Utils.TimeDiff(snd_nxt, snd_una + cwnd_) < 0)
		uint32_t L_102 = __this->get_snd_nxt_27();
		uint32_t L_103 = __this->get_snd_una_26();
		uint32_t L_104 = V_3;
		int32_t L_105;
		L_105 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_102, ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_104)), /*hidden argument*/NULL);
		V_21 = (bool)((((int32_t)L_105) < ((int32_t)0))? 1 : 0);
		bool L_106 = V_21;
		if (L_106)
		{
			goto IL_0294;
		}
	}

IL_036b:
	{
		// uint resent = fastresend > 0 ? (uint)fastresend : 0xffffffff;
		int32_t L_107 = __this->get_fastresend_49();
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_0377;
		}
	}
	{
		G_B34_0 = (-1);
		goto IL_037d;
	}

IL_0377:
	{
		int32_t L_108 = __this->get_fastresend_49();
		G_B34_0 = L_108;
	}

IL_037d:
	{
		V_4 = G_B34_0;
		// uint rtomin = nodelay == 0 ? (uint)rx_rto >> 3 : 0;
		uint32_t L_109 = __this->get_nodelay_42();
		if (!L_109)
		{
			goto IL_038a;
		}
	}
	{
		G_B37_0 = 0;
		goto IL_0392;
	}

IL_038a:
	{
		int32_t L_110 = __this->get_rx_rto_32();
		G_B37_0 = ((int32_t)((uint32_t)L_110>>3));
	}

IL_0392:
	{
		V_5 = G_B37_0;
		// int change = 0;
		V_6 = 0;
		// foreach (Segment segment in snd_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_111 = __this->get_snd_buf_54();
		NullCheck(L_111);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_112;
		L_112 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_111, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_22 = L_112;
	}

IL_03a5:
	try
	{// begin try (depth: 1)
		{
			goto IL_0628;
		}

IL_03aa:
		{
			// foreach (Segment segment in snd_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_113;
			L_113 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_22), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_23 = L_113;
			// bool needsend = false;
			V_24 = (bool)0;
			// if (segment.xmit == 0)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_114 = V_23;
			NullCheck(L_114);
			uint32_t L_115 = L_114->get_xmit_10();
			V_25 = (bool)((((int32_t)L_115) == ((int32_t)0))? 1 : 0);
			bool L_116 = V_25;
			if (!L_116)
			{
				goto IL_0405;
			}
		}

IL_03c7:
		{
			// needsend = true;
			V_24 = (bool)1;
			// segment.xmit++;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_117 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_118 = L_117;
			NullCheck(L_118);
			uint32_t L_119 = L_118->get_xmit_10();
			NullCheck(L_118);
			L_118->set_xmit_10(((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1)));
			// segment.rto = rx_rto;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_120 = V_23;
			int32_t L_121 = __this->get_rx_rto_32();
			NullCheck(L_120);
			L_120->set_rto_8(L_121);
			// segment.resendts = current + (uint)segment.rto + rtomin;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_122 = V_23;
			uint32_t L_123 = __this->get_current_48();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_124 = V_23;
			NullCheck(L_124);
			int32_t L_125 = L_124->get_rto_8();
			uint32_t L_126 = V_5;
			NullCheck(L_122);
			L_122->set_resendts_7(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)L_125)), (int32_t)L_126)));
			goto IL_0535;
		}

IL_0405:
		{
			// else if (Utils.TimeDiff(current, segment.resendts) >= 0)
			uint32_t L_127 = __this->get_current_48();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_128 = V_23;
			NullCheck(L_128);
			uint32_t L_129 = L_128->get_resendts_7();
			int32_t L_130;
			L_130 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_127, L_129, /*hidden argument*/NULL);
			V_26 = (bool)((((int32_t)((((int32_t)L_130) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_131 = V_26;
			if (!L_131)
			{
				goto IL_04c2;
			}
		}

IL_0426:
		{
			// needsend = true;
			V_24 = (bool)1;
			// segment.xmit++;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_132 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_133 = L_132;
			NullCheck(L_133);
			uint32_t L_134 = L_133->get_xmit_10();
			NullCheck(L_133);
			L_133->set_xmit_10(((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)1)));
			// xmit++;
			uint32_t L_135 = __this->get_xmit_41();
			__this->set_xmit_41(((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)));
			// if (nodelay == 0)
			uint32_t L_136 = __this->get_nodelay_42();
			V_27 = (bool)((((int32_t)L_136) == ((int32_t)0))? 1 : 0);
			bool L_137 = V_27;
			if (!L_137)
			{
				goto IL_047a;
			}
		}

IL_0456:
		{
			// segment.rto += Math.Max(segment.rto, rx_rto);
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_138 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_139 = L_138;
			NullCheck(L_139);
			int32_t L_140 = L_139->get_rto_8();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_141 = V_23;
			NullCheck(L_141);
			int32_t L_142 = L_141->get_rto_8();
			int32_t L_143 = __this->get_rx_rto_32();
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_144;
			L_144 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_142, L_143, /*hidden argument*/NULL);
			NullCheck(L_139);
			L_139->set_rto_8(((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_144)));
			goto IL_04a8;
		}

IL_047a:
		{
			// int step = (nodelay < 2) ? segment.rto : rx_rto;
			uint32_t L_145 = __this->get_nodelay_42();
			if ((!(((uint32_t)L_145) >= ((uint32_t)2))))
			{
				goto IL_048c;
			}
		}

IL_0484:
		{
			int32_t L_146 = __this->get_rx_rto_32();
			G_B47_0 = L_146;
			goto IL_0493;
		}

IL_048c:
		{
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_147 = V_23;
			NullCheck(L_147);
			int32_t L_148 = L_147->get_rto_8();
			G_B47_0 = L_148;
		}

IL_0493:
		{
			V_28 = G_B47_0;
			// segment.rto += step / 2;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_149 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_150 = L_149;
			NullCheck(L_150);
			int32_t L_151 = L_150->get_rto_8();
			int32_t L_152 = V_28;
			NullCheck(L_150);
			L_150->set_rto_8(((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)((int32_t)((int32_t)L_152/(int32_t)2)))));
		}

IL_04a8:
		{
			// segment.resendts = current + (uint)segment.rto;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_153 = V_23;
			uint32_t L_154 = __this->get_current_48();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_155 = V_23;
			NullCheck(L_155);
			int32_t L_156 = L_155->get_rto_8();
			NullCheck(L_153);
			L_153->set_resendts_7(((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)L_156)));
			// lost = true;
			V_1 = (bool)1;
			goto IL_0535;
		}

IL_04c2:
		{
			// else if (segment.fastack >= resent)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_157 = V_23;
			NullCheck(L_157);
			uint32_t L_158 = L_157->get_fastack_9();
			uint32_t L_159 = V_4;
			V_29 = (bool)((((int32_t)((!(((uint32_t)L_158) >= ((uint32_t)L_159)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_160 = V_29;
			if (!L_160)
			{
				goto IL_0535;
			}
		}

IL_04d6:
		{
			// if (segment.xmit <= fastlimit || fastlimit <= 0)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_161 = V_23;
			NullCheck(L_161);
			uint32_t L_162 = L_161->get_xmit_10();
			int32_t L_163 = __this->get_fastlimit_50();
			if ((((int64_t)((int64_t)((uint64_t)L_162))) <= ((int64_t)((int64_t)((int64_t)L_163)))))
			{
				goto IL_04f6;
			}
		}

IL_04e8:
		{
			int32_t L_164 = __this->get_fastlimit_50();
			G_B53_0 = ((((int32_t)((((int32_t)L_164) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_04f7;
		}

IL_04f6:
		{
			G_B53_0 = 1;
		}

IL_04f7:
		{
			V_30 = (bool)G_B53_0;
			bool L_165 = V_30;
			if (!L_165)
			{
				goto IL_0534;
			}
		}

IL_04fd:
		{
			// needsend = true;
			V_24 = (bool)1;
			// segment.xmit++;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_166 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_167 = L_166;
			NullCheck(L_167);
			uint32_t L_168 = L_167->get_xmit_10();
			NullCheck(L_167);
			L_167->set_xmit_10(((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1)));
			// segment.fastack = 0;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_169 = V_23;
			NullCheck(L_169);
			L_169->set_fastack_9(0);
			// segment.resendts = current + (uint)segment.rto;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_170 = V_23;
			uint32_t L_171 = __this->get_current_48();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_172 = V_23;
			NullCheck(L_172);
			int32_t L_173 = L_172->get_rto_8();
			NullCheck(L_170);
			L_170->set_resendts_7(((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)L_173)));
			// change++;
			int32_t L_174 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		}

IL_0534:
		{
		}

IL_0535:
		{
			// if (needsend)
			bool L_175 = V_24;
			V_31 = L_175;
			bool L_176 = V_31;
			if (!L_176)
			{
				goto IL_0627;
			}
		}

IL_0540:
		{
			// segment.ts = current;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_177 = V_23;
			uint32_t L_178 = __this->get_current_48();
			NullCheck(L_177);
			L_177->set_ts_4(L_178);
			// segment.wnd = seg.wnd;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_179 = V_23;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_180 = V_2;
			NullCheck(L_180);
			uint32_t L_181 = L_180->get_wnd_3();
			NullCheck(L_179);
			L_179->set_wnd_3(L_181);
			// segment.una = rcv_nxt;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_182 = V_23;
			uint32_t L_183 = __this->get_rcv_nxt_28();
			NullCheck(L_182);
			L_182->set_una_6(L_183);
			// int need = OVERHEAD + (int)segment.data.Position;
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_184 = V_23;
			NullCheck(L_184);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_185 = L_184->get_data_11();
			NullCheck(L_185);
			int64_t L_186;
			L_186 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_185);
			V_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)24), (int32_t)((int32_t)((int32_t)L_186))));
			// MakeSpace(need);
			int32_t L_187 = V_32;
			Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E(__this, L_187, (U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F *)(&V_0), /*hidden argument*/NULL);
			// offset += segment.Encode(buffer, offset);
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_188 = V_0;
			int32_t L_189 = L_188.get_offset_0();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_190 = V_23;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_191 = __this->get_buffer_57();
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_192 = V_0;
			int32_t L_193 = L_192.get_offset_0();
			NullCheck(L_190);
			int32_t L_194;
			L_194 = Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820(L_190, L_191, L_193, /*hidden argument*/NULL);
			(&V_0)->set_offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)L_194)));
			// if (segment.data.Position > 0)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_195 = V_23;
			NullCheck(L_195);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_196 = L_195->get_data_11();
			NullCheck(L_196);
			int64_t L_197;
			L_197 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_196);
			V_33 = (bool)((((int64_t)L_197) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
			bool L_198 = V_33;
			if (!L_198)
			{
				goto IL_0605;
			}
		}

IL_05bc:
		{
			// Buffer.BlockCopy(segment.data.GetBuffer(), 0, buffer, offset, (int)segment.data.Position);
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_199 = V_23;
			NullCheck(L_199);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_200 = L_199->get_data_11();
			NullCheck(L_200);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_201;
			L_201 = VirtualFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_200);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_202 = __this->get_buffer_57();
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_203 = V_0;
			int32_t L_204 = L_203.get_offset_0();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_205 = V_23;
			NullCheck(L_205);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_206 = L_205->get_data_11();
			NullCheck(L_206);
			int64_t L_207;
			L_207 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_206);
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_201, 0, (RuntimeArray *)(RuntimeArray *)L_202, L_204, ((int32_t)((int32_t)L_207)), /*hidden argument*/NULL);
			// offset += (int)segment.data.Position;
			U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F  L_208 = V_0;
			int32_t L_209 = L_208.get_offset_0();
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_210 = V_23;
			NullCheck(L_210);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_211 = L_210->get_data_11();
			NullCheck(L_211);
			int64_t L_212;
			L_212 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_211);
			(&V_0)->set_offset_0(((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)((int32_t)((int32_t)L_212)))));
		}

IL_0605:
		{
			// if (segment.xmit >= dead_link)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_213 = V_23;
			NullCheck(L_213);
			uint32_t L_214 = L_213->get_xmit_10();
			uint32_t L_215 = __this->get_dead_link_46();
			V_34 = (bool)((((int32_t)((!(((uint32_t)L_214) >= ((uint32_t)L_215)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_216 = V_34;
			if (!L_216)
			{
				goto IL_0626;
			}
		}

IL_061d:
		{
			// state = -1;
			__this->set_state_22((-1));
		}

IL_0626:
		{
		}

IL_0627:
		{
		}

IL_0628:
		{
			// foreach (Segment segment in snd_buf)
			bool L_217;
			L_217 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_22), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_217)
			{
				goto IL_03aa;
			}
		}

IL_0634:
		{
			IL2CPP_LEAVE(0x645, FINALLY_0636);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0636;
	}

FINALLY_0636:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_22), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1590)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(1590)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x645, IL_0645)
	}

IL_0645:
	{
		// SegmentDelete(seg);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_218 = V_2;
		Kcp_SegmentDelete_mE29E9118DDE096E8F0887044661B518E8C334884(L_218, /*hidden argument*/NULL);
		// FlushBuffer();
		Kcp_U3CFlushU3Eg__FlushBufferU7C79_1_m99167B0B8B29A3971187C318A871DE07C1A4F874(__this, (U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F *)(&V_0), /*hidden argument*/NULL);
		// if (change > 0)
		int32_t L_219 = V_6;
		V_35 = (bool)((((int32_t)L_219) > ((int32_t)0))? 1 : 0);
		bool L_220 = V_35;
		if (!L_220)
		{
			goto IL_06b3;
		}
	}
	{
		// uint inflight = snd_nxt - snd_una;
		uint32_t L_221 = __this->get_snd_nxt_27();
		uint32_t L_222 = __this->get_snd_una_26();
		V_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_221, (int32_t)L_222));
		// ssthresh = inflight / 2;
		uint32_t L_223 = V_36;
		__this->set_ssthresh_29(((int32_t)((uint32_t)(int32_t)L_223/(uint32_t)(int32_t)2)));
		// if (ssthresh < THRESH_MIN)
		uint32_t L_224 = __this->get_ssthresh_29();
		V_37 = (bool)((!(((uint32_t)L_224) >= ((uint32_t)2)))? 1 : 0);
		bool L_225 = V_37;
		if (!L_225)
		{
			goto IL_0690;
		}
	}
	{
		// ssthresh = THRESH_MIN;
		__this->set_ssthresh_29(2);
	}

IL_0690:
	{
		// cwnd = ssthresh + resent;
		uint32_t L_226 = __this->get_ssthresh_29();
		uint32_t L_227 = V_4;
		__this->set_cwnd_37(((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_227)));
		// incr = cwnd * mss;
		uint32_t L_228 = __this->get_cwnd_37();
		uint32_t L_229 = __this->get_mss_25();
		__this->set_incr_47(((int32_t)il2cpp_codegen_multiply((int32_t)L_228, (int32_t)L_229)));
	}

IL_06b3:
	{
		// if (lost)
		bool L_230 = V_1;
		V_38 = L_230;
		bool L_231 = V_38;
		if (!L_231)
		{
			goto IL_06ee;
		}
	}
	{
		// ssthresh = cwnd_ / 2;
		uint32_t L_232 = V_3;
		__this->set_ssthresh_29(((int32_t)((uint32_t)(int32_t)L_232/(uint32_t)(int32_t)2)));
		// if (ssthresh < THRESH_MIN)
		uint32_t L_233 = __this->get_ssthresh_29();
		V_39 = (bool)((!(((uint32_t)L_233) >= ((uint32_t)2)))? 1 : 0);
		bool L_234 = V_39;
		if (!L_234)
		{
			goto IL_06da;
		}
	}
	{
		// ssthresh = THRESH_MIN;
		__this->set_ssthresh_29(2);
	}

IL_06da:
	{
		// cwnd = 1;
		__this->set_cwnd_37(1);
		// incr = mss;
		uint32_t L_235 = __this->get_mss_25();
		__this->set_incr_47(L_235);
	}

IL_06ee:
	{
		// if (cwnd < 1)
		uint32_t L_236 = __this->get_cwnd_37();
		V_40 = (bool)((!(((uint32_t)L_236) >= ((uint32_t)1)))? 1 : 0);
		bool L_237 = V_40;
		if (!L_237)
		{
			goto IL_0712;
		}
	}
	{
		// cwnd = 1;
		__this->set_cwnd_37(1);
		// incr = mss;
		uint32_t L_238 = __this->get_mss_25();
		__this->set_incr_47(L_238);
	}

IL_0712:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::Update(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Update_m4FB232073ED815EE09C486D1426086DA8D042EAB (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___currentTimeMilliSeconds0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// current = currentTimeMilliSeconds;
		uint32_t L_0 = ___currentTimeMilliSeconds0;
		__this->set_current_48(L_0);
		// if (!updated)
		bool L_1 = __this->get_updated_43();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// updated = true;
		__this->set_updated_43((bool)1);
		// ts_flush = current;
		uint32_t L_3 = __this->get_current_48();
		__this->set_ts_flush_40(L_3);
	}

IL_002a:
	{
		// int slap = Utils.TimeDiff(current, ts_flush);
		uint32_t L_4 = __this->get_current_48();
		uint32_t L_5 = __this->get_ts_flush_40();
		int32_t L_6;
		L_6 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (slap >= 10000 || slap < -10000)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)10000))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)-10000)))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		V_2 = (bool)G_B5_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// ts_flush = current;
		uint32_t L_10 = __this->get_current_48();
		__this->set_ts_flush_40(L_10);
		// slap = 0;
		V_0 = 0;
	}

IL_0063:
	{
		// if (slap >= 0)
		int32_t L_11 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_00bc;
		}
	}
	{
		// ts_flush += interval;
		uint32_t L_13 = __this->get_ts_flush_40();
		uint32_t L_14 = __this->get_interval_39();
		__this->set_ts_flush_40(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		// if (Utils.TimeDiff(current, ts_flush) >= 0)
		uint32_t L_15 = __this->get_current_48();
		uint32_t L_16 = __this->get_ts_flush_40();
		int32_t L_17;
		L_17 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_15, L_16, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		// ts_flush = current + interval;
		uint32_t L_19 = __this->get_current_48();
		uint32_t L_20 = __this->get_interval_39();
		__this->set_ts_flush_40(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
	}

IL_00b4:
	{
		// Flush();
		Kcp_Flush_m17D4470AB4D93CF4CB563E6A8F97B4B007F9D8F6(__this, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.UInt32 kcp2k.Kcp::Check(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_Check_mCA2C1B618C381DB994C3DDAABDB528B7C908D2A0 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___current_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// uint ts_flush_ = ts_flush;
		uint32_t L_0 = __this->get_ts_flush_40();
		V_0 = L_0;
		// int tm_flush = 0x7fffffff;
		V_1 = ((int32_t)2147483647LL);
		// int tm_packet = 0x7fffffff;
		V_2 = ((int32_t)2147483647LL);
		// if (!updated)
		bool L_1 = __this->get_updated_43();
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return current_;
		uint32_t L_3 = ___current_0;
		V_5 = L_3;
		goto IL_0108;
	}

IL_002c:
	{
		// if (Utils.TimeDiff(current_, ts_flush_) >= 10000 ||
		//     Utils.TimeDiff(current_, ts_flush_) < -10000)
		uint32_t L_4 = ___current_0;
		uint32_t L_5 = V_0;
		int32_t L_6;
		L_6 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_4, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)10000))))
		{
			goto IL_004a;
		}
	}
	{
		uint32_t L_7 = ___current_0;
		uint32_t L_8 = V_0;
		int32_t L_9;
		L_9 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_7, L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)-10000)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		V_6 = (bool)G_B5_0;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// ts_flush_ = current_;
		uint32_t L_11 = ___current_0;
		V_0 = L_11;
	}

IL_0055:
	{
		// if (Utils.TimeDiff(current_, ts_flush_) >= 0)
		uint32_t L_12 = ___current_0;
		uint32_t L_13 = V_0;
		int32_t L_14;
		L_14 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_12, L_13, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		// return current_;
		uint32_t L_16 = ___current_0;
		V_5 = L_16;
		goto IL_0108;
	}

IL_0071:
	{
		// tm_flush = Utils.TimeDiff(ts_flush_, current_);
		uint32_t L_17 = V_0;
		uint32_t L_18 = ___current_0;
		int32_t L_19;
		L_19 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// foreach (Segment seg in snd_buf)
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_20 = __this->get_snd_buf_54();
		NullCheck(L_20);
		Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550  L_21;
		L_21 = List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754(L_20, /*hidden argument*/List_1_GetEnumerator_mD5D3000CA6AADA4DC2F423D177F91A0388491754_RuntimeMethod_var);
		V_8 = L_21;
	}

IL_0087:
	try
	{// begin try (depth: 1)
		{
			goto IL_00c5;
		}

IL_0089:
		{
			// foreach (Segment seg in snd_buf)
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_22;
			L_22 = Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_inline((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m7B7C07EDE9A214FB72929AD8D7ADBF317512A7F3_RuntimeMethod_var);
			V_9 = L_22;
			// int diff = Utils.TimeDiff(seg.resendts, current_);
			Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_23 = V_9;
			NullCheck(L_23);
			uint32_t L_24 = L_23->get_resendts_7();
			uint32_t L_25 = ___current_0;
			int32_t L_26;
			L_26 = Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline(L_24, L_25, /*hidden argument*/NULL);
			V_10 = L_26;
			// if (diff <= 0)
			int32_t L_27 = V_10;
			V_11 = (bool)((((int32_t)((((int32_t)L_27) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_28 = V_11;
			if (!L_28)
			{
				goto IL_00b6;
			}
		}

IL_00b0:
		{
			// return current_;
			uint32_t L_29 = ___current_0;
			V_5 = L_29;
			IL2CPP_LEAVE(0x108, FINALLY_00d0);
		}

IL_00b6:
		{
			// if (diff < tm_packet) tm_packet = diff;
			int32_t L_30 = V_10;
			int32_t L_31 = V_2;
			V_12 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
			bool L_32 = V_12;
			if (!L_32)
			{
				goto IL_00c4;
			}
		}

IL_00c1:
		{
			// if (diff < tm_packet) tm_packet = diff;
			int32_t L_33 = V_10;
			V_2 = L_33;
		}

IL_00c4:
		{
		}

IL_00c5:
		{
			// foreach (Segment seg in snd_buf)
			bool L_34;
			L_34 = Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m6D0F54D8CFF918A4FB095C47BE042ADABB81A2A6_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0089;
			}
		}

IL_00ce:
		{
			IL2CPP_LEAVE(0xDF, FINALLY_00d0);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7((Enumerator_tD0C0E3672B61F177285E48C9B30C26D75305D550 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m3CF46ABB1532E55C2A784E51DA9487A43DEAB2E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(208)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
	}

IL_00df:
	{
		// uint minimal = (uint)(tm_packet < tm_flush ? tm_packet : tm_flush);
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_37 = V_1;
		G_B22_0 = L_37;
		goto IL_00e7;
	}

IL_00e6:
	{
		int32_t L_38 = V_2;
		G_B22_0 = L_38;
	}

IL_00e7:
	{
		V_3 = G_B22_0;
		// if (minimal >= interval) minimal = interval;
		uint32_t L_39 = V_3;
		uint32_t L_40 = __this->get_interval_39();
		V_13 = (bool)((((int32_t)((!(((uint32_t)L_39) >= ((uint32_t)L_40)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_0101;
		}
	}
	{
		// if (minimal >= interval) minimal = interval;
		uint32_t L_42 = __this->get_interval_39();
		V_3 = L_42;
	}

IL_0101:
	{
		// return current_ + minimal;
		uint32_t L_43 = ___current_0;
		uint32_t L_44 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		goto IL_0108;
	}

IL_0108:
	{
		// }
		uint32_t L_45 = V_5;
		return L_45;
	}
}
// System.Void kcp2k.Kcp::SetMtu(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetMtu_mDB6AAE7A4C13129308C323F1040FC3235C4C6D46 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___mtu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (mtu < 50 || mtu < OVERHEAD)
		uint32_t L_0 = ___mtu0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)50)))))
		{
			goto IL_000d;
		}
	}
	{
		uint32_t L_1 = ___mtu0;
		G_B3_0 = ((!(((uint32_t)L_1) >= ((uint32_t)((int32_t)24))))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("MTU must be higher than 50 and higher than OVERHEAD");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BD7B8352139010CC4E5B8598BCE6534CB131DCB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_SetMtu_mDB6AAE7A4C13129308C323F1040FC3235C4C6D46_RuntimeMethod_var)));
	}

IL_001d:
	{
		// buffer = new byte[(mtu + OVERHEAD) * 3];
		uint32_t L_4 = ___mtu0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)24))), (int32_t)3)));
		__this->set_buffer_57(L_5);
		// this.mtu = mtu;
		uint32_t L_6 = ___mtu0;
		__this->set_mtu_24(L_6);
		// mss = mtu - OVERHEAD;
		uint32_t L_7 = ___mtu0;
		__this->set_mss_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)24))));
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetInterval(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetInterval_m5F97201CB37BA91D12357566AF5C04384467C2A4 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___interval0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (interval > 5000) interval = 5000;
		uint32_t L_0 = ___interval0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)5000))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		___interval0 = ((int32_t)5000);
		goto IL_0023;
	}

IL_0016:
	{
		// else if (interval < 10) interval = 10;
		uint32_t L_2 = ___interval0;
		V_1 = (bool)((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// else if (interval < 10) interval = 10;
		___interval0 = ((int32_t)10);
	}

IL_0023:
	{
		// this.interval = interval;
		uint32_t L_4 = ___interval0;
		__this->set_interval_39(L_4);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetNoDelay(System.UInt32,System.UInt32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetNoDelay_m032171F27E169C6A3B97E75D919AF5C92377C8EC (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___nodelay0, uint32_t ___interval1, int32_t ___resend2, bool ___nocwnd3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// this.nodelay = nodelay;
		uint32_t L_0 = ___nodelay0;
		__this->set_nodelay_42(L_0);
		// if (nodelay != 0)
		uint32_t L_1 = ___nodelay0;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// rx_minrto = RTO_NDL;
		__this->set_rx_minrto_33(((int32_t)30));
		goto IL_0026;
	}

IL_001c:
	{
		// rx_minrto = RTO_MIN;
		__this->set_rx_minrto_33(((int32_t)100));
	}

IL_0026:
	{
		// if (interval >= 0)
		uint32_t L_3 = ___interval1;
		V_1 = (bool)((((int32_t)(false? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		uint32_t L_5 = ___interval1;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)5000))))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		___interval1 = ((int32_t)5000);
		goto IL_0054;
	}

IL_0047:
	{
		// else if (interval < 10) interval = 10;
		uint32_t L_7 = ___interval1;
		V_3 = (bool)((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// else if (interval < 10) interval = 10;
		___interval1 = ((int32_t)10);
	}

IL_0054:
	{
		// this.interval = interval;
		uint32_t L_9 = ___interval1;
		__this->set_interval_39(L_9);
	}

IL_005c:
	{
		// if (resend >= 0)
		int32_t L_10 = ___resend2;
		V_4 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// fastresend = resend;
		int32_t L_12 = ___resend2;
		__this->set_fastresend_49(L_12);
	}

IL_0072:
	{
		// this.nocwnd = nocwnd;
		bool L_13 = ___nocwnd3;
		__this->set_nocwnd_51(L_13);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetWindowSize(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetWindowSize_mAB1107A07BEFDAE8D6E0EDDAA240C01F2CFF0B49 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, uint32_t ___sendWindow0, uint32_t ___receiveWindow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (sendWindow > 0)
		uint32_t L_0 = ___sendWindow0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// snd_wnd = sendWindow;
		uint32_t L_2 = ___sendWindow0;
		__this->set_snd_wnd_34(L_2);
	}

IL_0012:
	{
		// if (receiveWindow > 0)
		uint32_t L_3 = ___receiveWindow1;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// rcv_wnd = Math.Max(receiveWindow, WND_RCV);
		uint32_t L_5 = ___receiveWindow1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Math_Max_m096393525927B8729DFA97FB940339E3E2B1D617(L_5, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_rcv_wnd_35(L_6);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::<Flush>g__MakeSpace|79_0(System.Int32,kcp2k.Kcp/<>c__DisplayClass79_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__MakeSpaceU7C79_0_m8E6B5170E2CB7C0A0C2ADE1B7FA6C840D140C40E (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, int32_t ___space0, U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (offset + space > mtu)
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * L_0 = p1;
		int32_t L_1 = L_0->get_offset_0();
		int32_t L_2 = ___space0;
		uint32_t L_3 = __this->get_mtu_24();
		V_0 = (bool)((((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))))) > ((int64_t)((int64_t)((uint64_t)L_3))))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// output(buffer, offset);
		Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * L_5 = __this->get_output_58();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buffer_57();
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * L_7 = p1;
		int32_t L_8 = L_7->get_offset_0();
		NullCheck(L_5);
		Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75(L_5, L_6, L_8, /*hidden argument*/Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75_RuntimeMethod_var);
		// offset = 0;
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * L_9 = p1;
		L_9->set_offset_0(0);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::<Flush>g__FlushBuffer|79_1(kcp2k.Kcp/<>c__DisplayClass79_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__FlushBufferU7C79_1_m99167B0B8B29A3971187C318A871DE07C1A4F874 (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * __this, U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (offset > 0)
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * L_0 = p0;
		int32_t L_1 = L_0->get_offset_0();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// output(buffer, offset);
		Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * L_3 = __this->get_output_58();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buffer_57();
		U3CU3Ec__DisplayClass79_0_tF68ED6E335E592C8A8A8BC0436C25D0699ABD11F * L_5 = p0;
		int32_t L_6 = L_5->get_offset_0();
		NullCheck(L_3);
		Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75(L_3, L_4, L_6, /*hidden argument*/Action_2_Invoke_mCB5F2172EEA5957AFFAC1BA51CA78974B167EF75_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`1<System.ArraySegment`1<System.Byte>>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient__ctor_mCE7A3B33B9205D601C99D9B6782730BDB9A73862 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnConnected0, Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * ___OnData1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnected2, const RuntimeMethod* method)
{
	{
		// public KcpClient(Action OnConnected, Action<ArraySegment<byte>> OnData, Action OnDisconnected)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.OnConnected = OnConnected;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___OnConnected0;
		__this->set_OnConnected_0(L_0);
		// this.OnData = OnData;
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_1 = ___OnData1;
		__this->set_OnData_1(L_1);
		// this.OnDisconnected = OnDisconnected;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___OnDisconnected2;
		__this->set_OnDisconnected_2(L_2);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Connect_m587DFA485DE9C9472B8B148680B860EC45CA0668 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, String_t* ___address0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__6_0_m9E2EBAF813518AD917EF4ADD79245456D38DA125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__6_1_m61B5C6CC6B10137ED584B88AB3A485ABCCC65C58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__6_2_m174BB4E772F995BD5DB9B1C12569182B7FF868A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (connected)
		bool L_0 = __this->get_connected_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Log.Warning("KCP: client already connected!");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_2);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_2, _stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// return;
		goto IL_0087;
	}

IL_001e:
	{
		// connection = new KcpClientConnection();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_3 = (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 *)il2cpp_codegen_object_new(KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877_il2cpp_TypeInfo_var);
		KcpClientConnection__ctor_mC41067BCA660E2A82B2C6FE88B2AF226B88F5C3D(L_3, /*hidden argument*/NULL);
		__this->set_connection_3(L_3);
		// connection.OnAuthenticated = () =>
		// {
		//     Log.Info($"KCP: OnClientConnected");
		//     connected = true;
		//     OnConnected.Invoke();
		// };
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_4 = __this->get_connection_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)KcpClient_U3CConnectU3Eb__6_0_m9E2EBAF813518AD917EF4ADD79245456D38DA125_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)L_4)->set_OnAuthenticated_4(L_5);
		// connection.OnData = (message) =>
		// {
		//     //Log.Debug($"KCP: OnClientData({BitConverter.ToString(message.Array, message.Offset, message.Count)})");
		//     OnData.Invoke(message);
		// };
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_6 = __this->get_connection_3();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_7 = (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *)il2cpp_codegen_object_new(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE(L_7, __this, (intptr_t)((intptr_t)KcpClient_U3CConnectU3Eb__6_1_m61B5C6CC6B10137ED584B88AB3A485ABCCC65C58_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		NullCheck(L_6);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)L_6)->set_OnData_5(L_7);
		// connection.OnDisconnected = () =>
		// {
		//     Log.Info($"KCP: OnClientDisconnected");
		//     connected = false;
		//     connection = null;
		//     OnDisconnected.Invoke();
		// };
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_8 = __this->get_connection_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_9, __this, (intptr_t)((intptr_t)KcpClient_U3CConnectU3Eb__6_2_m174BB4E772F995BD5DB9B1C12569182B7FF868A7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)L_8)->set_OnDisconnected_6(L_9);
		// connection.Connect(address, port, noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize);
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_10 = __this->get_connection_3();
		String_t* L_11 = ___address0;
		uint16_t L_12 = ___port1;
		bool L_13 = ___noDelay2;
		uint32_t L_14 = ___interval3;
		int32_t L_15 = ___fastResend4;
		bool L_16 = ___congestionWindow5;
		uint32_t L_17 = ___sendWindowSize6;
		uint32_t L_18 = ___receiveWindowSize7;
		NullCheck(L_10);
		KcpClientConnection_Connect_m5AA1CF20A9867AB385D306BF4E92B4D6403DAB0D(L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Send(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Send_mECE43607DC2A6F0AF6196626F9AE9BE9A5759D82 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, uint8_t ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (connected)
		bool L_0 = __this->get_connected_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// connection.SendData(segment, channel);
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_2 = __this->get_connection_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3 = ___segment0;
		uint8_t L_4 = ___channel1;
		NullCheck(L_2);
		KcpConnection_SendData_m24D07F10B63A5AAB0B3F790B68A64CF65315352E(L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001d:
	{
		// else Log.Warning("KCP: can't send because client not connected!");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_5);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_5, _stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Disconnect_m7A06B9CDD37B9872DE276314AA9C4143E14F094E (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B3_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B2_0 = NULL;
	{
		// if (connected)
		bool L_0 = __this->get_connected_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// connection?.Disconnect();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_2 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0018:
	{
		NullCheck(G_B3_0);
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(G_B3_0, /*hidden argument*/NULL);
	}

IL_001e:
	{
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_mF81EA11E791062950332AD2F5ECBDED1B9B688E9 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B2_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B1_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B5_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B4_0 = NULL;
	{
		// connection?.RawReceive();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_0 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		KcpClientConnection_RawReceive_m30A98A1139AB82C2BAA90D3668EA998333659EAF(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// connection?.TickIncoming();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_2 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		KcpConnection_TickIncoming_m1168543349D36BA8D653049B01103ED7F751B3DF(G_B5_0, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_m54C831D926B50A22517C28B0CA4BDF70F2F1AF5B (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B2_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B1_0 = NULL;
	{
		// connection?.TickOutgoing();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_0 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		KcpConnection_TickOutgoing_m769489C1E59DCB54E674E99BF9FEBBE023BBB11A(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Tick_m59AE0FA558652158A2BD4DA081A144E2DA333627 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	{
		// TickIncoming();
		KcpClient_TickIncoming_mF81EA11E791062950332AD2F5ECBDED1B9B688E9(__this, /*hidden argument*/NULL);
		// TickOutgoing();
		KcpClient_TickOutgoing_m54C831D926B50A22517C28B0CA4BDF70F2F1AF5B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Pause_m1BF822F3B9CF643B1A190821B8B08FF365AF8ECC (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B2_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B1_0 = NULL;
	{
		// public void Pause() => connection?.Pause();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_0 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		KcpConnection_Pause_m0F9C043A78EEF608D0B496B86DC8392B4C54E02E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void kcp2k.KcpClient::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Unpause_m03EA9B0B37157314303AD84DE3D9FADD0C2EE296 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B2_0 = NULL;
	KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * G_B1_0 = NULL;
	{
		// public void Unpause() => connection?.Unpause();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_0 = __this->get_connection_3();
		KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		KcpConnection_Unpause_m28E563C4321305F7BCAEE0D60D4437577AA9A565(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__6_0_m9E2EBAF813518AD917EF4ADD79245456D38DA125 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Info($"KCP: OnClientConnected");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_0, _stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// connected = true;
		__this->set_connected_4((bool)1);
		// OnConnected.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnConnected_0();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__6_1(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__6_1_m61B5C6CC6B10137ED584B88AB3A485ABCCC65C58 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnData.Invoke(message);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_0 = __this->get_OnData_1();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E(L_0, L_1, /*hidden argument*/Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__6_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__6_2_m174BB4E772F995BD5DB9B1C12569182B7FF868A7 (KcpClient_tC48B5FB7D5286E031D0B40298A839762875609CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Info($"KCP: OnClientDisconnected");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_0, _stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// connected = false;
		__this->set_connected_4((bool)0);
		// connection = null;
		__this->set_connection_3((KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 *)NULL);
		// OnDisconnected.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnDisconnected_2();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpClientConnection::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Connect_m5AA1CF20A9867AB385D306BF4E92B4D6403DAB0D (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, String_t* ___host0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	bool V_1 = false;
	{
		// Log.Info($"KcpClient: connect to {host}:{port}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		String_t* L_1 = ___host0;
		uint16_t L_2 = ___port1;
		uint16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4, L_1, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_0, L_5, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// IPAddress[] ipAddress = Dns.GetHostAddresses(host);
		String_t* L_6 = ___host0;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_7;
		L_7 = Dns_GetHostAddresses_m8973842AF0FE11D76AC9D4FFE28908F1B974F164(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (ipAddress.Length < 1)
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_8 = V_0;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) < ((int32_t)1))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		// throw new SocketException((int)SocketError.HostNotFound);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_10 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)));
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_10, ((int32_t)11001), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KcpClientConnection_Connect_m5AA1CF20A9867AB385D306BF4E92B4D6403DAB0D_RuntimeMethod_var)));
	}

IL_0039:
	{
		// remoteEndpoint = new IPEndPoint(ipAddress[0], port);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		uint16_t L_14 = ___port1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_15 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_15, L_13, L_14, /*hidden argument*/NULL);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->set_remoteEndpoint_1(L_15);
		// socket = new Socket(remoteEndpoint.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_16 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_remoteEndpoint_1();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_16);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_18 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_18, L_17, 2, ((int32_t)17), /*hidden argument*/NULL);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->set_socket_0(L_18);
		// socket.Connect(remoteEndpoint);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_19 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_20 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_remoteEndpoint_1();
		NullCheck(L_19);
		Socket_Connect_mA047E173F3E1082B396D018585E0B0B2D6E8E5A8(L_19, L_20, /*hidden argument*/NULL);
		// SetupKcp(noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize);
		bool L_21 = ___noDelay2;
		uint32_t L_22 = ___interval3;
		int32_t L_23 = ___fastResend4;
		bool L_24 = ___congestionWindow5;
		uint32_t L_25 = ___sendWindowSize6;
		uint32_t L_26 = ___receiveWindowSize7;
		KcpConnection_SetupKcp_m2E1E9222D461392F1908FB353492FBCCBC4C1FA3(__this, L_21, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		// SendHandshake();
		KcpConnection_SendHandshake_m0B0D7CDD558BFF8EB2CB9C7D47A5B9EC96F02726(__this, /*hidden argument*/NULL);
		// RawReceive();
		KcpClientConnection_RawReceive_m30A98A1139AB82C2BAA90D3668EA998333659EAF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::RawReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawReceive_m30A98A1139AB82C2BAA90D3668EA998333659EAF (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{// begin try (depth: 1)
		{
			// if (socket != null)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
			V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0096;
			}
		}

IL_0012:
		{
			goto IL_0084;
		}

IL_0015:
		{
			// int msgLength = socket.ReceiveFrom(rawReceiveBuffer, ref remoteEndpoint);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_rawReceiveBuffer_20();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** L_4 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_address_of_remoteEndpoint_1();
			NullCheck(L_2);
			int32_t L_5;
			L_5 = Socket_ReceiveFrom_m782E046F6ADDAB2218711650A04550BB917E534C(L_2, L_3, (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA **)L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			// if (msgLength <= rawReceiveBuffer.Length)
			int32_t L_6 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_rawReceiveBuffer_20();
			NullCheck(L_7);
			V_2 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0052;
			}
		}

IL_0040:
		{
			// RawInput(rawReceiveBuffer, msgLength);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_rawReceiveBuffer_20();
			int32_t L_10 = V_1;
			KcpConnection_RawInput_mEB2AEB7C32A9FC2017F5EDBDD789A76860686B1C(__this, L_9, L_10, /*hidden argument*/NULL);
			goto IL_0083;
		}

IL_0052:
		{
			// Log.Error($"KCP ClientConnection: message of size {msgLength} does not fit into buffer of size {rawReceiveBuffer.Length}. The excess was silently dropped. Disconnecting.");
			IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_11 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Error_2();
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_rawReceiveBuffer_20();
			NullCheck(L_15);
			int32_t L_16 = ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
			RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
			String_t* L_18;
			L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6, L_14, L_17, /*hidden argument*/NULL);
			NullCheck(L_11);
			Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_11, L_18, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
			// Disconnect();
			KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		}

IL_0083:
		{
		}

IL_0084:
		{
			// while (socket.Poll(0, SelectMode.SelectRead))
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_19 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
			NullCheck(L_19);
			bool L_20;
			L_20 = Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C(L_19, 0, 0, /*hidden argument*/NULL);
			V_3 = L_20;
			bool L_21 = V_3;
			if (L_21)
			{
				goto IL_0015;
			}
		}

IL_0095:
		{
		}

IL_0096:
		{
			goto IL_009e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0099;
		}
		throw e;
	}

CATCH_0099:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009e;
	}// end catch (depth: 1)

IL_009e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Dispose_m9415173ED32E0FE130CB38D6022AB7A9B6C6F4D0 (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, const RuntimeMethod* method)
{
	{
		// socket.Close();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
		NullCheck(L_0);
		Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_0, /*hidden argument*/NULL);
		// socket = null;
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->set_socket_0((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::RawSend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawSend_m631B35B8563B8237C26DF4D22EB3B1BCD6F9872B (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		// socket.Send(data, length, SocketFlags.None);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Socket_Send_m592EB818087DF2148B638330373601E67A7882AC(L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection__ctor_mC41067BCA660E2A82B2C6FE88B2AF226B88F5C3D (KcpClientConnection_tE0A5FE24D77C2B5DDCB0584B965CE2A6F3449877 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly byte[] rawReceiveBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->set_rawReceiveBuffer_20(L_0);
		KcpConnection__ctor_m8081E2BFE4C85011056E2B5147D439841A2F797C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 kcp2k.KcpConnection::get_SendQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendQueueCount_m24F398387A8B1579866B2A5E6B14064E259E8CCD (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendQueueCount => kcp.snd_queue.Count;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_1 = L_0->get_snd_queue_52();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_1, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveQueueCount_mE7088852AC83C44DFA8381335B704A15ED65C058 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ReceiveQueueCount => kcp.rcv_queue.Count;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_1 = L_0->get_rcv_queue_53();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_1, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_SendBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendBufferCount_m9D780C0933778E0BBE063C1FFB41DE5051C5A27D (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendBufferCount => kcp.snd_buf.Count;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_1 = L_0->get_snd_buf_54();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_1, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_ReceiveBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveBufferCount_m1B0C9A15F679EAA6622061522EC27D8817D3DFC9 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ReceiveBufferCount => kcp.rcv_buf.Count;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_1 = L_0->get_rcv_buf_55();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_1, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		return L_2;
	}
}
// System.UInt32 kcp2k.KcpConnection::get_MaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxSendRate_m79F01DE756C7EBDC1A7CC9F191489F73B4416E22 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// kcp.snd_wnd * kcp.mtu * 1000 / kcp.interval;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_snd_wnd_34();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_2 = __this->get_kcp_2();
		NullCheck(L_2);
		uint32_t L_3 = L_2->get_mtu_24();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_4 = __this->get_kcp_2();
		NullCheck(L_4);
		uint32_t L_5 = L_4->get_interval_39();
		return ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)), (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_5));
	}
}
// System.UInt32 kcp2k.KcpConnection::get_MaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxReceiveRate_mD05C8C9E6006EDF3E5AC02B3AF3F088DEA90284F (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// kcp.rcv_wnd * kcp.mtu * 1000 / kcp.interval;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_rcv_wnd_35();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_2 = __this->get_kcp_2();
		NullCheck(L_2);
		uint32_t L_3 = L_2->get_mtu_24();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_4 = __this->get_kcp_2();
		NullCheck(L_4);
		uint32_t L_5 = L_4->get_interval_39();
		return ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)), (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_5));
	}
}
// System.Void kcp2k.KcpConnection::SetupKcp(System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SetupKcp_m2E1E9222D461392F1908FB353492FBCCBC4C1FA3 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, bool ___noDelay0, uint32_t ___interval1, int32_t ___fastResend2, bool ___congestionWindow3, uint32_t ___sendWindowSize4, uint32_t ___receiveWindowSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m74472204BD978439E12CDDB5013971A61F80DD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpConnection_RawSendReliable_m3A1CBC8E09B899B77335F2B6EC7C648014FE4081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B2_0 = NULL;
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * G_B3_1 = NULL;
	{
		// kcp = new Kcp(0, RawSendReliable);
		Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA * L_0 = (Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA *)il2cpp_codegen_object_new(Action_2_t7558DD5A53857258C4A6828B43402DF8F6834ABA_il2cpp_TypeInfo_var);
		Action_2__ctor_m74472204BD978439E12CDDB5013971A61F80DD9E(L_0, __this, (intptr_t)((intptr_t)KcpConnection_RawSendReliable_m3A1CBC8E09B899B77335F2B6EC7C648014FE4081_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m74472204BD978439E12CDDB5013971A61F80DD9E_RuntimeMethod_var);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_1 = (Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F *)il2cpp_codegen_object_new(Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F_il2cpp_TypeInfo_var);
		Kcp__ctor_m70FDB08F89B2C655BD31401E43C1FC48A3A6FEAA(L_1, 0, L_0, /*hidden argument*/NULL);
		__this->set_kcp_2(L_1);
		// kcp.SetNoDelay(noDelay ? 1u : 0u, interval, fastResend, !congestionWindow);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_2 = __this->get_kcp_2();
		bool L_3 = ___noDelay0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		uint32_t L_4 = ___interval1;
		int32_t L_5 = ___fastResend2;
		bool L_6 = ___congestionWindow3;
		NullCheck(G_B3_1);
		Kcp_SetNoDelay_m032171F27E169C6A3B97E75D919AF5C92377C8EC(G_B3_1, G_B3_0, L_4, L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// kcp.SetWindowSize(sendWindowSize, receiveWindowSize);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_7 = __this->get_kcp_2();
		uint32_t L_8 = ___sendWindowSize4;
		uint32_t L_9 = ___receiveWindowSize5;
		NullCheck(L_7);
		Kcp_SetWindowSize_mAB1107A07BEFDAE8D6E0EDDAA240C01F2CFF0B49(L_7, L_8, L_9, /*hidden argument*/NULL);
		// kcp.SetMtu(Kcp.MTU_DEF - CHANNEL_HEADER_SIZE);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_10 = __this->get_kcp_2();
		NullCheck(L_10);
		Kcp_SetMtu_mDB6AAE7A4C13129308C323F1040FC3235C4C6D46(L_10, ((int32_t)1199), /*hidden argument*/NULL);
		// state = KcpState.Connected;
		__this->set_state_3(0);
		// refTime.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_11 = __this->get_refTime_10();
		NullCheck(L_11);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleTimeout_m74ADD2BD44CAE3AE9AD85674500D706168EC619A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (time >= lastReceiveTime + TIMEOUT)
		uint32_t L_0 = ___time0;
		uint32_t L_1 = __this->get_lastReceiveTime_9();
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)10000))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// Log.Warning($"KCP: Connection timed out after not receiving any message for {TIMEOUT}ms. Disconnecting.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_4 = ((int32_t)10000);
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_3, L_6, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleDeadLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleDeadLink_mF58E8A9AE22B9D29B73D2523366126C5B6DB7E2D (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB210B8A116A5787E3662521D6B6DFE2F1DD189F0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (kcp.state == -1)
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_state_22();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// Log.Warning("KCP Connection dead_link detected. Disconnecting.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_3);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_3, _stringLiteralB210B8A116A5787E3662521D6B6DFE2F1DD189F0, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandlePing(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandlePing_m36B1DDCB4FE49397196CF9CEE5E17771BFEF812C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (time >= lastPingTime + PING_INTERVAL)
		uint32_t L_0 = ___time0;
		uint32_t L_1 = __this->get_lastPingTime_18();
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)1000))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// SendPing();
		KcpConnection_SendPing_mF3CD4D31D5E8383A9F61C805C47474888846AD59(__this, /*hidden argument*/NULL);
		// lastPingTime = time;
		uint32_t L_3 = ___time0;
		__this->set_lastPingTime_18(L_3);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleChoked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleChoked_mCABC04153FDA9617FEDA2A52606E5F3692A96606 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m66722EC86D7B03D756E656B08A0054CFA8EFE0CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5F077A941F994D78A4385F69EAB7871746026);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28821C7AF84EF04E0EFAEB17018BD731506CD2C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int total = kcp.rcv_queue.Count + kcp.snd_queue.Count +
		//             kcp.rcv_buf.Count + kcp.snd_buf.Count;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_1 = L_0->get_rcv_queue_53();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_1, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_3 = __this->get_kcp_2();
		NullCheck(L_3);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_4 = L_3->get_snd_queue_52();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_4, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_6 = __this->get_kcp_2();
		NullCheck(L_6);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_7 = L_6->get_rcv_buf_55();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_7, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_9 = __this->get_kcp_2();
		NullCheck(L_9);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_10 = L_9->get_snd_buf_54();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_10, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5)), (int32_t)L_8)), (int32_t)L_11));
		// if (total >= QueueDisconnectThreshold)
		int32_t L_12 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)((int32_t)10000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0111;
		}
	}
	{
		// Log.Warning($"KCP: disconnecting connection because it can't process data fast enough.\n" +
		//                  $"Queue total {total}>{QueueDisconnectThreshold}. rcv_queue={kcp.rcv_queue.Count} snd_queue={kcp.snd_queue.Count} rcv_buf={kcp.rcv_buf.Count} snd_buf={kcp.snd_buf.Count}\n" +
		//                  $"* Try to Enable NoDelay, decrease INTERVAL, disable Congestion Window (= enable NOCWND!), increase SEND/RECV WINDOW or compress data.\n" +
		//                  $"* Or perhaps the network is simply too slow on our end, or on the other end.\n");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		int32_t L_21 = ((int32_t)10000);
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_20;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_24 = __this->get_kcp_2();
		NullCheck(L_24);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_25 = L_24->get_rcv_queue_53();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_25, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_28);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_23;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_30 = __this->get_kcp_2();
		NullCheck(L_30);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_31 = L_30->get_snd_queue_52();
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_inline(L_31, /*hidden argument*/Queue_1_get_Count_m8D4CE015528C017B197DBF5DC9F52DDB5BF3B5FC_RuntimeMethod_var);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_34);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_29;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_36 = __this->get_kcp_2();
		NullCheck(L_36);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_37 = L_36->get_rcv_buf_55();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_37, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_40);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = L_35;
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_42 = __this->get_kcp_2();
		NullCheck(L_42);
		List_1_tF81DE2A837611EA0789DA9406563F11CD088612B * L_43 = L_42->get_snd_buf_54();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_inline(L_43, /*hidden argument*/List_1_get_Count_mAF4C1C55CC8C4233543E74ECC3F81314B997EDB6_RuntimeMethod_var);
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_46);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_46);
		String_t* L_47;
		L_47 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17, L_41, /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral25F5F077A941F994D78A4385F69EAB7871746026, L_47, _stringLiteral28821C7AF84EF04E0EFAEB17018BD731506CD2C8, /*hidden argument*/NULL);
		NullCheck(L_14);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_14, L_48, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// kcp.snd_queue.Clear();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_49 = __this->get_kcp_2();
		NullCheck(L_49);
		Queue_1_t343671E76428372919D5EB07B4670B58D55E2318 * L_50 = L_49->get_snd_queue_52();
		NullCheck(L_50);
		Queue_1_Clear_m66722EC86D7B03D756E656B08A0054CFA8EFE0CB(L_50, /*hidden argument*/Queue_1_Clear_m66722EC86D7B03D756E656B08A0054CFA8EFE0CB_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpConnection::ReceiveNextReliable(kcp2k.KcpHeader&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpConnection_ReceiveNextReliable_m6269630DCB3D7AC8B6C1CBB636F397143F0F136A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint8_t* ___header0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875E17CF2214503840E0994FA0066730D00689B9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// int msgSize = kcp.PeekSize();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_0 = __this->get_kcp_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Kcp_PeekSize_m89D4AEC809F235DE2F6159ADAF20B68F7FF85D32(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (msgSize > 0)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00dc;
		}
	}
	{
		// if (msgSize <= kcpMessageBuffer.Length)
		int32_t L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_kcpMessageBuffer_14();
		NullCheck(L_5);
		V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00aa;
		}
	}
	{
		// int received = kcp.Receive(kcpMessageBuffer, msgSize);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_7 = __this->get_kcp_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_kcpMessageBuffer_14();
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Kcp_Receive_mB7AB17C2C4560B119837EA0A86210292DD2FCC6D(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (received >= 0)
		int32_t L_11 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// header = (KcpHeader)kcpMessageBuffer[0];
		uint8_t* L_13 = ___header0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_kcpMessageBuffer_14();
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((int8_t*)L_13) = (int8_t)L_16;
		// message = new ArraySegment<byte>(kcpMessageBuffer, 1, msgSize - 1);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_17 = ___message1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_kcpMessageBuffer_14();
		int32_t L_19 = V_0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1((&L_20), L_18, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		*(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_17)->____array_0), (void*)NULL);
		// lastReceiveTime = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_21 = __this->get_refTime_10();
		NullCheck(L_21);
		int64_t L_22;
		L_22 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_21, /*hidden argument*/NULL);
		__this->set_lastReceiveTime_9(((int32_t)((uint32_t)L_22)));
		// return true;
		V_5 = (bool)1;
		goto IL_00e4;
	}

IL_0083:
	{
		// Log.Warning($"Receive failed with error={received}. closing connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_23 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_23, L_27, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		goto IL_00db;
	}

IL_00aa:
	{
		// Log.Warning($"KCP: possible allocation attack for msgSize {msgSize} > buffer {kcpMessageBuffer.Length}. Disconnecting the connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_28 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_kcpMessageBuffer_14();
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)));
		RuntimeObject * L_34 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral875E17CF2214503840E0994FA0066730D00689B9, L_31, L_34, /*hidden argument*/NULL);
		NullCheck(L_28);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_28, L_35, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_00db:
	{
	}

IL_00dc:
	{
		// header = KcpHeader.Disconnect;
		uint8_t* L_36 = ___header0;
		*((int8_t*)L_36) = (int8_t)4;
		// return false;
		V_5 = (bool)0;
		goto IL_00e4;
	}

IL_00e4:
	{
		// }
		bool L_37 = V_5;
		return L_37;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming_Connected(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Connected_mE4F8EA557301DDC7F400C1C223DE9583FD1FD8B4 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC51440CB23A4947B45C075B06B37B770088A776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	{
		// HandleTimeout(time);
		uint32_t L_0 = ___time0;
		KcpConnection_HandleTimeout_m74ADD2BD44CAE3AE9AD85674500D706168EC619A(__this, L_0, /*hidden argument*/NULL);
		// HandleDeadLink();
		KcpConnection_HandleDeadLink_mF58E8A9AE22B9D29B73D2523366126C5B6DB7E2D(__this, /*hidden argument*/NULL);
		// HandlePing(time);
		uint32_t L_1 = ___time0;
		KcpConnection_HandlePing_m36B1DDCB4FE49397196CF9CEE5E17771BFEF812C(__this, L_1, /*hidden argument*/NULL);
		// HandleChoked();
		KcpConnection_HandleChoked_mCABC04153FDA9617FEDA2A52606E5F3692A96606(__this, /*hidden argument*/NULL);
		// if (ReceiveNextReliable(out KcpHeader header, out ArraySegment<byte> message))
		bool L_2;
		L_2 = KcpConnection_ReceiveNextReliable_m6269630DCB3D7AC8B6C1CBB636F397143F0F136A(__this, (uint8_t*)(&V_0), (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00a3;
		}
	}
	{
		// switch (header)
		uint8_t L_4 = V_0;
		V_4 = L_4;
		uint8_t L_5 = V_4;
		V_3 = L_5;
		uint8_t L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_007d;
			}
			case 3:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_00a2;
	}

IL_004e:
	{
		// Log.Info("KCP: received handshake");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_7);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_7, _stringLiteralCC51440CB23A4947B45C075B06B37B770088A776, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// state = KcpState.Authenticated;
		__this->set_state_3(1);
		// OnAuthenticated?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = __this->get_OnAuthenticated_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0072;
		}
	}
	{
		goto IL_0078;
	}

IL_0072:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B5_0, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// break;
		goto IL_00a2;
	}

IL_007a:
	{
		// break;
		goto IL_00a2;
	}

IL_007d:
	{
		// Log.Warning($"KCP: received invalid header {header} while Connected. Disconnecting the connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		uint8_t L_11 = V_0;
		uint8_t L_12 = L_11;
		RuntimeObject * L_13 = Box(KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_10, L_14, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		// break;
		goto IL_00a2;
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming_Authenticated(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Authenticated_mC862A397697A847EDC9236785F9191C3791669F4 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint32_t ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral135852F066CF53CBD8A19C82825F132F058D351E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B11_0 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B10_0 = NULL;
	{
		// HandleTimeout(time);
		uint32_t L_0 = ___time0;
		KcpConnection_HandleTimeout_m74ADD2BD44CAE3AE9AD85674500D706168EC619A(__this, L_0, /*hidden argument*/NULL);
		// HandleDeadLink();
		KcpConnection_HandleDeadLink_mF58E8A9AE22B9D29B73D2523366126C5B6DB7E2D(__this, /*hidden argument*/NULL);
		// HandlePing(time);
		uint32_t L_1 = ___time0;
		KcpConnection_HandlePing_m36B1DDCB4FE49397196CF9CEE5E17771BFEF812C(__this, L_1, /*hidden argument*/NULL);
		// HandleChoked();
		KcpConnection_HandleChoked_mCABC04153FDA9617FEDA2A52606E5F3692A96606(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// while (!paused &&
		//        ReceiveNextReliable(out KcpHeader header, out ArraySegment<byte> message))
		bool L_2 = __this->get_paused_7();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		bool L_3;
		L_3 = KcpConnection_ReceiveNextReliable_m6269630DCB3D7AC8B6C1CBB636F397143F0F136A(__this, (uint8_t*)(&V_0), (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B4_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00ea;
		}
	}
	{
		// switch (header)
		uint8_t L_5 = V_0;
		V_4 = L_5;
		uint8_t L_6 = V_4;
		V_3 = L_6;
		uint8_t L_7 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_00c7;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_00ca;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_005f:
	{
		// Log.Warning($"KCP: received invalid header {header} while Authenticated. Disconnecting the connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		uint8_t L_9 = V_0;
		uint8_t L_10 = L_9;
		RuntimeObject * L_11 = Box(KcpHeader_t7F76341148CC532C76E1BAB4F00CA73C50AB3FC4_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral135852F066CF53CBD8A19C82825F132F058D351E, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_8, L_12, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		// break;
		goto IL_00e4;
	}

IL_0084:
	{
		// if (message.Count > 0)
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		// OnData?.Invoke(message);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_15 = __this->get_OnData_5();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_16 = L_15;
		G_B10_0 = L_16;
		if (L_16)
		{
			G_B11_0 = L_16;
			goto IL_00a2;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a2:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_17 = V_1;
		NullCheck(G_B11_0);
		Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E(G_B11_0, L_17, /*hidden argument*/Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
	}

IL_00a9:
	{
		goto IL_00c5;
	}

IL_00ac:
	{
		// Log.Warning("KCP: received empty Data message while Authenticated. Disconnecting the connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_18 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_18);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_18, _stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// break;
		goto IL_00e4;
	}

IL_00c7:
	{
		// break;
		goto IL_00e4;
	}

IL_00ca:
	{
		// Log.Info("KCP: received disconnect message");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_19 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_19);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_19, _stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		// break;
		goto IL_00e4;
	}

IL_00e4:
	{
		goto IL_001f;
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_m1168543349D36BA8D653049B01103ED7F751B3DF (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_3 = NULL;
	ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// uint time = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_refTime_10();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((uint32_t)L_1));
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_2 = __this->get_state_3();
			V_2 = L_2;
			int32_t L_3 = V_2;
			V_1 = L_3;
			int32_t L_4 = V_1;
			switch (L_4)
			{
				case 0:
				{
					goto IL_002c;
				}
				case 1:
				{
					goto IL_0037;
				}
				case 2:
				{
					goto IL_0042;
				}
			}
		}

IL_002a:
		{
			goto IL_0045;
		}

IL_002c:
		{
			// TickIncoming_Connected(time);
			uint32_t L_5 = V_0;
			KcpConnection_TickIncoming_Connected_mE4F8EA557301DDC7F400C1C223DE9583FD1FD8B4(__this, L_5, /*hidden argument*/NULL);
			// break;
			goto IL_0045;
		}

IL_0037:
		{
			// TickIncoming_Authenticated(time);
			uint32_t L_6 = V_0;
			KcpConnection_TickIncoming_Authenticated_mC862A397697A847EDC9236785F9191C3791669F4(__this, L_6, /*hidden argument*/NULL);
			// break;
			goto IL_0045;
		}

IL_0042:
		{
			// break;
			goto IL_0045;
		}

IL_0045:
		{
			goto IL_00ad;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008e;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_3 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
		// Log.Info($"KCP Connection: Disconnecting because {exception}. This is fine.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Info_0();
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_8 = V_3;
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_7, L_9, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	}// end catch (depth: 1)

CATCH_006a:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException exception)
		V_4 = ((ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)IL2CPP_GET_ACTIVE_EXCEPTION(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *));
		// Log.Info($"KCP Connection: Disconnecting because {exception}. This is fine.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Info_0();
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_11 = V_4;
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_10, L_12, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	}// end catch (depth: 1)

CATCH_008e:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Log.Error(ex.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_13 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Error_2();
		Exception_t * L_14 = V_5;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_13, L_15, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	}// end catch (depth: 1)

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickOutgoing_m769489C1E59DCB54E674E99BF9FEBBE023BBB11A (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_3 = NULL;
	ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// uint time = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_refTime_10();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((uint32_t)L_1));
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_2 = __this->get_state_3();
			V_2 = L_2;
			int32_t L_3 = V_2;
			V_1 = L_3;
			int32_t L_4 = V_1;
			if ((!(((uint32_t)L_4) > ((uint32_t)1))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			goto IL_001e;
		}

IL_001e:
		{
			int32_t L_5 = V_1;
			if ((((int32_t)L_5) == ((int32_t)2)))
			{
				goto IL_0034;
			}
		}

IL_0022:
		{
			goto IL_0037;
		}

IL_0024:
		{
			// kcp.Update(time);
			Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_6 = __this->get_kcp_2();
			uint32_t L_7 = V_0;
			NullCheck(L_6);
			Kcp_Update_m4FB232073ED815EE09C486D1426086DA8D042EAB(L_6, L_7, /*hidden argument*/NULL);
			// break;
			goto IL_0037;
		}

IL_0034:
		{
			// break;
			goto IL_0037;
		}

IL_0037:
		{
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_3 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
		// Log.Info($"KCP Connection: Disconnecting because {exception}. This is fine.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Info_0();
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_9 = V_3;
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_8, L_10, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	}// end catch (depth: 1)

CATCH_005c:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException exception)
		V_4 = ((ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)IL2CPP_GET_ACTIVE_EXCEPTION(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *));
		// Log.Info($"KCP Connection: Disconnecting because {exception}. This is fine.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_11 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Info_0();
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_12 = V_4;
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_11, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	}// end catch (depth: 1)

CATCH_0080:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Log.Error(ex.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var)));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))))->get_Error_2();
		Exception_t * L_15 = V_5;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_14, L_16, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var)));
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	}// end catch (depth: 1)

IL_009f:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::RawInput(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawInput_mEB2AEB7C32A9FC2017F5EDBDD789A76860686B1C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___msgLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B12_0 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B11_0 = NULL;
	{
		// if (msgLength > 0)
		int32_t L_0 = ___msgLength1;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0115;
		}
	}
	{
		// byte channel = buffer[0];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// switch (channel)
		uint8_t L_5 = V_1;
		V_3 = L_5;
		uint8_t L_6 = V_3;
		V_2 = L_6;
		uint8_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_001b;
	}

IL_001b:
	{
		uint8_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ef;
	}

IL_0024:
	{
		// int input = kcp.Input(buffer, 1, msgLength - 1);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_9 = __this->get_kcp_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buffer0;
		int32_t L_11 = ___msgLength1;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = Kcp_Input_mA9471F901A98DB2195D35C1828E97880CFA80CAD(L_9, L_10, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_12;
		// if (input != 0)
		int32_t L_13 = V_4;
		V_5 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// Log.Warning($"Input failed with error={input} for buffer with length={msgLength - 1}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_15 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = ___msgLength1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F, L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_15, L_22, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0068:
	{
		// break;
		goto IL_0114;
	}

IL_006d:
	{
		// if (state == KcpState.Authenticated)
		int32_t L_23 = __this->get_state_3();
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00c4;
		}
	}
	{
		// if (!paused)
		bool L_25 = __this->get_paused_7();
		V_7 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00af;
		}
	}
	{
		// ArraySegment<byte> message = new ArraySegment<byte>(buffer, 1, msgLength - 1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = ___buffer0;
		int32_t L_28 = ___msgLength1;
		ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_8), L_27, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		// OnData?.Invoke(message);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_29 = __this->get_OnData_5();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_30 = L_29;
		G_B11_0 = L_30;
		if (L_30)
		{
			G_B12_0 = L_30;
			goto IL_00a6;
		}
	}
	{
		goto IL_00ae;
	}

IL_00a6:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_31 = V_8;
		NullCheck(G_B12_0);
		Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E(G_B12_0, L_31, /*hidden argument*/Action_1_Invoke_mCD0ED96E6C858EE6B3A20605567FFC0F77E0065E_RuntimeMethod_var);
	}

IL_00ae:
	{
	}

IL_00af:
	{
		// lastReceiveTime = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_32 = __this->get_refTime_10();
		NullCheck(L_32);
		int64_t L_33;
		L_33 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_32, /*hidden argument*/NULL);
		__this->set_lastReceiveTime_9(((int32_t)((uint32_t)L_33)));
		goto IL_00ed;
	}

IL_00c4:
	{
		// Log.Warning($"KCP: received unreliable message in state {state}. Disconnecting the connection.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_34 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_35 = __this->get_state_3();
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(KcpState_t2ECAC779E8D62D779C237C2C5B903C70A41E416D_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3, L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_34, L_38, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// break;
		goto IL_0114;
	}

IL_00ef:
	{
		// Log.Info($"Disconnecting connection because of invalid channel header: {channel}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_39 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		uint8_t L_40 = V_1;
		uint8_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153, L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_39, L_43, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		// break;
		goto IL_0114;
	}

IL_0114:
	{
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::RawSendReliable(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawSendReliable_m3A1CBC8E09B899B77335F2B6EC7C648014FE4081 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		// rawSendBuffer[0] = (byte)KcpChannel.Reliable;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_rawSendBuffer_16();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		// Buffer.BlockCopy(data, 0, rawSendBuffer, 1, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_rawSendBuffer_16();
		int32_t L_3 = ___length1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_1, 0, (RuntimeArray *)(RuntimeArray *)L_2, 1, L_3, /*hidden argument*/NULL);
		// RawSend(rawSendBuffer, length + 1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_rawSendBuffer_16();
		int32_t L_5 = ___length1;
		VirtualActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* System.Void kcp2k.KcpConnection::RawSend(System.Byte[],System.Int32) */, __this, L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendReliable(kcp2k.KcpHeader,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, uint8_t ___header0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (1 + content.Count <= kcpSendBuffer.Length) // TODO
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_kcpSendBuffer_15();
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_0))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a8;
		}
	}
	{
		// kcpSendBuffer[0] = (byte)header;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_kcpSendBuffer_15();
		uint8_t L_4 = ___header0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		// if (content.Count > 0)
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// Buffer.BlockCopy(content.Array, content.Offset, kcpSendBuffer, 1, content.Count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_kcpSendBuffer_15();
		int32_t L_10;
		L_10 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 1, L_10, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// int sent = kcp.Send(kcpSendBuffer, 0, 1 + content.Count);
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_11 = __this->get_kcp_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_kcpSendBuffer_15();
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Kcp_Send_mB033062378ED70EB9E8A252C4E9A69EB0456FDCC(L_11, L_12, 0, ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_13)), /*hidden argument*/NULL);
		V_1 = L_14;
		// if (sent < 0)
		int32_t L_15 = V_1;
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// Log.Warning($"Send failed with error={sent} for content with length={content.Count}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_17 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21;
		L_21 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166, L_20, L_23, /*hidden argument*/NULL);
		NullCheck(L_17);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_17, L_24, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_00a5:
	{
		goto IL_00d3;
	}

IL_00a8:
	{
		// else Log.Error($"Failed to send reliable message of size {content.Count} because it's larger than ReliableMaxMessageSize={ReliableMaxMessageSize}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_25 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Error_2();
		int32_t L_26;
		L_26 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___content1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		int32_t L_29 = ((int32_t)149224);
		RuntimeObject * L_30 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459, L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_25, L_31, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendUnreliable(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendUnreliable_m46A3579B678CD493797D297DE45432A08836C1C6 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (message.Count <= UnreliableMaxMessageSize)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)1199)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// rawSendBuffer[0] = (byte)KcpChannel.Unreliable;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_rawSendBuffer_16();
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)2);
		// Buffer.BlockCopy(message.Array, 0, rawSendBuffer, 1, message.Count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_rawSendBuffer_16();
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 1, L_5, /*hidden argument*/NULL);
		// RawSend(rawSendBuffer, message.Count + 1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_rawSendBuffer_16();
		int32_t L_7;
		L_7 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		VirtualActionInvoker2< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* System.Void kcp2k.KcpConnection::RawSend(System.Byte[],System.Int32) */, __this, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		goto IL_0080;
	}

IL_0055:
	{
		// else Log.Error($"Failed to send unreliable message of size {message.Count} because it's larger than UnreliableMaxMessageSize={UnreliableMaxMessageSize}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Error_2();
		int32_t L_9;
		L_9 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___message0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12 = ((int32_t)1199);
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_8, L_14, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendHandshake_m0B0D7CDD558BFF8EB2CB9C7D47A5B9EC96F02726 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Log.Info("KcpConnection: sending Handshake to other end!");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_0, _stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// SendReliable(KcpHeader.Handshake, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = V_0;
		KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50(__this, 1, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendData_m24D07F10B63A5AAB0B3F790B68A64CF65315352E (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data0, uint8_t ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	{
		// if (data.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// Log.Warning("KcpConnection: tried sending empty message. This should never happen. Disconnecting.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_2);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_2, _stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(__this, /*hidden argument*/NULL);
		// return;
		goto IL_004e;
	}

IL_0029:
	{
		// switch (channel)
		uint8_t L_3 = ___channel1;
		V_2 = L_3;
		uint8_t L_4 = V_2;
		V_1 = L_4;
		uint8_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0033;
	}

IL_0033:
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_004e;
	}

IL_0039:
	{
		// SendReliable(KcpHeader.Data, data);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7 = ___data0;
		KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50(__this, 3, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_004e;
	}

IL_0044:
	{
		// SendUnreliable(data);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_8 = ___data0;
		KcpConnection_SendUnreliable_m46A3579B678CD493797D297DE45432A08836C1C6(__this, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendPing_mF3CD4D31D5E8383A9F61C805C47474888846AD59 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// void SendPing() => SendReliable(KcpHeader.Ping, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = V_0;
		KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendDisconnect_m7B45AE325FD5FD0199D6333FC9DB8582FA292159 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// void SendDisconnect() => SendReliable(KcpHeader.Disconnect, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = V_0;
		KcpConnection_SendReliable_m701192615335992BDC66600D06BF08FC0DABFA50(__this, 4, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpConnection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Dispose_m12E899CB5B797134FC1AD9CBB681E00C4839B730 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void Dispose() {}
		return;
	}
}
// System.Void kcp2k.KcpConnection::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B10_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	{
		// if (state == KcpState.Disconnected)
		int32_t L_0 = __this->get_state_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_006b;
	}

IL_0010:
	{
		// if (socket.Connected)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_socket_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
	}

IL_0020:
	try
	{// begin try (depth: 1)
		// SendDisconnect();
		KcpConnection_SendDisconnect_m7B45AE325FD5FD0199D6333FC9DB8582FA292159(__this, /*hidden argument*/NULL);
		// kcp.Flush();
		Kcp_t55FFCEFDCF5D6B12A5F1BF926EA0A530F8FB092F * L_5 = __this->get_kcp_2();
		NullCheck(L_5);
		Kcp_Flush_m17D4470AB4D93CF4CB563E6A8F97B4B007F9D8F6(L_5, /*hidden argument*/NULL);
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

CATCH_003c:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

IL_0041:
	{
	}

IL_0042:
	{
		// Log.Info("KCP Connection: Disconnected.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		NullCheck(L_6);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_6, _stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// state = KcpState.Disconnected;
		__this->set_state_3(2);
		// OnDisconnected?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_OnDisconnected_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = L_7;
		G_B9_0 = L_8;
		if (L_8)
		{
			G_B10_0 = L_8;
			goto IL_0065;
		}
	}
	{
		goto IL_006b;
	}

IL_0065:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B10_0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Net.EndPoint kcp2k.KcpConnection::GetRemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * KcpConnection_GetRemoteEndPoint_m43EE2B7D6C176A08CCDF2AC80D528FAE6DC2EC1E (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// public EndPoint GetRemoteEndPoint() => remoteEndpoint;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_remoteEndpoint_1();
		return L_0;
	}
}
// System.Void kcp2k.KcpConnection::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Pause_m0F9C043A78EEF608D0B496B86DC8392B4C54E02E (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// public void Pause() => paused = true;
		__this->set_paused_7((bool)1);
		return;
	}
}
// System.Void kcp2k.KcpConnection::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Unpause_m28E563C4321305F7BCAEE0D60D4437577AA9A565 (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// paused = false;
		__this->set_paused_7((bool)0);
		// lastReceiveTime = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_refTime_10();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_0, /*hidden argument*/NULL);
		__this->set_lastReceiveTime_9(((int32_t)((uint32_t)L_1)));
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection__ctor_m8081E2BFE4C85011056E2B5147D439841A2F797C (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpState state = KcpState.Disconnected;
		__this->set_state_3(2);
		// readonly Stopwatch refTime = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		__this->set_refTime_10(L_0);
		// byte[] kcpMessageBuffer = new byte[1 + ReliableMaxMessageSize];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)149225));
		__this->set_kcpMessageBuffer_14(L_1);
		// byte[] kcpSendBuffer = new byte[1 + ReliableMaxMessageSize];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)149225));
		__this->set_kcpSendBuffer_15(L_2);
		// byte[] rawSendBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->set_rawSendBuffer_16(L_3);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>,System.Action`1<System.Int32>,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer__ctor_m8F693076C7A29CE7E95FFEA7B17D1DEBF99A9114 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnConnected0, Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * ___OnData1, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnDisconnected2, bool ___NoDelay3, uint32_t ___Interval4, int32_t ___FastResend5, bool ___CongestionWindow6, uint32_t ___SendWindowSize7, uint32_t ___ReceiveWindowSize8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAE36D09E0647093D3418071CEC1D569B08200900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EndPoint newClientEP = new IPEndPoint(IPAddress.IPv6Any, 0);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_IPv6Any_7();
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_1 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_1, L_0, 0, /*hidden argument*/NULL);
		__this->set_newClientEP_10(L_1);
		// readonly byte[] rawReceiveBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->set_rawReceiveBuffer_11(L_2);
		// public Dictionary<int, KcpServerConnection> connections = new Dictionary<int, KcpServerConnection>();
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_3 = (Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 *)il2cpp_codegen_object_new(Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAE36D09E0647093D3418071CEC1D569B08200900(L_3, /*hidden argument*/Dictionary_2__ctor_mAE36D09E0647093D3418071CEC1D569B08200900_RuntimeMethod_var);
		__this->set_connections_12(L_3);
		// HashSet<int> connectionsToRemove = new HashSet<int>();
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_4 = (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *)il2cpp_codegen_object_new(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77(L_4, /*hidden argument*/HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var);
		__this->set_connectionsToRemove_13(L_4);
		// public KcpServer(Action<int> OnConnected,
		//                  Action<int, ArraySegment<byte>> OnData,
		//                  Action<int> OnDisconnected,
		//                  bool NoDelay,
		//                  uint Interval,
		//                  int FastResend = 0,
		//                  bool CongestionWindow = true,
		//                  uint SendWindowSize = Kcp.WND_SND,
		//                  uint ReceiveWindowSize = Kcp.WND_RCV)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.OnConnected = OnConnected;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = ___OnConnected0;
		__this->set_OnConnected_0(L_5);
		// this.OnData = OnData;
		Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * L_6 = ___OnData1;
		__this->set_OnData_1(L_6);
		// this.OnDisconnected = OnDisconnected;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = ___OnDisconnected2;
		__this->set_OnDisconnected_2(L_7);
		// this.NoDelay = NoDelay;
		bool L_8 = ___NoDelay3;
		__this->set_NoDelay_3(L_8);
		// this.Interval = Interval;
		uint32_t L_9 = ___Interval4;
		__this->set_Interval_4(L_9);
		// this.FastResend = FastResend;
		int32_t L_10 = ___FastResend5;
		__this->set_FastResend_5(L_10);
		// this.CongestionWindow = CongestionWindow;
		bool L_11 = ___CongestionWindow6;
		__this->set_CongestionWindow_6(L_11);
		// this.SendWindowSize = SendWindowSize;
		uint32_t L_12 = ___SendWindowSize7;
		__this->set_SendWindowSize_7(L_12);
		// this.ReceiveWindowSize = ReceiveWindowSize;
		uint32_t L_13 = ___ReceiveWindowSize8;
		__this->set_ReceiveWindowSize_8(L_13);
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpServer::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpServer_IsActive_mBDF25B81D5E2081FDFCD69F17A306AECF7D1C69E (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsActive() => socket != null;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_socket_9();
		return (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void kcp2k.KcpServer::Start(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Start_m9C0B559F3B5E9687E9E2366F2194EB57DA5F9D00 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, uint16_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (socket != null)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_socket_9();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Log.Warning("KCP: server already started!");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Warning_1();
		NullCheck(L_2);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_2, _stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0020:
	{
		// socket = new Socket(AddressFamily.InterNetworkV6, SocketType.Dgram, ProtocolType.Udp);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_3, ((int32_t)23), 2, ((int32_t)17), /*hidden argument*/NULL);
		__this->set_socket_9(L_3);
		// socket.DualMode = true;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_socket_9();
		NullCheck(L_4);
		Socket_set_DualMode_mAFC0E6235283469EF1DB58C56262202A9009CFFD(L_4, (bool)1, /*hidden argument*/NULL);
		// socket.Bind(new IPEndPoint(IPAddress.IPv6Any, port));
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = __this->get_socket_9();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_IPv6Any_7();
		uint16_t L_7 = ___port0;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_8 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Send(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Send_m68F3D6E42F94470F1332C41DDF9737EA9EEBFD55 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, int32_t ___connectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment1, uint8_t ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_0 = NULL;
	bool V_1 = false;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518(L_0, L_1, (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// connection.SendData(segment, channel);
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_5 = ___segment1;
		uint8_t L_6 = ___channel2;
		NullCheck(L_4);
		KcpConnection_SendData_m24D07F10B63A5AAB0B3F790B68A64CF65315352E(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_m41349C01206C779BEE9A117A266965534DECFED0 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_0 = NULL;
	bool V_1 = false;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518(L_0, L_1, (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// connection.Disconnect();
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_0;
		NullCheck(L_4);
		KcpConnection_Disconnect_m3B2D4B7924A3F893E63DB8024A9AC678F1AF290C(L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.String kcp2k.KcpServer::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpServer_GetClientAddress_m73C62E244E4D9DE34993DDC5C47920E2F2478905 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518(L_0, L_1, (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// return (connection.GetRemoteEndPoint() as IPEndPoint).Address.ToString();
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_0;
		NullCheck(L_4);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_5;
		L_5 = KcpConnection_GetRemoteEndPoint_m43EE2B7D6C176A08CCDF2AC80D528FAE6DC2EC1E_inline(L_4, /*hidden argument*/NULL);
		NullCheck(((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)IsInstClass((RuntimeObject*)L_5, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)));
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6;
		L_6 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)IsInstClass((RuntimeObject*)L_5, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_2 = L_7;
		goto IL_0034;
	}

IL_002c:
	{
		// return "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void kcp2k.KcpServer::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickIncoming_m20F7729AEC617241C0DFFE6D0A7D84595C3BEC4E (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mB03A727A06EB080B931F91F7687794C7AD5DC341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_1_U3CTickIncomingU3Eb__0_m4E39A998237FBEF9658200EAF320C0B0CAD21BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  V_6;
	memset((&V_6), 0, sizeof(V_6));
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_7 = NULL;
	Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B14_0 = 0;
	{
		goto IL_0168;
	}

IL_0006:
	{
	}

IL_0007:
	try
	{// begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_0 = (U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass20_0__ctor_m77DBB865D8B267D9030D79F62A2EB8F7967F85B7(L_0, /*hidden argument*/NULL);
			V_0 = L_0;
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_1 = V_0;
			NullCheck(L_1);
			L_1->set_U3CU3E4__this_1(__this);
			// int msgLength = socket.ReceiveFrom(rawReceiveBuffer, 0, rawReceiveBuffer.Length, SocketFlags.None, ref newClientEP);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_socket_9();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_rawReceiveBuffer_11();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_rawReceiveBuffer_11();
			NullCheck(L_4);
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** L_5 = __this->get_address_of_newClientEP_10();
			NullCheck(L_2);
			int32_t L_6;
			L_6 = Socket_ReceiveFrom_mB129CBAABDBEFED42431F891B1F62D99E8CED928(L_2, L_3, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), 0, (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA **)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			// int connectionId = newClientEP.GetHashCode();
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_7 = V_0;
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_8 = __this->get_newClientEP_10();
			NullCheck(L_8);
			int32_t L_9;
			L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
			NullCheck(L_7);
			L_7->set_connectionId_0(L_9);
			// if (msgLength <= rawReceiveBuffer.Length)
			int32_t L_10 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_rawReceiveBuffer_11();
			NullCheck(L_11);
			V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_011d;
			}
		}

IL_005d:
		{
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_13 = (U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass20_1__ctor_m9C94BFB0C9F5447ED9EFDC8523EABC700542E03B(L_13, /*hidden argument*/NULL);
			V_3 = L_13;
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_14 = V_3;
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_15 = V_0;
			NullCheck(L_14);
			L_14->set_CSU24U3CU3E8__locals1_1(L_15);
			// if (!connections.TryGetValue(connectionId, out KcpServerConnection connection))
			Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_16 = __this->get_connections_12();
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_17 = V_3;
			NullCheck(L_17);
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_18 = L_17->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_18);
			int32_t L_19 = L_18->get_connectionId_0();
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_20 = V_3;
			NullCheck(L_20);
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 ** L_21 = L_20->get_address_of_connection_0();
			NullCheck(L_16);
			bool L_22;
			L_22 = Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518(L_16, L_19, (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 **)L_21, /*hidden argument*/Dictionary_2_TryGetValue_m14DEEC51D6E00791DFDBB153136610272EFC0518_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_4;
			if (!L_23)
			{
				goto IL_0105;
			}
		}

IL_0090:
		{
			// connection = new KcpServerConnection(socket, newClientEP, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize);
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_24 = V_3;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_25 = __this->get_socket_9();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_26 = __this->get_newClientEP_10();
			bool L_27 = __this->get_NoDelay_3();
			uint32_t L_28 = __this->get_Interval_4();
			int32_t L_29 = __this->get_FastResend_5();
			bool L_30 = __this->get_CongestionWindow_6();
			uint32_t L_31 = __this->get_SendWindowSize_7();
			uint32_t L_32 = __this->get_ReceiveWindowSize_8();
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_33 = (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 *)il2cpp_codegen_object_new(KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5_il2cpp_TypeInfo_var);
			KcpServerConnection__ctor_mA93846D377BC8A9D50891584FCF8EA4E3B7B4FA0(L_33, L_25, L_26, L_27, L_28, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
			NullCheck(L_24);
			L_24->set_connection_0(L_33);
			// connection.OnAuthenticated = () =>
			// {
			//     // only send handshake to client AFTER we received his
			//     // handshake in OnAuthenticated.
			//     // we don't want to reply to random internet messages
			//     // with handshakes each time.
			//     connection.SendHandshake();
			// 
			//     // add to connections dict after being authenticated.
			//     connections.Add(connectionId, connection);
			//     Log.Info($"KCP: server added connection({connectionId}): {newClientEP}");
			// 
			//     // setup Data + Disconnected events only AFTER the
			//     // handshake. we don't want to fire OnServerDisconnected
			//     // every time we receive invalid random data from the
			//     // internet.
			// 
			//     // setup data event
			//     connection.OnData = (message) =>
			//     {
			//         // call mirror event
			//         //Log.Info($"KCP: OnServerDataReceived({connectionId}, {BitConverter.ToString(message.Array, message.Offset, message.Count)})");
			//         OnData.Invoke(connectionId, message);
			//     };
			// 
			//     // setup disconnected event
			//     connection.OnDisconnected = () =>
			//     {
			//         // flag for removal
			//         // (can't remove directly because connection is updated
			//         //  and event is called while iterating all connections)
			//         connectionsToRemove.Add(connectionId);
			// 
			//         // call mirror event
			//         Log.Info($"KCP: OnServerDisconnected({connectionId})");
			//         OnDisconnected.Invoke(connectionId);
			//     };
			// 
			//     // finally, call mirror OnConnected event
			//     Log.Info($"KCP: OnServerConnected({connectionId})");
			//     OnConnected.Invoke(connectionId);
			// };
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_34 = V_3;
			NullCheck(L_34);
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_35 = L_34->get_connection_0();
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_36 = V_3;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_37 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_37, L_36, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_1_U3CTickIncomingU3Eb__0_m4E39A998237FBEF9658200EAF320C0B0CAD21BB7_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_35);
			((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)L_35)->set_OnAuthenticated_4(L_37);
			// connection.RawInput(rawReceiveBuffer, msgLength);
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_38 = V_3;
			NullCheck(L_38);
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_39 = L_38->get_connection_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = __this->get_rawReceiveBuffer_11();
			int32_t L_41 = V_1;
			NullCheck(L_39);
			KcpConnection_RawInput_mEB2AEB7C32A9FC2017F5EDBDD789A76860686B1C(L_39, L_40, L_41, /*hidden argument*/NULL);
			// connection.TickIncoming();
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_42 = V_3;
			NullCheck(L_42);
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_43 = L_42->get_connection_0();
			NullCheck(L_43);
			KcpConnection_TickIncoming_m1168543349D36BA8D653049B01103ED7F751B3DF(L_43, /*hidden argument*/NULL);
			goto IL_011a;
		}

IL_0105:
		{
			// connection.RawInput(rawReceiveBuffer, msgLength);
			U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * L_44 = V_3;
			NullCheck(L_44);
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_45 = L_44->get_connection_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_rawReceiveBuffer_11();
			int32_t L_47 = V_1;
			NullCheck(L_45);
			KcpConnection_RawInput_mEB2AEB7C32A9FC2017F5EDBDD789A76860686B1C(L_45, L_46, L_47, /*hidden argument*/NULL);
		}

IL_011a:
		{
			goto IL_015f;
		}

IL_011d:
		{
			// Log.Error($"KCP Server: message of size {msgLength} does not fit into buffer of size {rawReceiveBuffer.Length}. The excess was silently dropped. Disconnecting connectionId={connectionId}.");
			IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_48 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Error_2();
			int32_t L_49 = V_1;
			int32_t L_50 = L_49;
			RuntimeObject * L_51 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_50);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = __this->get_rawReceiveBuffer_11();
			NullCheck(L_52);
			int32_t L_53 = ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)));
			RuntimeObject * L_54 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_53);
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_55 = V_0;
			NullCheck(L_55);
			int32_t L_56 = L_55->get_connectionId_0();
			int32_t L_57 = L_56;
			RuntimeObject * L_58 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_57);
			String_t* L_59;
			L_59 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4, L_51, L_54, L_58, /*hidden argument*/NULL);
			NullCheck(L_48);
			Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_48, L_59, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
			// Disconnect(connectionId);
			U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_60 = V_0;
			NullCheck(L_60);
			int32_t L_61 = L_60->get_connectionId_0();
			KcpServer_Disconnect_m41349C01206C779BEE9A117A266965534DECFED0(__this, L_61, /*hidden argument*/NULL);
		}

IL_015f:
		{
			goto IL_0167;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0162;
		}
		throw e;
	}

CATCH_0162:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException) {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0167;
	}// end catch (depth: 1)

IL_0167:
	{
	}

IL_0168:
	{
		// while (socket != null && socket.Poll(0, SelectMode.SelectRead))
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_62 = __this->get_socket_9();
		if (!L_62)
		{
			goto IL_017f;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_63 = __this->get_socket_9();
		NullCheck(L_63);
		bool L_64;
		L_64 = Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C(L_63, 0, 0, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_64));
		goto IL_0180;
	}

IL_017f:
	{
		G_B14_0 = 0;
	}

IL_0180:
	{
		V_5 = (bool)G_B14_0;
		bool L_65 = V_5;
		if (L_65)
		{
			goto IL_0006;
		}
	}
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_66 = __this->get_connections_12();
		NullCheck(L_66);
		ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * L_67;
		L_67 = Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695(L_66, /*hidden argument*/Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		NullCheck(L_67);
		Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  L_68;
		L_68 = ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F(L_67, /*hidden argument*/ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		V_6 = L_68;
	}

IL_019c:
	try
	{// begin try (depth: 1)
		{
			goto IL_01b1;
		}

IL_019e:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_69;
			L_69 = Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_inline((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
			V_7 = L_69;
			// connection.TickIncoming();
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_70 = V_7;
			NullCheck(L_70);
			KcpConnection_TickIncoming_m1168543349D36BA8D653049B01103ED7F751B3DF(L_70, /*hidden argument*/NULL);
		}

IL_01b1:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			bool L_71;
			L_71 = Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
			if (L_71)
			{
				goto IL_019e;
			}
		}

IL_01ba:
		{
			IL2CPP_LEAVE(0x1CB, FINALLY_01bc);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01bc;
	}

FINALLY_01bc:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_6), /*hidden argument*/Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(444)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(444)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CB, IL_01cb)
	}

IL_01cb:
	{
		// foreach (int connectionId in connectionsToRemove)
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_72 = __this->get_connectionsToRemove_13();
		NullCheck(L_72);
		Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844  L_73;
		L_73 = HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4(L_72, /*hidden argument*/HashSet_1_GetEnumerator_m73822F88E3574F44452AE408E91A3F3EA6FB55D4_RuntimeMethod_var);
		V_8 = L_73;
	}

IL_01d9:
	try
	{// begin try (depth: 1)
		{
			goto IL_01f4;
		}

IL_01db:
		{
			// foreach (int connectionId in connectionsToRemove)
			int32_t L_74;
			L_74 = Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_inline((Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *)(&V_8), /*hidden argument*/Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_RuntimeMethod_var);
			V_9 = L_74;
			// connections.Remove(connectionId);
			Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_75 = __this->get_connections_12();
			int32_t L_76 = V_9;
			NullCheck(L_75);
			bool L_77;
			L_77 = Dictionary_2_Remove_mB03A727A06EB080B931F91F7687794C7AD5DC341(L_75, L_76, /*hidden argument*/Dictionary_2_Remove_mB03A727A06EB080B931F91F7687794C7AD5DC341_RuntimeMethod_var);
		}

IL_01f4:
		{
			// foreach (int connectionId in connectionsToRemove)
			bool L_78;
			L_78 = Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404((Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m93D1C61EE8D6E991B692413D36046DCF5AE0C404_RuntimeMethod_var);
			if (L_78)
			{
				goto IL_01db;
			}
		}

IL_01fd:
		{
			IL2CPP_LEAVE(0x20E, FINALLY_01ff);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ff;
	}

FINALLY_01ff:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17((Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m86028022BCE0C92C1E9C8FD152409BB4C6AF9B17_RuntimeMethod_var);
		IL2CPP_END_FINALLY(511)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(511)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20E, IL_020e)
	}

IL_020e:
	{
		// connectionsToRemove.Clear();
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_79 = __this->get_connectionsToRemove_13();
		NullCheck(L_79);
		HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4(L_79, /*hidden argument*/HashSet_1_Clear_mD296E7574294C9B883B9C6BB1450A2C5D7E11EA4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickOutgoing_mFA26D57EDD952954BE68E2AD5CEBCC496D2CE2A1 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		NullCheck(L_0);
		ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * L_1;
		L_1 = Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695(L_0, /*hidden argument*/Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  L_2;
		L_2 = ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0015:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_3;
			L_3 = Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_inline((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
			V_1 = L_3;
			// connection.TickOutgoing();
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_1;
			NullCheck(L_4);
			KcpConnection_TickOutgoing_m769489C1E59DCB54E674E99BF9FEBBE023BBB11A(L_4, /*hidden argument*/NULL);
		}

IL_0026:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			bool L_5;
			L_5 = Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0015;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0031);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Tick_m8A24A07B244E6CEB22F29D89858FEDC9481E4DBA (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	{
		// TickIncoming();
		KcpServer_TickIncoming_m20F7729AEC617241C0DFFE6D0A7D84595C3BEC4E(__this, /*hidden argument*/NULL);
		// TickOutgoing();
		KcpServer_TickOutgoing_mFA26D57EDD952954BE68E2AD5CEBCC496D2CE2A1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Stop_m774920050663D923F2CD0EDA95446CCAC7A48903 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * G_B2_0 = NULL;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * G_B1_0 = NULL;
	{
		// socket?.Close();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_socket_9();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// socket = null;
		__this->set_socket_9((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Pause_m6D929B363003E972D6C0525A20E5138963998899 (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		NullCheck(L_0);
		ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * L_1;
		L_1 = Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695(L_0, /*hidden argument*/Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  L_2;
		L_2 = ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0015:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_3;
			L_3 = Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_inline((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
			V_1 = L_3;
			// connection.Pause();
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_1;
			NullCheck(L_4);
			KcpConnection_Pause_m0F9C043A78EEF608D0B496B86DC8392B4C54E02E(L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			bool L_5;
			L_5 = Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0015;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_002f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Unpause_m7BDDB266940D2D80A21777DB3BC0958251FCC8DA (KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_0 = __this->get_connections_12();
		NullCheck(L_0);
		ValueCollection_tF6519F99EEE492FD96F57246A154A941CB48EA6A * L_1;
		L_1 = Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695(L_0, /*hidden argument*/Dictionary_2_get_Values_m9D0FC4029CB77D0801192D152FB639C7AF783695_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5  L_2;
		L_2 = ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m2767E842E65A98595104A2524AC317469AED904F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0015:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_3;
			L_3 = Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_inline((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4AF39217885976DF84FD886CB7F61131EE8AD375_RuntimeMethod_var);
			V_1 = L_3;
			// connection.Unpause();
			KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_4 = V_1;
			NullCheck(L_4);
			KcpConnection_Unpause_m28E563C4321305F7BCAEE0D60D4437577AA9A565(L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (KcpServerConnection connection in connections.Values)
			bool L_5;
			L_5 = Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAAB044CEF94D153B0BBF23919D2DEAC831B34701_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0015;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_002f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45((Enumerator_t911C6C2AA5488D3327A39F85A7BBC758CB1317F5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD698A67AA6AFCA906EDD795C255D8778447BFD45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpServerConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection__ctor_mA93846D377BC8A9D50891584FCF8EA4E3B7B4FA0 (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndpoint1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, const RuntimeMethod* method)
{
	{
		// public KcpServerConnection(Socket socket, EndPoint remoteEndpoint, bool noDelay, uint interval = Kcp.INTERVAL, int fastResend = 0, bool congestionWindow = true, uint sendWindowSize = Kcp.WND_SND, uint receiveWindowSize = Kcp.WND_RCV)
		KcpConnection__ctor_m8081E2BFE4C85011056E2B5147D439841A2F797C(__this, /*hidden argument*/NULL);
		// this.socket = socket;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___socket0;
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->set_socket_0(L_0);
		// this.remoteEndpoint = remoteEndpoint;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_1 = ___remoteEndpoint1;
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->set_remoteEndpoint_1(L_1);
		// SetupKcp(noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize);
		bool L_2 = ___noDelay2;
		uint32_t L_3 = ___interval3;
		int32_t L_4 = ___fastResend4;
		bool L_5 = ___congestionWindow5;
		uint32_t L_6 = ___sendWindowSize6;
		uint32_t L_7 = ___receiveWindowSize7;
		KcpConnection_SetupKcp_m2E1E9222D461392F1908FB353492FBCCBC4C1FA3(__this, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServerConnection::RawSend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection_RawSend_mCA3ABED256D0C726182A18E360D81B55BF62F7FB (KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		// socket.SendTo(data, 0, length, SocketFlags.None, remoteEndpoint);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_socket_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		int32_t L_2 = ___length1;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_3 = ((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)__this)->get_remoteEndpoint_1();
		NullCheck(L_0);
		int32_t L_4;
		L_4 = Socket_SendTo_mA760EDC1FC1F6525A3ABF526A7951274D9DE83EF(L_0, L_1, 0, L_2, 0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.Log::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m99DEF47187C491E619F3A98B0F885B155589ADBC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<string> Info = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_0, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->set_Info_0(L_0);
		// public static Action<string> Warning = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->set_Warning_1(L_1);
		// public static Action<string> Error = Console.Error.WriteLine;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline(/*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = L_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_4, L_3, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_3, 18)), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->set_Error_2(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// kcp2k.Segment kcp2k.Segment::Take()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * Segment_Take_mA4221F2958E30468C63EB2C0799CF62B8C8BC534 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mAD555018E20E227D751821EDC95E95E340396E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m5B0FD2C9244517726750355314A49A8EDC695F2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_1 = NULL;
	Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * V_2 = NULL;
	{
		// if (Pool.Count > 0)
		IL2CPP_RUNTIME_CLASS_INIT(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * L_0 = ((Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields*)il2cpp_codegen_static_fields_for(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var))->get_Pool_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m5B0FD2C9244517726750355314A49A8EDC695F2E_inline(L_0, /*hidden argument*/Stack_1_get_Count_m5B0FD2C9244517726750355314A49A8EDC695F2E_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Segment seg = Pool.Pop();
		IL2CPP_RUNTIME_CLASS_INIT(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * L_3 = ((Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields*)il2cpp_codegen_static_fields_for(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var))->get_Pool_12();
		NullCheck(L_3);
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_4;
		L_4 = Stack_1_Pop_mAD555018E20E227D751821EDC95E95E340396E09(L_3, /*hidden argument*/Stack_1_Pop_mAD555018E20E227D751821EDC95E95E340396E09_RuntimeMethod_var);
		V_1 = L_4;
		// return seg;
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_5 = V_1;
		V_2 = L_5;
		goto IL_002a;
	}

IL_0022:
	{
		// return new Segment();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_6 = (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 *)il2cpp_codegen_object_new(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Segment__ctor_mCBD1CC28A33F5557D4D1BA480C6D73C9DB88FC21(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_7 = V_2;
		return L_7;
	}
}
// System.Void kcp2k.Segment::Return(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Return_m9602E873C29E7DA9E42793A01527506229B9C8B4 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * ___seg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mEE34699FB409F8DE850B3E7230B940376DAB6570_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seg.Reset();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_0 = ___seg0;
		NullCheck(L_0);
		Segment_Reset_m2CC2BC1DD7E10D3C7FBE5E331825A02E4E51F064(L_0, /*hidden argument*/NULL);
		// Pool.Push(seg);
		IL2CPP_RUNTIME_CLASS_INIT(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * L_1 = ((Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields*)il2cpp_codegen_static_fields_for(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var))->get_Pool_12();
		Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * L_2 = ___seg0;
		NullCheck(L_1);
		Stack_1_Push_mEE34699FB409F8DE850B3E7230B940376DAB6570(L_1, L_2, /*hidden argument*/Stack_1_Push_mEE34699FB409F8DE850B3E7230B940376DAB6570_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 kcp2k.Segment::Encode(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_Encode_m0B37B43B3CE35252B8708D342A1AF69520538820 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr0, int32_t ___offset1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int offset_ = offset;
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		// offset += Utils.Encode32U(ptr, offset, conv);
		int32_t L_1 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___ptr0;
		int32_t L_3 = ___offset1;
		uint32_t L_4 = __this->get_conv_0();
		int32_t L_5;
		L_5 = Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F(L_2, L_3, L_4, /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5));
		// offset += Utils.Encode8u(ptr, offset, (byte)cmd);
		int32_t L_6 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___ptr0;
		int32_t L_8 = ___offset1;
		uint32_t L_9 = __this->get_cmd_1();
		int32_t L_10;
		L_10 = Utils_Encode8u_m53EB9499B3D86FA797F4893B7E8BC6BE368C3947(L_7, L_8, (uint8_t)((int32_t)((uint8_t)L_9)), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_10));
		// offset += Utils.Encode8u(ptr, offset, (byte)frg);
		int32_t L_11 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___ptr0;
		int32_t L_13 = ___offset1;
		uint32_t L_14 = __this->get_frg_2();
		int32_t L_15;
		L_15 = Utils_Encode8u_m53EB9499B3D86FA797F4893B7E8BC6BE368C3947(L_12, L_13, (uint8_t)((int32_t)((uint8_t)L_14)), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15));
		// offset += Utils.Encode16U(ptr, offset, (ushort)wnd);
		int32_t L_16 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___ptr0;
		int32_t L_18 = ___offset1;
		uint32_t L_19 = __this->get_wnd_3();
		int32_t L_20;
		L_20 = Utils_Encode16U_m31E78506468026A63F3B23AE9E704BF75DEE13E1(L_17, L_18, (uint16_t)((int32_t)((uint16_t)L_19)), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_20));
		// offset += Utils.Encode32U(ptr, offset, ts);
		int32_t L_21 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___ptr0;
		int32_t L_23 = ___offset1;
		uint32_t L_24 = __this->get_ts_4();
		int32_t L_25;
		L_25 = Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F(L_22, L_23, L_24, /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_25));
		// offset += Utils.Encode32U(ptr, offset, sn);
		int32_t L_26 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = ___ptr0;
		int32_t L_28 = ___offset1;
		uint32_t L_29 = __this->get_sn_5();
		int32_t L_30;
		L_30 = Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F(L_27, L_28, L_29, /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_30));
		// offset += Utils.Encode32U(ptr, offset, una);
		int32_t L_31 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___ptr0;
		int32_t L_33 = ___offset1;
		uint32_t L_34 = __this->get_una_6();
		int32_t L_35;
		L_35 = Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F(L_32, L_33, L_34, /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_35));
		// offset += Utils.Encode32U(ptr, offset, (uint)data.Position);
		int32_t L_36 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = ___ptr0;
		int32_t L_38 = ___offset1;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_39 = __this->get_data_11();
		NullCheck(L_39);
		int64_t L_40;
		L_40 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_39);
		int32_t L_41;
		L_41 = Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F(L_37, L_38, ((int32_t)((uint32_t)L_40)), /*hidden argument*/NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_41));
		// return offset - offset_;
		int32_t L_42 = ___offset1;
		int32_t L_43 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
		goto IL_009a;
	}

IL_009a:
	{
		// }
		int32_t L_44 = V_1;
		return L_44;
	}
}
// System.Void kcp2k.Segment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Reset_m2CC2BC1DD7E10D3C7FBE5E331825A02E4E51F064 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, const RuntimeMethod* method)
{
	{
		// conv = 0;
		__this->set_conv_0(0);
		// cmd = 0;
		__this->set_cmd_1(0);
		// frg = 0;
		__this->set_frg_2(0);
		// wnd = 0;
		__this->set_wnd_3(0);
		// ts = 0;
		__this->set_ts_4(0);
		// sn = 0;
		__this->set_sn_5(0);
		// una = 0;
		__this->set_una_6(0);
		// rto = 0;
		__this->set_rto_8(0);
		// xmit = 0;
		__this->set_xmit_10(0);
		// resendts = 0;
		__this->set_resendts_7(0);
		// fastack = 0;
		__this->set_fastack_9(0);
		// data.SetLength(0);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = __this->get_data_11();
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(23 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, ((int64_t)((int64_t)0)));
		// }
		return;
	}
}
// System.Void kcp2k.Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mCBD1CC28A33F5557D4D1BA480C6D73C9DB88FC21 (Segment_tACB68E9F98BAFBA054171073036C69BAF3688322 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MemoryStream data = new MemoryStream();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		__this->set_data_11(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.Segment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__cctor_m8773DB50B5A87C180ADDED5C288A2217CC3122EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m0F93D084F04A62E27341785540845E5819165A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly Stack<Segment> Pool = new Stack<Segment>(32);
		Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B * L_0 = (Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B *)il2cpp_codegen_object_new(Stack_1_t7B8F67889E8A591E672BAD00B478D3D642BD001B_il2cpp_TypeInfo_var);
		Stack_1__ctor_m0F93D084F04A62E27341785540845E5819165A2B(L_0, ((int32_t)32), /*hidden argument*/Stack_1__ctor_m0F93D084F04A62E27341785540845E5819165A2B_RuntimeMethod_var);
		((Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_StaticFields*)il2cpp_codegen_static_fields_for(Segment_tACB68E9F98BAFBA054171073036C69BAF3688322_il2cpp_TypeInfo_var))->set_Pool_12(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 kcp2k.Utils::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Clamp_m7BFD0C83FDB7D2577B203264F958E62B3B9B5EF2 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value < min) return min;
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// if (value < min) return min;
		int32_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		// if (value > max) return max;
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		// if (value > max) return max;
		int32_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		// return value;
		int32_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 kcp2k.Utils::Encode8u(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode8u_m53EB9499B3D86FA797F4893B7E8BC6BE368C3947 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint8_t ___c2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = c;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint8_t L_2 = ___c2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		// return 1;
		V_0 = 1;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 kcp2k.Utils::Decode8u(System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode8u_mB486148B241E3B12D3986E53C56705BA2BBB94CC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint8_t* ___c2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// c = p[0 + offset];
		uint8_t* L_0 = ___c2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		// return 1;
		V_0 = 1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 kcp2k.Utils::Encode16U(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode16U_m31E78506468026A63F3B23AE9E704BF75DEE13E1 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint16_t ___w2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = (byte)(w >> 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint16_t L_2 = ___w2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		// p[1 + offset] = (byte)(w >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___p0;
		int32_t L_4 = ___offset1;
		uint16_t L_5 = ___w2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_4))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		// return 2;
		V_0 = 2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 kcp2k.Utils::Decode16U(System.Byte[],System.Int32,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode16U_mC8E36D79D8F4E4816F616DCA416943EADDAB5B36 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint16_t* ___c2, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ushort result = 0;
		V_0 = (uint16_t)0;
		// result |= p[0 + offset];
		uint16_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_0|(int32_t)L_4))));
		// result |= (ushort)(p[1 + offset] << 8);
		uint16_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_7));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_9<<(int32_t)8))))))));
		// c = result;
		uint16_t* L_10 = ___c2;
		uint16_t L_11 = V_0;
		*((int16_t*)L_10) = (int16_t)L_11;
		// return 2;
		V_1 = 2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 kcp2k.Utils::Encode32U(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode32U_m04EA87AB325E7182CF895CA9D437C08AA651B00F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint32_t ___l2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = (byte)(l >> 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint32_t L_2 = ___l2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		// p[1 + offset] = (byte)(l >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___p0;
		int32_t L_4 = ___offset1;
		uint32_t L_5 = ___l2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_4))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>8)))));
		// p[2 + offset] = (byte)(l >> 16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		uint32_t L_8 = ___l2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_7))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16))))));
		// p[3 + offset] = (byte)(l >> 24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___p0;
		int32_t L_10 = ___offset1;
		uint32_t L_11 = ___l2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_10))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24))))));
		// return 4;
		V_0 = 4;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 kcp2k.Utils::Decode32U(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode32U_m99D26FCFCA96E96E53F1A168BC58B4C97D97B6A7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___offset1, uint32_t* ___c2, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// uint result = 0;
		V_0 = 0;
		// result |= p[0 + offset];
		uint32_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)L_4));
		// result |= (uint)(p[1 + offset] << 8);
		uint32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_7));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))));
		// result |= (uint)(p[2 + offset] << 16);
		uint32_t L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___p0;
		int32_t L_12 = ___offset1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_12));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)L_10|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)16)))));
		// result |= (uint)(p[3 + offset] << 24);
		uint32_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___p0;
		int32_t L_17 = ___offset1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_17));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_15|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)24)))));
		// c = result;
		uint32_t* L_20 = ___c2;
		uint32_t L_21 = V_0;
		*((int32_t*)L_20) = (int32_t)L_21;
		// return 4;
		V_1 = 4;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_22 = V_1;
		return L_22;
	}
}
// System.Int32 kcp2k.Utils::TimeDiff(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90 (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return (int)(later - earlier);
		uint32_t L_0 = ___later0;
		uint32_t L_1 = ___earlier1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m77DBB865D8B267D9030D79F62A2EB8F7967F85B7 (U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<TickIncoming>b__1(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__1_m5E8A263A81CA3E251F16BF6348CF2DB7FF08518B (U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnData.Invoke(connectionId, message);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_2_t114340853CF5612872D25F64A7CA982AC91BCFF9 * L_1 = L_0->get_OnData_1();
		int32_t L_2 = __this->get_connectionId_0();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3 = ___message0;
		NullCheck(L_1);
		Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A(L_1, L_2, L_3, /*hidden argument*/Action_2_Invoke_m2C7BD951A92FD2F5764B42821BB85927B184283A_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<TickIncoming>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__2_m3C35AFC4CAC5D234C52999F94AF80EA8506731B9 (U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connectionsToRemove.Add(connectionId);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_1 = L_0->get_connectionsToRemove_13();
		int32_t L_2 = __this->get_connectionId_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1(L_1, L_2, /*hidden argument*/HashSet_1_Add_m6E656443F896943F211B625F1CF920105F4C4EE1_RuntimeMethod_var);
		// Log.Info($"KCP: OnServerDisconnected({connectionId})");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		int32_t L_5 = __this->get_connectionId_0();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_4, L_8, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// OnDisconnected.Invoke(connectionId);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_9 = __this->get_U3CU3E4__this_1();
		NullCheck(L_9);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = L_9->get_OnDisconnected_2();
		int32_t L_11 = __this->get_connectionId_0();
		NullCheck(L_10);
		Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD(L_10, L_11, /*hidden argument*/Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_m9C94BFB0C9F5447ED9EFDC8523EABC700542E03B (U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass20_1::<TickIncoming>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1_U3CTickIncomingU3Eb__0_m4E39A998237FBEF9658200EAF320C0B0CAD21BB7 (U3CU3Ec__DisplayClass20_1_t79019842490740AA8A3A63C4160529867F933E10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDB3229A3C36FF01101775EC27C4598FF3FB98E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__1_m5E8A263A81CA3E251F16BF6348CF2DB7FF08518B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__2_m3C35AFC4CAC5D234C52999F94AF80EA8506731B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC68359E266085F6EBC53739CE985C5E2AA797);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B2_0 = NULL;
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * G_B2_1 = NULL;
	Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * G_B1_0 = NULL;
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * G_B1_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * G_B4_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * G_B3_1 = NULL;
	{
		// connection.SendHandshake();
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_0 = __this->get_connection_0();
		NullCheck(L_0);
		KcpConnection_SendHandshake_m0B0D7CDD558BFF8EB2CB9C7D47A5B9EC96F02726(L_0, /*hidden argument*/NULL);
		// connections.Add(connectionId, connection);
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_2 = L_1->get_U3CU3E4__this_1();
		NullCheck(L_2);
		Dictionary_2_tF4C2C88E311266FDF3B0EF67E88EFC5FED497891 * L_3 = L_2->get_connections_12();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_connectionId_0();
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_6 = __this->get_connection_0();
		NullCheck(L_3);
		Dictionary_2_Add_mDB3229A3C36FF01101775EC27C4598FF3FB98E02(L_3, L_5, L_6, /*hidden argument*/Dictionary_2_Add_mDB3229A3C36FF01101775EC27C4598FF3FB98E02_RuntimeMethod_var);
		// Log.Info($"KCP: server added connection({connectionId}): {newClientEP}");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_8 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_connectionId_0();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_12 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_12);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_13 = L_12->get_U3CU3E4__this_1();
		NullCheck(L_13);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_14 = L_13->get_newClientEP_10();
		String_t* L_15;
		L_15 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral32BC68359E266085F6EBC53739CE985C5E2AA797, L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_7, L_15, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// connection.OnData = (message) =>
		// {
		//     // call mirror event
		//     //Log.Info($"KCP: OnServerDataReceived({connectionId}, {BitConverter.ToString(message.Array, message.Offset, message.Count)})");
		//     OnData.Invoke(connectionId, message);
		// };
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_16 = __this->get_connection_0();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_17 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_17);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_18 = L_17->get_U3CU3E9__1_2();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_19 = L_18;
		G_B1_0 = L_19;
		G_B1_1 = L_16;
		if (L_19)
		{
			G_B2_0 = L_19;
			G_B2_1 = L_16;
			goto IL_009d;
		}
	}
	{
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_20 = __this->get_CSU24U3CU3E8__locals1_1();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_21 = __this->get_CSU24U3CU3E8__locals1_1();
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_22 = (Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC *)il2cpp_codegen_object_new(Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC_il2cpp_TypeInfo_var);
		Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__1_m5E8A263A81CA3E251F16BF6348CF2DB7FF08518B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1625834166CFA0CC4E566E9CE2323D9817E2AEAE_RuntimeMethod_var);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_23 = L_22;
		V_0 = L_23;
		NullCheck(L_20);
		L_20->set_U3CU3E9__1_2(L_23);
		Action_1_tC4A1932C3BAC3AB12474910E0F61464B28376DDC * L_24 = V_0;
		G_B2_0 = L_24;
		G_B2_1 = G_B1_1;
	}

IL_009d:
	{
		NullCheck(G_B2_1);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)G_B2_1)->set_OnData_5(G_B2_0);
		// connection.OnDisconnected = () =>
		// {
		//     // flag for removal
		//     // (can't remove directly because connection is updated
		//     //  and event is called while iterating all connections)
		//     connectionsToRemove.Add(connectionId);
		// 
		//     // call mirror event
		//     Log.Info($"KCP: OnServerDisconnected({connectionId})");
		//     OnDisconnected.Invoke(connectionId);
		// };
		KcpServerConnection_t7D1C5D3346121304B7B8209B2A1D9666C0323BF5 * L_25 = __this->get_connection_0();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_26 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_26);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_27 = L_26->get_U3CU3E9__2_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_28 = L_27;
		G_B3_0 = L_28;
		G_B3_1 = L_25;
		if (L_28)
		{
			G_B4_0 = L_28;
			G_B4_1 = L_25;
			goto IL_00d6;
		}
	}
	{
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_29 = __this->get_CSU24U3CU3E8__locals1_1();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_30 = __this->get_CSU24U3CU3E8__locals1_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_31 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_31, L_30, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3CTickIncomingU3Eb__2_m3C35AFC4CAC5D234C52999F94AF80EA8506731B9_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_32 = L_31;
		V_1 = L_32;
		NullCheck(L_29);
		L_29->set_U3CU3E9__2_3(L_32);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_33 = V_1;
		G_B4_0 = L_33;
		G_B4_1 = G_B3_1;
	}

IL_00d6:
	{
		NullCheck(G_B4_1);
		((KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE *)G_B4_1)->set_OnDisconnected_6(G_B4_0);
		// Log.Info($"KCP: OnServerConnected({connectionId})");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_34 = ((Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_StaticFields*)il2cpp_codegen_static_fields_for(Log_t6E636B6F0E986F18D3A86BB02794DF00CCCBEA76_il2cpp_TypeInfo_var))->get_Info_0();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_35 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_connectionId_0();
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A, L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_34, L_39, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		// OnConnected.Invoke(connectionId);
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_40 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_40);
		KcpServer_t06B922AAE7668C1B04E39D533B4B7A328FB1356A * L_41 = L_40->get_U3CU3E4__this_1();
		NullCheck(L_41);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_42 = L_41->get_OnConnected_0();
		U3CU3Ec__DisplayClass20_0_t9C1DDBAE0818657B6495A0E7E53E9BF1240CBE26 * L_43 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_connectionId_0();
		NullCheck(L_42);
		Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD(L_42, L_44, /*hidden argument*/Action_1_Invoke_m4694179F60041292CB92B98CB3A01F7997E16ADD_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m969E0E78E1C42F65794CD20EB0AD45EAF1F06F90_inline (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return (int)(later - earlier);
		uint32_t L_0 = ___later0;
		uint32_t L_1 = ___earlier1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * KcpConnection_GetRemoteEndPoint_m43EE2B7D6C176A08CCDF2AC80D528FAE6DC2EC1E_inline (KcpConnection_tA8A7B6EF7AF5CA6F99EF1CDF1F048E8FBE8D62DE * __this, const RuntimeMethod* method)
{
	{
		// public EndPoint GetRemoteEndPoint() => remoteEndpoint;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_remoteEndpoint_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ((Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields*)il2cpp_codegen_static_fields_for(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  Enumerator_get_Current_m952F321154F47BA1870F0AA7AFA5ACE564E14170_gshared_inline (Enumerator_tA13FD0539763438CC7C4AA57B8B6B23833FD59A0 * __this, const RuntimeMethod* method)
{
	{
		AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475  L_0 = (AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 )__this->get_current_3();
		return (AckItem_tD2ED0619A5C91987CDF01FD4C960708EF1524475 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mA813BDE3D37661127262F8BAA8D45A43351A9D17_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB5B5D4A890BD0DA92A6F46E09EF8586576FC82BA_gshared_inline (Enumerator_t3AF9DCB6AF10CD5F92BF8F52325AB3C373F37844 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
