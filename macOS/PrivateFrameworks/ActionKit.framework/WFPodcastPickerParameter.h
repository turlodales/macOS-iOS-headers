//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDynamicEnumerationParameter.h"

#import "WFDynamicEnumerationDataSource.h"

@class NSString;

@interface WFPodcastPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>
{
}

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (BOOL)preferItemPickerSheet;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

