//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSFreeBusyView, EWSResponseMessageType, NSString;

@interface EWSFreeBusyResponseType : NSObject <XSDefinitionProvider>
{
    EWSResponseMessageType *_ResponseMessage;
    EWSFreeBusyView *_FreeBusyView;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSFreeBusyView *FreeBusyView; // @synthesize FreeBusyView=_FreeBusyView;
@property(retain, nonatomic) EWSResponseMessageType *ResponseMessage; // @synthesize ResponseMessage=_ResponseMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

