//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKArrayDifferenceConfiguration.h"

@class NSString;

@interface _CRKConcreteArrayDifferenceConfiguration : NSObject <CRKArrayDifferenceConfiguration>
{
    CDUnknownBlockType _publishedItemsComparator;
    CDUnknownBlockType _incomingItemsIdentifierFunction;
    CDUnknownBlockType _publishedItemsIdentifierFunction;
    CDUnknownBlockType _liftingFunction;
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType liftingFunction; // @synthesize liftingFunction=_liftingFunction;
@property(copy, nonatomic) CDUnknownBlockType publishedItemsIdentifierFunction; // @synthesize publishedItemsIdentifierFunction=_publishedItemsIdentifierFunction;
@property(copy, nonatomic) CDUnknownBlockType incomingItemsIdentifierFunction; // @synthesize incomingItemsIdentifierFunction=_incomingItemsIdentifierFunction;
@property(copy, nonatomic) CDUnknownBlockType publishedItemsComparator; // @synthesize publishedItemsComparator=_publishedItemsComparator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

