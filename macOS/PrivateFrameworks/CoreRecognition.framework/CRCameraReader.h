//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "CALayerDelegate.h"

@class CATextLayer, CRAlignmentLayer, CRBoxLayer, CRImageReader, CRMLCCModel, CRPollingTimer, DiagnosticHUDLayer, NSArray, NSCache, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSPointerArray, NSString;

@interface CRCameraReader : NSViewController <AVCaptureVideoDataOutputSampleBufferDelegate, CALayerDelegate>
{
    BOOL _hidePlacementText;
    BOOL _enableAltIDCardScan;
    BOOL _configPresentCentered;
    BOOL _isQRCode;
    BOOL _codeInverted;
    BOOL _didSendEndOrCancel;
    BOOL _didSendFindBox;
    BOOL _configUseJPEGForColor;
    BOOL _configUseFastScanning;
    BOOL _previousIdleState;
    BOOL _sessionIsStopping;
    BOOL _continousMode;
    BOOL _captureMode;
    BOOL _showDiagnosticHUD;
    float _borderPaddingIDCard;
    float _ocrOverlayBackgroundOpacity;
    NSArray *_outputObjectTypes;
    id <CRCameraReaderDelegate> _callbackDelegate;
    struct __CVBuffer *_correctedCardBuffer;
    double _configDemoSpeed;
    CRBoxLayer *_boxLayer;
    DiagnosticHUDLayer *_diagnosticHUDLayer;
    NSArray *_foundPoints;
    NSString *_foundCode;
    NSString *_previousCode;
    NSDate *_codePresented;
    unsigned long long _imagesToCapture;
    NSPointerArray *_captureBuffer;
    CRPollingTimer *_boxLayerHideTimer;
    struct opaqueCMSampleBuffer *_lastBuffer;
    NSObject<OS_dispatch_semaphore> *_processingImage;
    NSMutableDictionary *_cardNumberCounts;
    NSMutableDictionary *_cardholderCounts;
    NSMutableDictionary *_expirationDateCounts;
    NSMutableDictionary *_pinnedFoundInfo;
    CRAlignmentLayer *_alignmentLayer;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_dateCutRects;
    NSMutableArray *_nameCutRects;
    NSDictionary *_contactsCache;
    NSCache *_previousContactMatches;
    CRMLCCModel *_flatPrintedModel;
    CRMLCCModel *_embossedNumberModel;
    CRMLCCModel *_embossedExpirationModel;
    CRMLCCModel *_embossedCardholderModel;
    NSMutableArray *_cardBlurValues;
    NSMutableDictionary *_optionsDictionary;
    CRImageReader *_ocrImageReader;
    CATextLayer *_overlayTextLayer;
    NSMutableArray *_textDetectorRTFeedback;
    NSString *_ocrOverlayFontName;
    unsigned long long _captureCount;
    double _sessionTimeout;
    long long _whiteBalanceMode;
    long long _focusMode;
    long long _exposureMode;
    long long _torchMode;
    NSString *_cameraMode;
    long long _cameraPosition;
    id <CRCaptureSessionManager> _sessionManager;
    CDStruct_1b6d18a9 _sessionStarted;
    CDStruct_1b6d18a9 _pointsFound;
    CDStruct_1b6d18a9 _lastSendFindBox;
    CDStruct_1b6d18a9 _lastFieldFoundTime;
}

