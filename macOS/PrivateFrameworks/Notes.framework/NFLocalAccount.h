//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NFAccount.h>

@interface NFLocalAccount : NFAccount
{
}

+ (id)localAccountWithContext:(id)arg1;
+ (id)existingLocalAccountForContext:(id)arg1;
- (BOOL)updateAvailability;
- (id)recoveredItemsFolder;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (long long)accountClassPriority;

// Remaining properties
@property(nonatomic) BOOL migrationOffered; // @dynamic migrationOffered;

@end

