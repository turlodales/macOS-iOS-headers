//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>
{
    _Bool _refunded;
    NSData *_originStation;
    NSData *_destinationStation;
    NSNumber *_validityStartDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRefunded) _Bool refunded; // @synthesize refunded=_refunded;
@property(readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;
@property(readonly, copy, nonatomic) NSData *destinationStation; // @synthesize destinationStation=_destinationStation;
@property(readonly, copy, nonatomic) NSData *originStation; // @synthesize originStation=_originStation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

