//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FlexSegment, NSString, NSURL;

@protocol FlexSongAssetProviderProtocol
- (void)setAudioFileExtension:(NSString *)arg1;
- (NSString *)audioFileExtension;
- (NSURL *)urlToAudioForSegment:(FlexSegment *)arg1;
- (NSURL *)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (NSURL *)urlToRoot;
@end

