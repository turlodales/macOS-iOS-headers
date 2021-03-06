//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol OS_os_log;

@interface CNUIDeleteCommandHelper : NSObject
{
    CNContactStore *_contactStore;
    NSObject<OS_os_log> *_log_t;
}

+ (id)deleteCommandsForContacts:(id)arg1 contactStore:(id)arg2 ignoresGuardianRestrictions:(BOOL)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)containerIdentifiersForContacts:(id)arg1;
- (id)initWithContactStore:(id)arg1;

@end

