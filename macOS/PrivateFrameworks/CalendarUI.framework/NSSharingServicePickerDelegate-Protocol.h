//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class NSArray, NSSharingService, NSSharingServicePicker;
@protocol NSSharingServiceDelegate;

@protocol NSSharingServicePickerDelegate <NSObject>

@optional
- (void)sharingServicePicker:(NSSharingServicePicker *)arg1 didChooseSharingService:(NSSharingService *)arg2;
- (id <NSSharingServiceDelegate>)sharingServicePicker:(NSSharingServicePicker *)arg1 delegateForSharingService:(NSSharingService *)arg2;
- (NSArray *)sharingServicePicker:(NSSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
@end

