//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface DeviceErrorNode : NSObject
{
    NSString *_message;
    NSString *_explanation;
    NSURL *_url;
    DeviceErrorNode *_parentNode;
}

+ (id)detailNodesWithErrorDictionary:(id)arg1 parent:(id)arg2;
+ (id)nodeWithErrorDictionary:(id)arg1;
+ (id)nodeWithMessage:(id)arg1 explantion:(id)arg2 url:(id)arg3 parentNode:(id)arg4;
+ (id)node;
- (void).cxx_destruct;
@property(nonatomic) __weak DeviceErrorNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 explantion:(id)arg2 url:(id)arg3 parentNode:(id)arg4;

@end

