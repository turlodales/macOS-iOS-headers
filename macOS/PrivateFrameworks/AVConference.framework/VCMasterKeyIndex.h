//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMasterKeyIndex : NSObject <NSCopying>
{
    unsigned char _MKI[16];
    unsigned int _activeSize;
    BOOL _isMapped;
    unsigned char _mapKey;
}

+ (id)makeInvalidKey;
+ (id)newMKIWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)setMapping:(unsigned char)arg1;
- (unsigned int)mappedKeyBytes:(char *)arg1 size:(unsigned int)arg2;
- (unsigned int)mappedKeySize;
- (void)fullKeyBytes:(unsigned char [16])arg1;
- (id)description;
- (const char *)MKI;
- (void)setMapKey:(unsigned char)arg1;
@property(readonly) unsigned char mapKey;
@property(readonly) BOOL isMapped;
- (void)setActiveSize:(unsigned int)arg1;
@property(readonly) unsigned int activeSize;
- (void)dealloc;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithUUID:(unsigned char [16])arg1;
- (id)initWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;

@end

