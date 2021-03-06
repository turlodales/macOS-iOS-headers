//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _available;
    BOOL _isNetworkOriginated;
    BOOL _isVoiceMailMWI;
    NSString *_url;
    NSNumber *_count;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isVoiceMailMWI; // @synthesize isVoiceMailMWI=_isVoiceMailMWI;
@property(nonatomic) BOOL isNetworkOriginated; // @synthesize isNetworkOriginated=_isNetworkOriginated;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(nonatomic) BOOL available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTVoicemailInfoType:(id)arg1;
- (id)initWithParam:(id)arg1 available:(BOOL)arg2 count:(id)arg3 isNetworkOriginated:(BOOL)arg4 isVoiceMailMWI:(BOOL)arg5;
- (id)init;
- (id)description;

@end

