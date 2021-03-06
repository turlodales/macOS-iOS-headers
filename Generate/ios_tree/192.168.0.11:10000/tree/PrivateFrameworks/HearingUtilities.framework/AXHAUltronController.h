/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface AXHAUltronController : NSObject <AXHADetectorManagerDelegate, AXHAListenEngineDelegate, AXHAUltronModelAssetManagerDelegate, AXUIClientDelegate> {
    AXUltronModelAssetManager * _assetManager;
    bool  _assetsReady;
    AXHARingBuffer * _audioRingBuffer;
    NSMutableDictionary * _currentDetections;
    NSUserDefaults * _defaults;
    NSMutableDictionary * _detectionResultCollection;
    AXHADetectorManager * _detectorManager;
    NSFileManager * _fileManager;
    NSObject<OS_dispatch_queue> * _fileProcessingQueue;
    AXUIClient * _hearingUIClient;
    AXHAListenEngine * _listener;
    SBSStatusBarStyleOverridesAssertion * _llStatusBarAssertion;
    double  _sampleLength;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processResult:(id)arg1;
- (void)_recordResultToFile:(id)arg1;
- (void)_setupDetectorManager;
- (void)_startRecording;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (void)cleanupUltron;
- (bool)cleanupUltronFiles:(id)arg1;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)directory;
- (void)enroll;
- (id)getDictionaryForListenType;
- (id)hearingUIClient;
- (id)init;
- (bool)isEnrolled;
- (bool)isListening;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (id)recorderSettings;
- (void)reduceFileDirectorySize;
- (id)retrieveFilesOlderThan:(double)arg1;
- (bool)startUltron;
- (bool)stopUltron;
- (void)unenroll;

@end
