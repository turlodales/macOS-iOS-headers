//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBString;

@protocol _INPBMediaDestination <NSObject>
@property(readonly, nonatomic) BOOL hasPlaylistName;
@property(retain, nonatomic) _INPBString *playlistName;
@property(nonatomic) BOOL hasMediaDestinationType;
@property(nonatomic) int mediaDestinationType;
- (int)StringAsMediaDestinationType:(NSString *)arg1;
- (NSString *)mediaDestinationTypeAsString:(int)arg1;
@end

