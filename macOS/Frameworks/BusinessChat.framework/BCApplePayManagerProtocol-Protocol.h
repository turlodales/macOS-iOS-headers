//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BCMessage, NSWindow;

@protocol BCApplePayManagerProtocol
@property(nonatomic) __weak id <BCApplePayManagerDelegate> delegate;
- (id)initWithMessage:(BCMessage *)arg1 delegate:(id <BCApplePayManagerDelegate>)arg2;
- (BCMessage *)message;
- (void)presentApplePayWithWindow:(NSWindow *)arg1;
- (long long)applePayStatus;
@end

