//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, CNUIMeContactMonitor;

@interface CNCreateLikenessHelper : NSObject
{
    CNContactStore *_contactStore;
    CNUIMeContactMonitor *_meMonitor;
}

+ (id)replaceLikeness:(id)arg1 inRecentLikenesses:(id)arg2 withLikeness:(id)arg3;
+ (id)firstWritableLikenessInRecentLikenesses:(id)arg1;
+ (id)likenessForContact:(id)arg1 inRecentLikenesses:(id)arg2;
+ (void)modifyLikeness:(id)arg1 forContainer:(id)arg2 contact:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)nonLinkedLikenessesModelForNewLikeness:(id)arg1 currentLikenessesModel:(id)arg2 contact:(id)arg3;
- (id)linkedLikenessesModelForNewLikeness:(id)arg1 currentLikenessesModel:(id)arg2 contact:(id)arg3;
- (BOOL)shouldCreatePersonaLikenessForEditedLikeness:(id)arg1 contact:(id)arg2;
- (id)likenessesModelForUpdatedLikeness:(id)arg1 currentLikenessModel:(id)arg2 contact:(id)arg3;
- (id)likenessesModelForNewLikeness:(id)arg1 currentLikenessesModel:(id)arg2 contact:(id)arg3;
- (id)initWithContactStore:(id)arg1 meMonitor:(id)arg2;

@end