+ (id)targetRectsForImage:(id)arg1;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3 outputObjectTypes:(id)arg4;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 outputObjectTypes:(id)arg3;
+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 withCardBuffer:(struct __CVBuffer *)arg3 withPoints:(id)arg4 cameraIntrinsicData:(id)arg5 padding:(float)arg6 inputOrientation:(int)arg7;
+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 withCardBuffer:(struct __CVBuffer *)arg3 withPoints:(id)arg4 cameraIntrinsicData:(id)arg5;
+ (id)extractCardImage:(id)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 withCardBuffer:(struct __CVBuffer *)arg3 cameraIntrinsicData:(id)arg4;
+ (void)loadFonts;
+ (unsigned long long)supportedCameraCount;
+ (unsigned long long)supportedCameraCountForTypes:(id)arg1;
- (void).cxx_destruct;
@property(retain) id <CRCaptureSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property BOOL showDiagnosticHUD; // @synthesize showDiagnosticHUD=_showDiagnosticHUD;
@property long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(copy) NSString *cameraMode; // @synthesize cameraMode=_cameraMode;
@property long long torchMode; // @synthesize torchMode=_torchMode;
@property long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property long long focusMode; // @synthesize focusMode=_focusMode;
@property long long whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property unsigned long long captureCount; // @synthesize captureCount=_captureCount;
@property(getter=isCaptureMode) BOOL captureMode; // @synthesize captureMode=_captureMode;
@property BOOL continousMode; // @synthesize continousMode=_continousMode;
@property float ocrOverlayBackgroundOpacity; // @synthesize ocrOverlayBackgroundOpacity=_ocrOverlayBackgroundOpacity;
@property(retain) NSString *ocrOverlayFontName; // @synthesize ocrOverlayFontName=_ocrOverlayFontName;
@property(retain, nonatomic) NSMutableArray *textDetectorRTFeedback; // @synthesize textDetectorRTFeedback=_textDetectorRTFeedback;
@property(retain, nonatomic) CATextLayer *overlayTextLayer; // @synthesize overlayTextLayer=_overlayTextLayer;
@property(retain, nonatomic) CRImageReader *ocrImageReader; // @synthesize ocrImageReader=_ocrImageReader;
@property(retain, nonatomic) NSMutableDictionary *optionsDictionary; // @synthesize optionsDictionary=_optionsDictionary;
@property(retain) NSMutableArray *cardBlurValues; // @synthesize cardBlurValues=_cardBlurValues;
@property(retain) CRMLCCModel *embossedCardholderModel; // @synthesize embossedCardholderModel=_embossedCardholderModel;
@property(retain) CRMLCCModel *embossedExpirationModel; // @synthesize embossedExpirationModel=_embossedExpirationModel;
@property(retain) CRMLCCModel *embossedNumberModel; // @synthesize embossedNumberModel=_embossedNumberModel;
@property(retain) CRMLCCModel *flatPrintedModel; // @synthesize flatPrintedModel=_flatPrintedModel;
@property BOOL sessionIsStopping; // @synthesize sessionIsStopping=_sessionIsStopping;
@property(retain) NSCache *previousContactMatches; // @synthesize previousContactMatches=_previousContactMatches;
@property(retain) NSDictionary *contactsCache; // @synthesize contactsCache=_contactsCache;
@property(retain) NSMutableArray *nameCutRects; // @synthesize nameCutRects=_nameCutRects;
@property(retain) NSMutableArray *dateCutRects; // @synthesize dateCutRects=_dateCutRects;
@property BOOL previousIdleState; // @synthesize previousIdleState=_previousIdleState;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain) CRAlignmentLayer *alignmentLayer; // @synthesize alignmentLayer=_alignmentLayer;
@property CDStruct_1b6d18a9 lastFieldFoundTime; // @synthesize lastFieldFoundTime=_lastFieldFoundTime;
@property(retain) NSMutableDictionary *pinnedFoundInfo; // @synthesize pinnedFoundInfo=_pinnedFoundInfo;
@property(retain) NSMutableDictionary *expirationDateCounts; // @synthesize expirationDateCounts=_expirationDateCounts;
@property(retain) NSMutableDictionary *cardholderCounts; // @synthesize cardholderCounts=_cardholderCounts;
@property(retain) NSMutableDictionary *cardNumberCounts; // @synthesize cardNumberCounts=_cardNumberCounts;
@property(retain) NSObject<OS_dispatch_semaphore> *processingImage; // @synthesize processingImage=_processingImage;
@property struct opaqueCMSampleBuffer *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property BOOL configUseFastScanning; // @synthesize configUseFastScanning=_configUseFastScanning;
@property(retain) CRPollingTimer *boxLayerHideTimer; // @synthesize boxLayerHideTimer=_boxLayerHideTimer;
@property(retain) NSPointerArray *captureBuffer; // @synthesize captureBuffer=_captureBuffer;
@property BOOL configUseJPEGForColor; // @synthesize configUseJPEGForColor=_configUseJPEGForColor;
@property unsigned long long imagesToCapture; // @synthesize imagesToCapture=_imagesToCapture;
@property CDStruct_1b6d18a9 lastSendFindBox; // @synthesize lastSendFindBox=_lastSendFindBox;
@property BOOL didSendFindBox; // @synthesize didSendFindBox=_didSendFindBox;
@property BOOL didSendEndOrCancel; // @synthesize didSendEndOrCancel=_didSendEndOrCancel;
@property BOOL codeInverted; // @synthesize codeInverted=_codeInverted;
@property(retain) NSDate *codePresented; // @synthesize codePresented=_codePresented;
@property CDStruct_1b6d18a9 pointsFound; // @synthesize pointsFound=_pointsFound;
@property CDStruct_1b6d18a9 sessionStarted; // @synthesize sessionStarted=_sessionStarted;
@property(retain) NSString *previousCode; // @synthesize previousCode=_previousCode;
@property BOOL isQRCode; // @synthesize isQRCode=_isQRCode;
@property(retain) NSString *foundCode; // @synthesize foundCode=_foundCode;
@property(retain) NSArray *foundPoints; // @synthesize foundPoints=_foundPoints;
@property(retain) DiagnosticHUDLayer *diagnosticHUDLayer; // @synthesize diagnosticHUDLayer=_diagnosticHUDLayer;
@property(retain) CRBoxLayer *boxLayer; // @synthesize boxLayer=_boxLayer;
@property double configDemoSpeed; // @synthesize configDemoSpeed=_configDemoSpeed;
@property BOOL configPresentCentered; // @synthesize configPresentCentered=_configPresentCentered;
@property struct __CVBuffer *correctedCardBuffer; // @synthesize correctedCardBuffer=_correctedCardBuffer;
@property float borderPaddingIDCard; // @synthesize borderPaddingIDCard=_borderPaddingIDCard;
@property BOOL enableAltIDCardScan; // @synthesize enableAltIDCardScan=_enableAltIDCardScan;
@property BOOL hidePlacementText; // @synthesize hidePlacementText=_hidePlacementText;
@property __weak id <CRCameraReaderDelegate> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (void)mergeInfo:(id)arg1 intoFindInfo:(id)arg2;
- (void)updateContactsCache:(id)arg1;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (id)generateStringFromDate:(id)arg1;
@property(copy) NSArray *outputObjectTypes; // @synthesize outputObjectTypes=_outputObjectTypes;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (void)sendDidFindTarget:(id)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)sendDidDisplayMessageStyle:(long long)arg1;
- (void)showTextDetectorObjects:(id)arg1;
- (id)createTextLayerForRecognizedObject:(id)arg1;
- (id)attributedStringWithFrame:(struct CGSize)arg1 withFont:(id)arg2 withString:(id)arg3 color:(struct CGColor *)arg4;
- (void)sendDidEndWithError:(id)arg1;
- (void)sendDidEndAnimation;
- (void)sendDidRecognizeNewObjects:(id)arg1;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidCancel;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4;
- (void)animatePresentCodeAtFrameTime:(CDStruct_1b6d18a9)arg1;
- (struct CGRect)boxLayerPresentationFrame;
- (void)hideBoxLayer;
- (void)pauseBoxLayerHideTimer;
- (void)primeBoxLayerHideTimerWithFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)removeLayerTree;
- (id)findCCExpDateInImageEmbossed:(id)arg1;
- (id)findCCNameInImageEmbossed:(id)arg1;
- (id)findCCNumberInImageEmbossed:(id)arg1 withFinalDigit:(id)arg2;
- (id)findCCNumberInImageEmbossed:(id)arg1;
- (id)findCCResultsInImageFlat:(id)arg1 usingTextFeatures:(id)arg2 invert:(BOOL)arg3;
- (id)findCCObjectsEmbossed:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5;
- (id)findObjectsFlat:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 invert:(BOOL)arg4;
- (id)findCCObjectEmbossed:(id)arg1 inImage:(id)arg2 forRect:(id)arg3;
- (id)findObjectsEmbossed:(id)arg1 inImage:(id)arg2;
- (void)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 cameraIntrinsicData:(id)arg3 frameTime:(CDStruct_1b6d18a9)arg4;
- (void)findIDObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 cameraIntrinsicData:(id)arg3 frameTime:(CDStruct_1b6d18a9)arg4;
- (unsigned long long)getFirstTimeFrameIndexForPinnedField:(id)arg1;
- (void)setFirstTimeFrameIndexForPinnedField:(id)arg1;
- (void)updatePinnedInfoFrameIndex;
- (id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3;
- (void)findOCRTextObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 attachments:(id)arg3 frameTime:(CDStruct_1b6d18a9)arg4;
- (void)sendProvideOverlayObjects:(id)arg1;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flashScreenAndPlayCaptureSound;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)cameraIntrinsicDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (void)stopSession;
- (void)startSession;
- (void)cancel;
- (void)start;
- (void)captureImage;
- (void)switchToCamera:(long long)arg1;
- (id)currentDeviceID;
@property(readonly) long long currentCameraIdentifier;
- (void)switchToCameraWithDeviceID:(id)arg1;
- (void)toggleCamera;
- (void)setupInitialLayerConfiguration;
- (void)dealloc;
- (void)createCorrectedCardBuffer;
- (void)releaseCorrectedCardBuffer;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (struct __CVBuffer *)createFastAccessPixelBufferWithSize:(struct CGSize)arg1 videoFormat:(int)arg2;
- (void)orientationDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 options:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

