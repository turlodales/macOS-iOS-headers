//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/SOAPBaseDocument.h>

#import "XSDefinitionProvider.h"

@class NSString, SOAPEnvelope;

@interface SOAPDocument : SOAPBaseDocument <XSDefinitionProvider>
{
    SOAPEnvelope *_Envelope;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) SOAPEnvelope *Envelope; // @synthesize Envelope=_Envelope;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_XMLStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3;
- (void)_XMLAttributesStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3;
- (void)_XMLAttributeStringWithPrefix:(id)arg1 name:(id)arg2 value:(id)arg3 options:(unsigned long long)arg4 appendingToString:(id)arg5;
- (void)_XMLQualifiedNameForNamespace:(id)arg1 elementName:(id)arg2 options:(unsigned long long)arg3 appendingToString:(id)arg4;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

