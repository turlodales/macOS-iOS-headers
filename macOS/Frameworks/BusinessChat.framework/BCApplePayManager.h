//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCApplePayManagerProtocol.h"

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>
{
    id <BCApplePayManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BCApplePayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentApplePayWithWindow:(id)arg1;
- (id)message;
- (long long)applePayStatus;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2;

@end

