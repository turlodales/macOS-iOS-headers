//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactLikenessMutator-Protocol.h>

@class NSString;
@protocol ABCardViewImageDataSource, CNScheduler;

@interface CNContactLikenessABCardViewImageDataSourceMutator : NSObject <CNContactLikenessMutator>
{
    id <ABCardViewImageDataSource> _dataSource;
    id <CNScheduler> _scheduler;
}

+ (id)imageFromLikeness:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <ABCardViewImageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithImageDataSource:(id)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

