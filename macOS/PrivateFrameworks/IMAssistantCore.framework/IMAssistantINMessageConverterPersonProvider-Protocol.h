//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, IMSPIHandle, INPerson;

@protocol IMAssistantINMessageConverterPersonProvider <NSObject>
- (INPerson *)personFromSPIHandle:(IMSPIHandle *)arg1 contact:(CNContact *)arg2;
- (INPerson *)personFromSPIHandle:(IMSPIHandle *)arg1;
@end

