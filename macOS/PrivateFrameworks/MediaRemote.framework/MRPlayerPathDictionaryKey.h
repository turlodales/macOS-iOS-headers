//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface MRPlayerPathDictionaryKey : NSObject <NSCopying>
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

+ (id)dictionaryKeyWithPlayerPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;

@end

