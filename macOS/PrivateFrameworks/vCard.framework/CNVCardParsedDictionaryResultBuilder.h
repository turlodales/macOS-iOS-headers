//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParsedResultBuilder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    NSMutableDictionary *_dictionaryRep;
}

+ (id)factory;
- (void).cxx_destruct;
- (id)validCountryCodes;
- (void)setUnknownProperties:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (BOOL)setImageData:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)canSetValueForProperty:(id)arg1;
- (id)build;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

