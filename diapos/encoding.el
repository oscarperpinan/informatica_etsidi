(add-hook 'org-babel-pre-tangle-hook
          (lambda ()
            (setq coding-system-for-write 'iso-latin-1)))
