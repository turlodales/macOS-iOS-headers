//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@interface MFUpdateLocalActionsTableFromInternalBuilds : MFLibraryUpgradeStep
{
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;
+ (unsigned long long)targetVersion;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

@end

