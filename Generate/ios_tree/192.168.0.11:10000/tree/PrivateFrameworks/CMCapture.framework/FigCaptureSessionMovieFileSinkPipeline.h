/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {
    bool  _momentCaptureMovieRecordingEnabled;
    NSMutableArray * _pendingIrisRecordings;
    bool  _recording;
}

@property (nonatomic) bool momentCaptureMovieRecordingEnabled;
@property (nonatomic, retain) NSMutableArray *pendingIrisRecordings;
@property (nonatomic) bool recording;

- (void)dealloc;
- (bool)momentCaptureMovieRecordingEnabled;
- (id)pendingIrisRecordings;
- (bool)recording;
- (void)setMomentCaptureMovieRecordingEnabled:(bool)arg1;
- (void)setPendingIrisRecordings:(id)arg1;
- (void)setRecording:(bool)arg1;

@end
