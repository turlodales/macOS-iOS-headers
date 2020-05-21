//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

#import "DOMEventListener.h"

@class DOMElement, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener>
{
    DOMElement *_tapToLoadLabelElement;
    DOMElement *_tapToLoadSpinnerElement;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)ruleDictionaryForStyle:(id)arg1;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)buildComponents;
- (id)initWithThemePath:(id)arg1 generator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

