//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TLToneStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    double _duration;
    NSString *_genreName;
    BOOL _isRingtone;
    unsigned long long _storeItemIdentifier;
    float _downloadProgress;
    NSString *_toneIdentifier;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(copy, nonatomic, setter=_setToneIdentifier:) NSString *toneIdentifier;
@property(nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property(nonatomic, setter=_setStoreItemIdentifier:) unsigned long long storeItemIdentifier;
@property(nonatomic, getter=isRingtone, setter=_setRingtone:) BOOL ringtone;
@property(copy, nonatomic, setter=_setGenreName:) NSString *genreName;
@property(nonatomic, setter=_setDuration:) double duration;
@property(copy, nonatomic, setter=_setArtistName:) NSString *artistName;
@property(copy, nonatomic, setter=_setAlbumTitle:) NSString *albumTitle;
@property(copy, nonatomic, setter=_setName:) NSString *name;
- (void)dealloc;
- (id)init;

@end

