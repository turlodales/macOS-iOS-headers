//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, _CDContextValue, _CDContextualChangeRegistration, _CDContextualKeyPath;

@protocol _CDContextPersisting
- (void)deleteDataCreatedBefore:(NSDate *)arg1;
- (void)deleteAllData;
- (NSArray *)loadRegistrations;
- (NSDictionary *)loadValues;
- (void)deleteRegistration:(_CDContextualChangeRegistration *)arg1;
- (void)saveRegistration:(_CDContextualChangeRegistration *)arg1;
- (void)saveValue:(_CDContextValue *)arg1 forKeyPath:(_CDContextualKeyPath *)arg2;
@end

