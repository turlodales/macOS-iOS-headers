/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    struct AVCaptureDeviceManager { int (**x1)(); struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x_2_1_1; } x2; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct CaptureDevice {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct RetainPtr<NSMutableArray> { void *x_4_1_1; } x4; bool x5; } * m_callback;
}

- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager { int (**x1)(); struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x_2_1_1; } x2; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct CaptureDevice {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct RetainPtr<NSMutableArray> { void *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
