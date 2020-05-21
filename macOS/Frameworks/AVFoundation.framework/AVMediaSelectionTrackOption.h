//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (int)trackID;
- (id)track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (BOOL)isPlayable;
- (id)mediaSubTypes;
- (id)_track;
- (id)mediaType;
- (BOOL)displaysNonForcedSubtitles;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end

