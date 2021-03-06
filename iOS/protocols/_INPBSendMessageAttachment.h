/* Generated by RuntimeBrowser.
 */

@protocol _INPBSendMessageAttachment <NSObject>

@required

- (_INPBFileDataAttachment *)audioMessageFile;
- (_INPBURLValue *)audioMessageFileURL;
- (bool)currentLocation;
- (_INPBFileDataAttachment *)file;
- (_INPBURLValue *)fileURL;
- (bool)hasAudioMessageFile;
- (bool)hasAudioMessageFileURL;
- (bool)hasCurrentLocation;
- (bool)hasFile;
- (bool)hasFileURL;
- (bool)hasSpeechDataURL;
- (void)setAudioMessageFile:(_INPBFileDataAttachment *)arg1;
- (void)setAudioMessageFileURL:(_INPBURLValue *)arg1;
- (void)setCurrentLocation:(bool)arg1;
- (void)setFile:(_INPBFileDataAttachment *)arg1;
- (void)setFileURL:(_INPBURLValue *)arg1;
- (void)setSpeechDataURL:(_INPBURLValue *)arg1;
- (_INPBURLValue *)speechDataURL;
- (unsigned long long)whichDatasource;

@end
