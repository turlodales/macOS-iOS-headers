//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class NSString, PRLikeness;

@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider>
{
    PRLikeness *_likeness;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PRLikeness *likeness; // @synthesize likeness=_likeness;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likeness;
- (id)initWithPRLikeness:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

