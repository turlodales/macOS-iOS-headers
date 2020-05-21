//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRFaultingArray.h>

#import "SCRFaultingArrayDataSource.h"

@class NSString, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRFaultingElementArray : SCRFaultingArray <SCRFaultingArrayDataSource>
{
    SCRUIElement *__uiElement;
    NSString *___attribute;
}

+ (id)arrayWithUIElement:(id)arg1 attribute:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *_attribute; // @synthesize _attribute=___attribute;
@property(retain, nonatomic) SCRUIElement *_uiElement; // @synthesize _uiElement=__uiElement;
- (unsigned long long)elementsCount;
- (id)copyElementsForRange:(struct _NSRange)arg1;
- (id)nilSentinel;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithUIElement:(id)arg1 attribute:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

