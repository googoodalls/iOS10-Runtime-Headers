/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderEnabledWebViewController : SFWebViewController <SFReaderControllerDelegate, WKNavigationDelegatePrivate> {
    BOOL  _privateBrowsingEnabled;
    SFReaderController * _readerController;
    WKPreferences * _wkPreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFReaderEnabledWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL privateBrowsingEnabled;
@property (nonatomic, readonly) SFReaderController *readerController;
@property (readonly) Class superclass;

+ (id)processPool;

- (void).cxx_destruct;
- (void)_contentBlockerDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (BOOL)privateBrowsingEnabled;
- (id)readerController;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2;
- (void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2;
- (id)readerControllerInitialConfiguration:(id)arg1;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)webViewConfiguration;

@end