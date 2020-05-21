//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>
{
    NEFilterFlow *_flow;
    long long _action;
    long long _event;
    unsigned long long _bytesInboundCount;
    unsigned long long _bytesOutboundCount;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long bytesOutboundCount; // @synthesize bytesOutboundCount=_bytesOutboundCount;
@property unsigned long long bytesInboundCount; // @synthesize bytesInboundCount=_bytesInboundCount;
@property(readonly) long long event; // @synthesize event=_event;
@property long long action; // @synthesize action=_action;
@property(copy) NEFilterFlow *flow; // @synthesize flow=_flow;
- (id)initWithFlow:(id)arg1 action:(long long)arg2 event:(long long)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

