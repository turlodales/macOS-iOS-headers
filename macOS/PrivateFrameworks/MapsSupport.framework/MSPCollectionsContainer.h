//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainer.h>

@interface MSPCollectionsContainer : MSPContainer
{
    MSPContainer *_itemContainer;
}

+ (id)sharedRemoteContainer;
+ (id)sharedLocalContainer;
- (void).cxx_destruct;
@property(retain, nonatomic) MSPContainer *itemContainer; // @synthesize itemContainer=_itemContainer;
- (id)queryWithDelegate:(id)arg1;
- (id)initWithPersister:(id)arg1 itemContainer:(id)arg2;

@end

