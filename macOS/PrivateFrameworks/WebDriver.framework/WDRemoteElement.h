//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface WDRemoteElement : NSObject <NSCopying>
{
    id <WDSession> _relatedSession;
    NSString *_nodeHandle;
}

+ (id)translatePayload:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)elementFromIdentifier:(id)arg1 inSession:(id)arg2;
+ (id)elementFromAutomationPayload:(id)arg1 inSession:(id)arg2;
+ (id)elementFromClientPayload:(id)arg1 inSession:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nodeHandle; // @synthesize nodeHandle=_nodeHandle;
- (unsigned long long)hash;
- (BOOL)isEqualToElement:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *automationPayload;
@property(readonly, copy, nonatomic) NSDictionary *clientPayload;
- (id)automationWebElementKey;
- (id)initWithNodeHandle:(id)arg1 relatedSession:(id)arg2;

@end

