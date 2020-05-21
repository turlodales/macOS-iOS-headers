//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MROrigin : NSObject
{
    long long _identifier;
    long long _type;
    NSString *_displayName;
}

+ (id)localOrigin;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isLocal) BOOL local;
- (id)data;
@property(readonly, nonatomic) _MROriginProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 type:(long long)arg2 displayName:(id)arg3;

@end

