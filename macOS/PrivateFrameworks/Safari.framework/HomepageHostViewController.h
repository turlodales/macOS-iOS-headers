//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "HomepageHostViewController.h"

__attribute__((visibility("hidden")))
@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>
{
    id <HomepageHostViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HomepageHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)tryApplyingHomepageURL:(id)arg1 sandboxExtensionToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end

