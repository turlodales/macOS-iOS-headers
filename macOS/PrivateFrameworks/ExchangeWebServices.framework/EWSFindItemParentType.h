//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSArray, NSString;

@interface EWSFindItemParentType : NSObject <XSDefinitionProvider>
{
    BOOL _IncludesLastItemInRange;
    NSArray *_Items;
    long long _IndexedPagingOffset;
    long long _NumeratorOffset;
    long long _AbsoluteDenominator;
    long long _TotalItemsInView;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long TotalItemsInView; // @synthesize TotalItemsInView=_TotalItemsInView;
@property(nonatomic) BOOL IncludesLastItemInRange; // @synthesize IncludesLastItemInRange=_IncludesLastItemInRange;
@property(nonatomic) long long AbsoluteDenominator; // @synthesize AbsoluteDenominator=_AbsoluteDenominator;
@property(nonatomic) long long NumeratorOffset; // @synthesize NumeratorOffset=_NumeratorOffset;
@property(nonatomic) long long IndexedPagingOffset; // @synthesize IndexedPagingOffset=_IndexedPagingOffset;
@property(copy, nonatomic) NSArray *Items; // @synthesize Items=_Items;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

