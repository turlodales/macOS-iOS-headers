//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings
{
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
@property(nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;
@property(readonly, nonatomic) NSArray *bracketedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (void)dealloc;

@end

