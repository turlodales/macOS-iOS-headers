//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSReplyBodyType : NSObject <XSDefinitionProvider>
{
    NSString *_Message;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Message; // @synthesize Message=_Message;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

