/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKUIRemoteViewController : _UIRemoteViewController <GKRemoteViewControllerDelegate, GKServiceViewControllerDelegate> {
    NSExtension * _extension;
    GKGame * _game;
    id  _requestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id requestIdentifier;
@property (readonly) Class superclass;

+ (bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)initialItemsForExtension;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
+ (bool)shouldPropagateAppearanceCustomizations;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(id /* block */)arg3;

- (long long)_desiredStatusBarStyle;
- (void)cancelExtension;
- (id)contextForRequestIdentifier;
- (void)dealloc;
- (id)extension;
- (id)game;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(id /* block */)arg3;
- (id)init;
- (void)nudge;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (id)requestIdentifier;
- (void)setExtension:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setRequestIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(id /* block */)arg3;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
