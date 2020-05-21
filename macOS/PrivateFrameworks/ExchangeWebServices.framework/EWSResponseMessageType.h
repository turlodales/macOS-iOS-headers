//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSResponseMessageType : NSObject <XSDefinitionProvider>
{
    long long _ResponseClass;
    NSString *_MessageText;
    long long _ResponseCode;
    long long _DescriptiveLinkKey;
    id _MessageXml;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) id MessageXml; // @synthesize MessageXml=_MessageXml;
@property(nonatomic) long long DescriptiveLinkKey; // @synthesize DescriptiveLinkKey=_DescriptiveLinkKey;
@property(nonatomic) long long ResponseCode; // @synthesize ResponseCode=_ResponseCode;
@property(copy, nonatomic) NSString *MessageText; // @synthesize MessageText=_MessageText;
@property(nonatomic) long long ResponseClass; // @synthesize ResponseClass=_ResponseClass;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

